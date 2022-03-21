/*
** EPITECH PROJECT, 2022
** B-MUL-200-RUN-2-1-mydefender-florian.etheve
** File description:
** anim_valkye
*/

#include "defender.h"

void resize_clock_valkye(all_t *all, int line)
{
    if (all->tab_of_valky[line]->i == 0)
        all->tab_of_valky[line]->rect.top = 262;
    else if (all->tab_of_valky[line]->i == 1)
        all->tab_of_valky[line]->rect.top = 393;
}

void resize_clock_valkye2(all_t *all, int line)
{
    if (all->tab_of_valky[line]->i == 2)
        all->tab_of_valky[line]->rect.top = 262;
    else if (all->tab_of_valky[line]->i == 3)
        all->tab_of_valky[line]->rect.top = 393;
    if (all->tab_of_valky[line]->rect.left == 351)
        all->tab_of_valky[line]->rect.left = 0;
}

void all_clock_valky(all_t *all)
{
    int line = 0;
    while (all->tab_of_valky[line] != NULL) {
        resize_clock_valkye(all, line);
        all->tab_of_valky[line]->rect.left += 117;
        resize_clock_valkye2(all, line);
        sfSprite_setTextureRect(all->tab_of_valky[line]->sprite,
        all->tab_of_valky[line]->rect);
        line ++;
    }
}
