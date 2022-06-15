import pygame.time
import win32gui
from ring import *
from icons import *
import math


def main():
    glock = pygame.time.Clock()
    bangle = 0
    xt = 0
    global hwnd
    tim = 0
    off = math.pow(25, -tim + 2)
    pointer = 0
    drag = 0
    clicks = draw_icons(pointer, drag, off)

    running = True
    while running or xt <= 25:
        if not running:
            xt += 0.25
        dt = glock.tick(144)
        tim += dt / 1000
        off = math.pow(25, -tim + 2)
        for event in pygame.event.get():
            if event.type == pygame.QUIT:
                running = False
            if event.type == pygame.MOUSEBUTTONDOWN:
                if event.button == 1:
                    for i in clicks:
                        j = i[1]
                        if i[0].collidepoint(*pygame.mouse.get_pos()):
                            print(f'{j.replace("ico_images", "shortcuts")[:-4]}.lnk')
                            if os.path.isfile(f'{j.replace("ico_images", "shortcuts")[:-4]}.lnk'):
                                os.system(f'start "" "{j.replace("ico_images", "shortcuts")[:-4]}.lnk"')
                                running = False
                            elif os.path.isfile(f'{j.replace("ico_images", "shortcuts")[:-4]}.url'):
                                os.system(f'start "" "{j.replace("ico_images", "shortcuts")[:-4]}.url"')
                                running = False
                elif event.button == 5:
                    pointer -= 1
                    drag += 1
                elif event.button == 4:
                    pointer += 1
                    drag -= 1
            if event.type == pygame.KEYDOWN:
                #if event.key == pygame.K_SPACE:
                    # pointer += 1
                    # drag -= 1
                if event.key == pygame.K_ESCAPE:
                    running = False
            if pygame.mouse.get_focused() and win32gui.GetForegroundWindow() != hwnd:
                try:
                    win32gui.SetForegroundWindow(hwnd)
                except:
                    pass

        bangle += .01 * dt + off / 20
        drag *= 0.9
        off2 = math.pow(xt, 2)
        blitRotateCenter(Win, ring, (off + off2, -500 - off - off2), bangle)

        pointer %= length_of
        clicks = draw_icons(pointer, drag, off + off2)
        # penis()

        pygame.display.update()

    pygame.quit()


if __name__ == "__main__":
    main()
