/*
** EPITECH PROJECT, 2022
** B-MUL-200-RUN-2-1-mydefender-florian.etheve
** File description:
** move_ennemy
*/

#include "defender.h"

void all_clock_golem(all_t *all)
{
    int line = 0;
    while (all->tab_of_golem[line] != NULL) {
        resize_clock_golem(all, line);
        resize_clock_golem2(all, line);
        all->tab_of_golem[line]->rect.top += 98;
        sfSprite_setTextureRect(all->tab_of_golem[line]->sprite,
        all->tab_of_golem[line]->rect);
        line ++;
    }
}

void clock_golem(all_t *all)
{
    int line = 0;
    sfTime time = sfClock_getElapsedTime(all->timer_golem);

    if (time.microseconds > 400000.0) {
        all_clock_golem(all);
        all_clock_valky(all);
        all_clock_barbare(all);
        sfClock_restart(all->timer_golem);
    }
}

void resize_move_golem(all_t *all, int line,
sfVector2f add[], sfVector2f tabpos[])
{
    if (all->tab_of_golem[line]->position.x ==
    tabpos[all->tab_of_golem[line]->i].x
    && (all->tab_of_golem[line]->position.y ==
    tabpos[all->tab_of_golem[line]->i].y)) {
        all->tab_of_golem[line]->x = add[all->tab_of_golem[line]->i].x;
        all->tab_of_golem[line]->y = add[all->tab_of_golem[line]->i].y;
        all->tab_of_golem[line]->i += 1;
    }
}

void move_golem(all_t *all)
{
    sfVector2f add[3] = {(sfVector2f) {0, -0.5},
    (sfVector2f) {0.5, 0}, (sfVector2f) {0, -0.5} };
    sfVector2f tabpos[3] = {(sfVector2f) {550,460},
    (sfVector2f) {550, 235},(sfVector2f) {1050, 235}};

    int line = 0;

    if (all->pause != 1 && all->endgame != 2) {
        while (all->tab_of_golem[line] != NULL) {
            resize_if_(all, line, add, tabpos);
            line++;
        }
    }
}
