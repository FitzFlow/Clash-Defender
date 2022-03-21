/*
** EPITECH PROJECT, 2022
** B-MUL-200-RUN-2-1-mydefender-florian.etheve
** File description:
** move_golem_lv3
*/

#include "defender.h"

void all_clock_golem_lv3(all_t *all)
{
    int line = 0;
    while (all->tab_of_golem_lv3[line] != NULL) {
        resize_clock_golem_lv3(all, line);
        resize_clock_golem2_lv3(all, line);
        all->tab_of_golem_lv3[line]->rect.top += 98;
        sfSprite_setTextureRect(all->tab_of_golem_lv3[line]->sprite,
        all->tab_of_golem_lv3[line]->rect);
        line ++;
    }
}

void clock_golem_lv3(all_t *all)
{
    int line = 0;
    sfTime time = sfClock_getElapsedTime(all->timer_golem);

    if (time.microseconds > 400000.0) {
        all_clock_golem_lv3(all);
        all_clock_valky_3(all);
        all_clock_barbare_3(all);
        sfClock_restart(all->timer_golem);
    }
}

void resize_move_golem_lv3(all_t *all, int line,
sfVector2f add[], sfVector2f tabpos[])
{
    if (all->tab_of_golem_lv3[line]->position.x ==
    tabpos[all->tab_of_golem_lv3[line]->i].x &&
    (all->tab_of_golem_lv3[line]->position.y ==
    tabpos[all->tab_of_golem_lv3[line]->i].y)) {
        all->tab_of_golem_lv3[line]->x =
        add[all->tab_of_golem_lv3[line]->i].x;
        all->tab_of_golem_lv3[line]->y =
        add[all->tab_of_golem_lv3[line]->i].y;
        all->tab_of_golem_lv3[line]->i += 1;
    }
}

void resize_if_lv3(all_t *all, int line, sfVector2f add[], sfVector2f tabpos[])
{
    if (all->tab_of_golem_lv3[line]->pv > 0) {
        all->tab_of_golem_lv3[line]->position.x +=
        all->tab_of_golem_lv3[line]->x;
        all->tab_of_golem_lv3[line]->position.y +=
        all->tab_of_golem_lv3[line]->y;
        resize_move_golem_lv3(all, line, add, tabpos);
        sfSprite_setPosition(all->tab_of_golem_lv3[line]->sprite,
        all->tab_of_golem_lv3[line]->position);
    }
}

void move_golem_lv3(all_t *all)
{
    sfVector2f add[7] = {(sfVector2f) {0, -0.5},
    (sfVector2f) {-0.5, 0}, (sfVector2f) {0, -0.5}, (sfVector2f) {0.5, 0},
    (sfVector2f) {0, 0.5}, (sfVector2f) {0.5, 0},
    (sfVector2f) {0, -0.5}};
    sfVector2f tabpos[7] = {(sfVector2f) {297,245},
    (sfVector2f) {75, 245},(sfVector2f) {75, 22}, (sfVector2f) {730, 22},
    (sfVector2f) {730, 461}, (sfVector2f) {1073, 461},
    (sfVector2f) {1073, - 50}};

    int line = 0;
    if (all->pause != 1 && all->endgame != 2) {
        while (all->tab_of_golem_lv3[line] != NULL) {
            all->tab_of_golem_lv3[line]->x =
            add[all->tab_of_golem_lv3[line]->i].x;
            all->tab_of_golem_lv3[line]->y =
            add[all->tab_of_golem_lv3[line]->i].y;
            resize_if_lv3(all, line, add, tabpos);
            line++;
        }
    }
}
