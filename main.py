from os import path, listdir
from json import load as json_load
from json import dump as json_dump
from random import choice as ran_choice
from dataclasses import dataclass
from os import mkdir, system
from math import cos, pi, pow, sin
from sys import exit
from glob import glob
import ctypes
import pygame
import win32api
import win32con
import win32gui


pygame.init()
pygame.font.init()


@dataclass
class Variables:
    # Asset lists.
    icon_list: list
    font_list: list
    wheel_list: list

    # Transparent colour.
    transparent_colour: tuple

    # Window variables.
    win_title: str
    win_handle: str

    win_width: int
    win_height: int
    win_position_x: int
    win_position_y: int

    win_icon: pygame.surface
    win: pygame.surface

    # Wheel variables.
    wheel_position_x: int
    wheel_position_y: int

    wheel_passive_spin_speed: float

    wheel_chosen_wheel: pygame.surface

    # Icon wheel variables.
    icon_wheel_position_x: int
    icon_wheel_position_y: int

    icon_wheel_space_from_center: float
    icon_wheel_density: float

    icon_wheel_chosen_font: str

    # Other
    penis_mode: bool


# When called will create a new cfg file.
def new_cfg(cfg_name: str):
    new_cfg_content = {
        'transparent_colour': {
            'r': 1,
            'g': 1,
            'b': 1
        },

        'window_variables': {
            'title': 'Launcher',

            'width': 500,
            'height': 500,

            'position_x': 1420,
            'position_y': 0
        },

        'wheel_variables': {
            'position_x': 500,
            'position_y': 0,

            'passive_spin_speed': 1
        },

        'icon_wheel_variables': {
            'position_x': 500,
            'position_y': 0,

            'space_from_center': 335,
            'density': 4.5
        }
    }

    with open(f'./assets/{cfg_name}.json', 'w') as cfg_file:
        json_dump(new_cfg_content, cfg_file, indent=4)


# When called will check to see if the required folder structure exists.
def pre_checks(cfg_name: str):
    if not glob('./assets'):
        if ctypes.windll.user32.MessageBoxW(0, '\"./assets\" Folder missing. Creating a new one.',
                                            'Missing Folders', 65) == 2:
            exit()
        else:
            mkdir('./assets')
            new_cfg(cfg_name)
            mkdir('./assets/application_icon')
            mkdir('./assets/font(s)')
            mkdir('./assets/wheel(s)')
            mkdir('./assets/shortcut_assets')
            mkdir('./assets/shortcut_assets/shortcut(s)')
            mkdir('./assets/shortcut_assets/icon(s)')

    if not glob('./assets/application_icon'):
        if ctypes.windll.user32.MessageBoxW(0, '\"./assets/application_icon\" Folder missing. Creating a new one.',
                                            'Missing Folder', 65) == 2:
            exit()
        else:
            mkdir('./assets/application_icon')

    if not glob('./assets/font(s)'):
        if ctypes.windll.user32.MessageBoxW(0, '\"./assets/font(s)\" Folder missing. Creating a new one.',
                                            'Missing Folder', 65) == 2:
            exit()
        else:
            mkdir('./assets/font(s)')

    if not glob('./assets/wheel(s)'):
        if ctypes.windll.user32.MessageBoxW(0, '\"./assets/wheel(s)\" Folder missing. Creating a new one.',
                                            'Missing Folder', 65) == 2:
            exit()
        else:
            mkdir('./assets/wheel(s)')

    if not glob('./assets/shortcut_assets'):
        if ctypes.windll.user32.MessageBoxW(0, '\"./assets/shortcut_assets\" Folder missing. Creating a new one.',
                                            'Missing Folders', 65) == 2:
            exit()
        else:
            mkdir('./assets/shortcut_assets')
            mkdir('./assets/shortcut_assets/shortcut(s)')
            mkdir('./assets/shortcut_assets/icon(s)')

    if not glob('./assets/shortcut_assets/shortcut(s)'):
        if ctypes.windll.user32.MessageBoxW(0, '\"./assets/shortcut_assets/shortcut(s)\" Folder missing. Creating a new'
                                               ' one.', 'Missing Folder', 65) == 2:
            exit()
        else:
            mkdir('./assets/shortcut_assets/shortcut(s)')

    if not glob('./assets/shortcut_assets/icon(s)'):
        if ctypes.windll.user32.MessageBoxW(0, '\"./assets/shortcut_assets/icon(s)\" Folder missing. Creating a '
                                               'new one.', 'Missing Folder', 65) == 2:
            exit()
        else:
            mkdir('./assets/shortcut_assets/icon(s)')

    if not glob(f'./assets/{cfg_name}.json'):
        if ctypes.windll.user32.MessageBoxW(0, f'\"./assets/{cfg_name}.json\" File missing. Creating a new one.',
                                            'Missing File', 65) == 2:
            exit()
        else:
            new_cfg(cfg_name)

    if not glob('./assets/application_icon/icon.png'):
        if ctypes.windll.user32.MessageBoxW(0, 'You need one img in \"./assets/application_icon\" named icon.png',
                                            'Missing File', 48):
            exit()

    if not any(glob(f'./assets/font(s)/*.{x}') for x in ['ttf', 'otf']):
        if ctypes.windll.user32.MessageBoxW(0, 'You need at least one font in \"./assets/font(s)\"', 'Missing File',
                                            48):
            exit()

    if not any(glob(f'./assets/wheel(s)/*.{x}') for x in ['bmp', 'gif', 'jpeg', 'png', 'tiff', 'webp', 'xpm',
                                                          'pnm', 'pcx']):
        if ctypes.windll.user32.MessageBoxW(0, 'You need at least one img in \"./assets/wheel(s)\"', 'Missing File',
                                            48):
            exit()

    if not any(glob(f'./assets/shortcut_assets/icon(s)/*.{x}') for x in ['bmp', 'gif', 'jpeg', 'png', 'tiff',
                                                                         'webp', 'xpm', 'pnm', 'pcx']):
        if ctypes.windll.user32.MessageBoxW(0, 'You need at least one img in \"./assets/shortcut_assets/icon(s)\"',
                                            'Missing File', 48):
            exit()


