/*
** EPITECH PROJECT, 2022
** B-MUL-200-RUN-2-1-mydefender-florian.etheve
** File description:
** anim_barbare_lv2
*/

#include "defender.h"

void clock_resize_barb_lv2(all_t *all, int line)
{
    if (all->tab_of_barbare_lv2[line]->i == 2)
        all->tab_of_barbare_lv2[line]->rect.top = 0;
    else if (all->tab_of_barbare_lv2[line]->i == 3)
        all->tab_of_barbare_lv2[line]->rect.top = 393;
}

void resize_clock_barbare_2(all_t *all, int line)
{
    if (all->tab_of_barbare_lv2[line]->i == 0)
        all->tab_of_barbare_lv2[line]->rect.top = 262;
    else if (all->tab_of_barbare_lv2[line]->i == 1)
        all->tab_of_barbare_lv2[line]->rect.top = 393;
    else
        clock_resize_barb_lv2(all, line);
}

void resize_clock_barbare2_2(all_t *all, int line)
{
    if (all->tab_of_barbare_lv2[line]->i == 4)
        all->tab_of_barbare_lv2[line]->rect.top = 262;
    if (all->tab_of_barbare_lv2[line]->rect.left == 351)
        all->tab_of_barbare_lv2[line]->rect.left = 0;
}

void all_clock_barbare_2(all_t *all)
{
    int line = 0;
    while (all->tab_of_barbare_lv2[line] != NULL) {
        resize_clock_barbare_2(all, line);
        resize_clock_barbare2_2(all, line);
        all->tab_of_barbare_lv2[line]->rect.left += 117;
        sfSprite_setTextureRect(all->tab_of_barbare_lv2[line]->sprite,
        all->tab_of_barbare_lv2[line]->rect);
        line ++;
    }
}
