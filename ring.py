import os
import random
import pygame
from pygame._sdl2.video import Window
import win32api
import win32con
import win32gui
import ctypes

pygame.init()
pygame.font.init()

ctypes.windll.user32.ShowWindow(ctypes.windll.kernel32.GetConsoleWindow(), 0)

# Initializing Pygame
W, H = 500, 500
Win = pygame.display.set_mode((W, H), pygame.NOFRAME)
TRANS_COLOUR = (1, 1, 1)
Win.fill(TRANS_COLOUR)
hwnd = pygame.display.get_wm_info()["window"]
win32gui.SetWindowLong(hwnd, win32con.GWL_EXSTYLE,
                       win32gui.GetWindowLong(hwnd, win32con.GWL_EXSTYLE) | win32con.WS_EX_LAYERED)
pygame.display.set_caption("Launchy Thingy")
ico = pygame.image.load("./assets/application_icon/ring_ico.png")
pygame.display.set_icon(ico)

# Initializing Pygame > Window Transparency
win32gui.SetLayeredWindowAttributes(hwnd, win32api.RGB(*TRANS_COLOUR), 0, win32con.LWA_COLORKEY)
pos_x = 1920 - Win.get_width()
pos_y = 0
window = Window.from_display_module()
win32gui.SetWindowPos(hwnd, win32con.HWND_TOPMOST, pos_x, pos_y, 0, 0, win32con.SWP_NOSIZE)

# Main run loop
rings = []
for i in os.listdir("./assets/ring/"):
    if os.path.isfile(os.path.join("./assets/ring", i)):
        if i.lower().endswith(('.png', '.jpg', '.jpeg', '.bmp', '.tiff', '.pcx', '.pnm', '.webm', '.xpm')):
            rings.append(i)
print(rings)

ring = pygame.transform.smoothscale(pygame.image.load("./assets/ring/" + random.choice(rings)).convert(),
                                    (1000, 1000)).convert()


def blitRotateCenter(surf, image, topleft, angle):
    rotated_image = pygame.transform.rotate(image, angle)
    new_rect = rotated_image.get_rect(center=image.get_rect(topleft=topleft).center)

    surf.blit(rotated_image, new_rect)
