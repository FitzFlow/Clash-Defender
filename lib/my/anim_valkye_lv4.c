/*
** EPITECH PROJECT, 2022
** B-MUL-200-RUN-2-1-mydefender-florian.etheve
** File description:
** anim_valkye_lv4
*/

#include "defender.h"

void clock_resize_valkye_4(all_t *all, int line)
{
    if (all->tab_of_valky_lv4[line]->i == 4)
        all->tab_of_valky_lv4[line]->rect.top = 393;
    if (all->tab_of_valky_lv4[line]->i == 5)
        all->tab_of_valky_lv4[line]->rect.top = 262;
}

void resize_clock_valkye_4(all_t *all, int line)
{
    if (all->tab_of_valky_lv4[line]->i == 0)
        all->tab_of_valky_lv4[line]->rect.top = 393;
    if (all->tab_of_valky_lv4[line]->i == 1)
        all->tab_of_valky_lv4[line]->rect.top = 262;
    if (all->tab_of_valky_lv4[line]->i == 2)
        all->tab_of_valky_lv4[line]->rect.top = 0;
    if (all->tab_of_valky_lv4[line]->i == 3)
        all->tab_of_valky_lv4[line]->rect.top = 262;
    clock_resize_valkye_4(all, line);
}

void resize_clock_valkye2_4(all_t *all, int line)
{
    if (all->tab_of_valky_lv4[line]->i == 6)
        all->tab_of_valky_lv4[line]->rect.top = 0;
    if (all->tab_of_valky_lv4[line]->i == 7)
        all->tab_of_valky_lv4[line]->rect.top = 262;
    if (all->tab_of_valky_lv4[line]->i == 8)
        all->tab_of_valky_lv4[line]->rect.top = 393;
    if (all->tab_of_valky_lv4[line]->rect.left == 351)
        all->tab_of_valky_lv4[line]->rect.left = 0;
}

void all_clock_valky_4(all_t *all)
{
    int line = 0;
    while (all->tab_of_valky_lv4[line] != NULL) {
        resize_clock_valkye_4(all, line);
        all->tab_of_valky_lv4[line]->rect.left += 117;
        resize_clock_valkye2_4(all, line);
        sfSprite_setTextureRect(all->tab_of_valky_lv4[line]->sprite,
        all->tab_of_valky_lv4[line]->rect);
        line ++;
    }
}