# When called will set the variables from cfg.
def load_cfg(cfg_name: str):
    with open(f'./assets/{cfg_name}.json', 'r') as cfg_file:
        cfg = json_load(cfg_file)

    # Transparent colour
    Variables.transparent_colour = (cfg['transparent_colour']['r'], cfg['transparent_colour']['g'],
                                    cfg['transparent_colour']['b'])

    # Window variables
    Variables.win_title = cfg['window_variables']['title']
    Variables.win_width = cfg['window_variables']['width']
    Variables.win_height = cfg['window_variables']['height']
    Variables.win_position_x = cfg['window_variables']['position_x']
    Variables.win_position_y = cfg['window_variables']['position_y']

    # Wheel variables
    Variables.wheel_position_x = cfg['wheel_variables']['position_x']
    Variables.wheel_position_y = cfg['wheel_variables']['position_y']
    Variables.wheel_passive_spin_speed = cfg['wheel_variables']['passive_spin_speed']

    # Icon wheel variables
    Variables.icon_wheel_position_x = cfg['icon_wheel_variables']['position_x']
    Variables.icon_wheel_position_y = cfg['icon_wheel_variables']['position_y']
    Variables.icon_wheel_space_from_center = cfg['icon_wheel_variables']['space_from_center']
    Variables.icon_wheel_density = cfg['icon_wheel_variables']['density']

    # Other
    try:
        Variables.penis_mode = cfg['penis_mode']
    except:
        Variables.penis_mode = False


# When called will load the wheel(s) from ./assets/wheel(s) into a list.
def load_wheel():
    wheels = []

    for ext in ['bmp', 'gif', 'jpeg', 'png', 'tiff', 'webp', 'xpm', 'pnm', 'pcx']:
        for file in glob(f'./assets/wheel(s)/*.{ext}'):
            wheels.append(file)

    Variables.wheel_list = wheels


