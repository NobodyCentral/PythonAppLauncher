import math, os
import pygame

from main import *

ico_list = []
length_of = 0
pygame.font.init()
for i in os.listdir("./assets/shortcut_stuff/ico_images/"):
    if os.path.isfile(os.path.join("./assets/shortcut_stuff/ico_images/", i)):
        if i.lower().endswith(('.png', '.jpg', '.bmp', '.pcx', '.pnm', '.xpm')):
            ico_list.append((
                i,
                pygame.transform.scale(
                    pygame.image.load(os.path.join("./assets/shortcut_stuff/ico_images/", i)), (64, 64)),
                os.path.join("./assets/shortcut_stuff/ico_images/", i)
            ))
    # print(ico_list)
length_of = len(ico_list)
# print(length_of)

fonts = []
for i in os.listdir("./assets/font"):
    if os.path.isfile(os.path.join("./assets/font", i)):
        fonts.append(pygame.font.Font(os.path.join("./assets/font", i),20))

chosen_font = random.choice(fonts)



def draw_icons(pointer, drag, offset):
    global ico_list, chosen_font

    space = 335
    icon_density = 4.5

    win = pygame.display.get_surface()
    clicky_icos = []
    for n in range(-6,11):
        i = ico_list[(pointer + n)%length_of]
        clicky_icos.append((
            win.blit(i[1],
                     (
                         (500-math.cos((math.pi / (icon_density*2)) * (n-drag+1/icon_density))*space)-32+offset,
                         (math.sin((math.pi / (icon_density*2)) * (n-drag+1/icon_density))*space)-32-offset))

        , i[2]))
    for n in range(-6, 11):
        i = ico_list[(pointer + n)%length_of]
        try:
            text = chosen_font.render(i[0][:-4], False, (255, 255, 255), (0, 0, 0))
        except:
            text = pygame.font.SysFont("Comic Sans MS", 20).render(i[0][:-4], False, (255, 255, 255), (0, 0, 0))
        text.set_colorkey((0, 0, 0))
        win.blit(text, ((500-math.cos((math.pi / (icon_density*2)) * (n-drag+1/icon_density))*space)+48+offset,
                         (math.sin((math.pi / (icon_density*2)) * (n-drag+1/icon_density))*space)-16-offset))
    return clicky_icos
