/*
** EPITECH PROJECT, 2022
** B-MUL-200-RUN-2-1-mydefender-florian.etheve
** File description:
** move_golem_lv2_part2
*/

#include "defender.h"

void resize_clock_golem_lv3(all_t *all, int line)
{
    if (all->tab_of_golem_lv3[line]->i == 0)
        all->tab_of_golem_lv3[line]->rect.left = 77;
    if (all->tab_of_golem_lv3[line]->i == 1)
        all->tab_of_golem_lv3[line]->rect.left = 232;
    if (all->tab_of_golem_lv3[line]->i == 2)
        all->tab_of_golem_lv3[line]->rect.left = 77;
    if (all->tab_of_golem_lv3[line]->i == 3)
        all->tab_of_golem_lv3[line]->rect.left = 155;
    if (all->tab_of_golem_lv3[line]->i == 4)
        all->tab_of_golem_lv3[line]->rect.left = 0;
}

void resize_clock_golem2_lv3(all_t *all, int line)
{
    if (all->tab_of_golem_lv3[line]->i == 5)
        all->tab_of_golem_lv3[line]->rect.left = 155;
    if (all->tab_of_golem_lv3[line]->i == 6)
        all->tab_of_golem_lv3[line]->rect.left = 77;
    if (all->tab_of_golem_lv3[line]->rect.top == 392)
        all->tab_of_golem_lv3[line]->rect.top = 0;
}