# When called will load font(s) from ./assets/font(s) into a list.
def load_font():
    fonts = []

    for x in ['ttf', 'otf']:
        for file in glob(f'./assets/font(s)/*.{x}'):
            fonts.append(file)

    Variables.font_list = fonts


# When called will load shortcut icon(s) from ./assets/shortcut_assets/icon(s) into a list.
def load_icon():
    icons = []

    for i in listdir("./assets/shortcut_assets/icon(s)/"):
        if path.isfile(path.join("./assets/shortcut_assets/icon(s)/", i)):
            if i.lower().endswith(('.bmp', '.gif', '.jpeg', '.png', '.tiff', '.webp', '.xpm', '.pnm', '.pcx')):
                icons.append((
                    i,
                    pygame.transform.scale(
                        pygame.image.load(path.join("./assets/shortcut_assets/icon(s)/", i)), (64, 64)),
                    path.join("./assets/shortcut_assets/icon(s)/", i)
                ))

    Variables.icon_list = icons


# When called will initialize all assets previously loaded with pygame and resize them.
def initialize_assets():
    Variables.win_icon = pygame.image.load('./assets/application_icon/icon.png')

    Variables.wheel_chosen_wheel = pygame.image.load(ran_choice(Variables.wheel_list))

    Variables.icon_wheel_chosen_font = ran_choice(Variables.font_list)


# When called will generate a usable window and color key the transparent colour.
def create_window():
    window = pygame.display.set_mode((Variables.win_width, Variables.win_height), pygame.NOFRAME)

    window.fill(Variables.transparent_colour)

    Variables.win = window

    Variables.win_handle = pygame.display.get_wm_info()['window']

    win32gui.SetWindowLong(Variables.win_handle,
                           win32con.GWL_EXSTYLE,
                           win32gui.GetWindowLong(Variables.win_handle,
                                                  win32con.GWL_EXSTYLE) | win32con.WS_EX_LAYERED)

    pygame.display.set_caption(Variables.win_title)

    pygame.display.set_icon(Variables.win_icon)

    win32gui.SetLayeredWindowAttributes(Variables.win_handle,
                                        win32api.RGB(*Variables.transparent_colour), 0, win32con.LWA_COLORKEY)

    win32gui.SetWindowPos(Variables.win_handle,
                          win32con.HWND_TOPMOST,
                          Variables.win_position_x, Variables.win_position_y, 0, 0, win32con.SWP_NOSIZE)


# When called will draw the icon wheel onto the window.
def draw_icon(pointer, drag, offset, surf):
    icon_buttons = []

    space = Variables.icon_wheel_space_from_center
    icon_density = Variables.icon_wheel_density

    for n in range(-6, 11):
        i = Variables.icon_list[(pointer + n) % len(Variables.icon_list)]
        icon_buttons.append(
            (
                surf.blit(
                    i[1],
                    (
                        (Variables.icon_wheel_position_x - cos((pi / (icon_density * 2)) * (n - drag + 1 / icon_density)
                                                               ) * space) - 32 + offset,
                        (Variables.icon_wheel_position_y + sin((pi / (icon_density * 2)) * (n - drag + 1 / icon_density)
                                                               ) * space) - 32 - offset
                    )
                ),
                i[2]
            )
        )

    for n in range(-6, 11):
        i = Variables.icon_list[(pointer + n) % len(Variables.icon_list)]

        text = pygame.font.Font(Variables.icon_wheel_chosen_font, 20).render(
            i[0][:-4],
            False,
            (255, 255, 255),
            (0, 0, 0)
        )

        text.set_colorkey((0, 0, 0))
        surf.blit(
            text,
            ((Variables.icon_wheel_position_x - cos((pi / (icon_density * 2)) * (n - drag + 1 / icon_density)) * space)
             + 48 + offset,
             (Variables.icon_wheel_position_y + sin((pi / (icon_density * 2)) * (n - drag + 1 / icon_density)) * space)
             - 16 - offset)
        )

    return icon_buttons


