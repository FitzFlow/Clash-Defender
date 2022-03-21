/*
** EPITECH PROJECT, 2022
** B-MUL-200-RUN-2-1-mydefender-florian.etheve
** File description:
** move_golem2
*/

#include "defender.h"

void resize_clock_golem(all_t *all, int line)
{
    if (all->tab_of_golem[line]->i == 0)
        all->tab_of_golem[line]->rect.left = 161;
    else if (all->tab_of_golem[line]->i == 1)
        all->tab_of_golem[line]->rect.left = 79;
}

void resize_clock_golem2(all_t *all, int line)
{
    if (all->tab_of_golem[line]->i == 2)
        all->tab_of_golem[line]->rect.left = 161;
    else if (all->tab_of_golem[line]->i == 3)
        all->tab_of_golem[line]->rect.left = 79;
    if (all->tab_of_golem[line]->rect.top == 392)
        all->tab_of_golem[line]->rect.top = 0;
}

void resize_if_(all_t *all, int line, sfVector2f add[], sfVector2f tabpos[])
{
    if (all->tab_of_golem[line]->pv > 0) {
        all->tab_of_golem[line]->position.x += all->tab_of_golem[line]->x;
        all->tab_of_golem[line]->position.y += all->tab_of_golem[line]->y;
        resize_move_golem(all, line, add, tabpos);
        sfSprite_setPosition(all->tab_of_golem[line]->sprite,
        all->tab_of_golem[line]->position);
    }
}

void count_kill_golem(all_t *all)
{
    int line = 0;
    all->kill = 0;
    while (all->tab_of_golem[line] != NULL && all->kill != 12) {
        if (all->tab_of_golem[line]->pv <= 0)
            all->kill++;
        if (all->tab_of_valky[line]->pv <= 0)
            all->kill++;
        if (all->tab_of_barbare[line]->pv <= 0)
            all->kill++;
        line++;
    }
}
