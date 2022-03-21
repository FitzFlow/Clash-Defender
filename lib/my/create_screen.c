/*
** EPITECH PROJECT, 2021
** B-MUL-100-RUN-1-1-myrunner-brice.huet
** File description:
** load_window
*/

#include "defender.h"

window_t load_window(void)
{
    window_t window;
    window.mode = (sfVideoMode) {1280, 720, 64};
    window.window = sfRenderWindow_create(window.mode,
    "Clash Defender", sfClose, NULL);
    return (window);
}