# When called will draw the wheel rotated from the center with a given value.
def draw_center_rotate(surf, image, top_left, angle):
    rotated_image = pygame.transform.rotate(image, angle)
    new_rect = rotated_image.get_rect(center=image.get_rect(topleft=top_left).center)

    surf.blit(rotated_image, new_rect)


# Secret mode.
def draw_penis(surf, offset):
    p_surf = pygame.font.SysFont("Comic Sans MS", 30).render("penis ", False, (255, 255, 255),
                                                             Variables.transparent_colour)
    p_surf.set_colorkey(Variables.transparent_colour)
    p_width, p_height = p_surf.get_width(), p_surf.get_height()
    for x in range(-100 + int(offset*5 % p_width), Variables.win_width, p_width):
        for y in range(-100 + int(offset*5 % p_height), Variables.win_height, p_height):
            surf.blit(p_surf, (x, y))


# This function contains the main loop for pygame and is in a function because other stuff need to run first.
def main_loop():
    glock = pygame.time.Clock()
    bangle = 0
    xt = 0
    tim = 0
    off = pow(25, -tim + 2)
    pointer = 0
    drag = 0
    clicks = draw_icon(pointer, drag, off, Variables.win)

    running = True
    while running or xt <= 25:
        if not running:
            xt += 0.5
        dt = glock.tick(144)
        tim += dt / 1000
        off = pow(25, -tim + 2)
        for event in pygame.event.get():
            if event.type == pygame.QUIT:
                running = False
            if event.type == pygame.MOUSEBUTTONDOWN:
                if event.button == 1:
                    for icons in clicks:
                        j = icons[1]
                        if icons[0].collidepoint(*pygame.mouse.get_pos()):
                            if glob(f'{j.replace("icon_images", "shortcuts")[:-4]}.lnk'):
                                system(f'start "" "{j.replace("icon_images", "shortcuts")[:-4]}.lnk"')
                                running = False
                            elif glob(f'{j.replace("icon_images", "shortcuts")[:-4]}.url'):
                                system(f'start "" "{j.replace("icon_images", "shortcuts")[:-4]}.url"')
                                running = False
                            elif glob(f'{j.replace("icon_images", "shortcuts")[:-4]}.json'):
                                # Insert json hell here.

                                with open(f'{j.replace("icon_images", "shortcuts")[:-4]}.json', 'r') as shortcut_json:
                                    path2open = json_load(shortcut_json)  # Reading the file

                                    system(f'start "" "{path2open["path"]}"')

                                # Json hell ends here.
                                running = False
                elif event.button == 5:
                    pointer -= 1
                    drag += 1
                elif event.button == 4:
                    pointer += 1
                    drag -= 1
            if event.type == pygame.KEYDOWN:
                if event.key == pygame.K_UP:
                    pointer += 1
                    drag -= 1
                if event.key == pygame.K_DOWN:
                    pointer -= 1
                    drag += 1
                if event.key == pygame.K_w:
                    pointer += 1
                    drag -= 1
                if event.key == pygame.K_s:
                    pointer -= 1
                    drag += 1
                if event.key == pygame.K_ESCAPE:
                    running = False

        bangle += .01 * dt + off / 20
        drag *= .7
        off2 = pow(xt, 2)
        draw_center_rotate(Variables.win, pygame.transform.smoothscale(Variables.wheel_chosen_wheel.convert(),
                                                                       (Variables.win_width * 2,
                                                                        Variables.win_height * 2)).convert(),
                           (-Variables.win_width + off + off2 + Variables.wheel_position_x,
                            -Variables.win_height - off - off2 + Variables.wheel_position_y), bangle)

        pointer %= len(Variables.icon_list)
        clicks = draw_icon(pointer, drag, off + off2, Variables.win)

        if Variables.penis_mode:
            draw_penis(Variables.win, bangle)

        pygame.display.flip()

    pygame.quit()


# This is the main function.
def main(cfg_name):
    pre_checks(cfg_name)
    load_cfg(cfg_name)
    load_wheel()
    load_font()
    load_icon()
    initialize_assets()
    create_window()
    main_loop()


# Makes sure that it's the one being run first.
if __name__ == '__main__':
    main('cfg')
