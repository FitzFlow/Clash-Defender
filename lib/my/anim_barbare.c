/*
** EPITECH PROJECT, 2022
** B-MUL-200-RUN-2-1-mydefender-florian.etheve
** File description:
** anim_barbare
*/

#include "defender.h"

void resize_clock_barbare(all_t *all, int line)
{
    if (all->tab_of_barbare[line]->i == 0)
        all->tab_of_barbare[line]->rect.top = 393;
    else if (all->tab_of_barbare[line]->i == 1)
        all->tab_of_barbare[line]->rect.top = 262;
}

void resize_clock_barbare2(all_t *all, int line)
{
    if (all->tab_of_barbare[line]->i == 2)
        all->tab_of_barbare[line]->rect.top = 393;
    else if (all->tab_of_barbare[line]->i == 3)
        all->tab_of_barbare[line]->rect.top = 262;
    if (all->tab_of_barbare[line]->rect.left == 351)
        all->tab_of_barbare[line]->rect.left = 0;
}

void all_clock_barbare(all_t *all)
{
    int line = 0;
    while (all->tab_of_barbare[line] != NULL) {
        resize_clock_barbare(all, line);
        resize_clock_barbare2(all, line);
        all->tab_of_barbare[line]->rect.left += 117;
        sfSprite_setTextureRect(all->tab_of_barbare[line]->sprite,
        all->tab_of_barbare[line]->rect);
        line ++;
    }
}
