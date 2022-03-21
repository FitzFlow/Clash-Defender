/*
** EPITECH PROJECT, 2022
** B-MUL-200-RUN-2-1-mydefender-florian.etheve
** File description:
** move_golem_lv4
*/

#include "defender.h"

void all_clock_golem_lv4(all_t *all)
{
    int line = 0;
    while (all->tab_of_golem_lv4[line] != NULL) {
        resize_clock_golem_lv4(all, line);
        resize_clock_golem2_lv4(all, line);
        all->tab_of_golem_lv4[line]->rect.top += 98;
        sfSprite_setTextureRect(all->tab_of_golem_lv4[line]->sprite,
        all->tab_of_golem_lv4[line]->rect);
        line ++;
    }
}

void clock_golem_lv4(all_t *all)
{
    int line = 0;
    sfTime time = sfClock_getElapsedTime(all->timer_golem);

    if (time.microseconds > 400000.0) {
        all_clock_golem_lv4(all);
        all_clock_valky_4(all);
        all_clock_barbare_4(all);
        sfClock_restart(all->timer_golem);
    }
}

void resize_move_golem_lv4(all_t *all, int line,
sfVector2f add[], sfVector2f tabpos[])
{
    if (all->tab_of_golem_lv4[line]->position.x ==
    tabpos[all->tab_of_golem_lv4[line]->i].x &&
    (all->tab_of_golem_lv4[line]->position.y ==
    tabpos[all->tab_of_golem_lv4[line]->i].y)) {
        all->tab_of_golem_lv4[line]->x =
        add[all->tab_of_golem_lv4[line]->i].x;
        all->tab_of_golem_lv4[line]->y =
        add[all->tab_of_golem_lv4[line]->i].y;
        all->tab_of_golem_lv4[line]->i += 1;
    }
}

void resize_if_lv4(all_t *all, int line, sfVector2f add[], sfVector2f tabpos[])
{
    if (all->tab_of_golem_lv4[line]->pv > 0) {
        all->tab_of_golem_lv4[line]->position.x +=
        all->tab_of_golem_lv4[line]->x;
        all->tab_of_golem_lv4[line]->position.y +=
        all->tab_of_golem_lv4[line]->y;
        resize_move_golem_lv4(all, line, add, tabpos);
        sfSprite_setPosition(all->tab_of_golem_lv4[line]->sprite,
        all->tab_of_golem_lv4[line]->position);
    }
}

void move_golem_lv4(all_t *all)
{
    sfVector2f add[9] = {(sfVector2f) {0, -0.5},
    (sfVector2f) {0.5, 0}, (sfVector2f) {0, 0.5}, (sfVector2f) {0.5, 0},
    (sfVector2f) {0, -0.5}, (sfVector2f) {0.5, 0}, (sfVector2f) {0, 0.5},
    (sfVector2f) {0.5, 0}, (sfVector2f) {0, -0.5} };
    sfVector2f tabpos[9] = {(sfVector2f) {41, 48},
    (sfVector2f) {308, 48},(sfVector2f) {308, 551}, (sfVector2f) {550, 551},
    (sfVector2f) {550, 48}, (sfVector2f) {803, 48}, (sfVector2f) {803, 562},
    (sfVector2f) {1073, 562}, (sfVector2f) {1073, -50}};

    int line = 0;
    if (all->pause != 1 && all->endgame != 2) {
        while (all->tab_of_golem_lv4[line] != NULL) {
            all->tab_of_golem_lv4[line]->x =
            add[all->tab_of_golem_lv4[line]->i].x;
            all->tab_of_golem_lv4[line]->y =
            add[all->tab_of_golem_lv4[line]->i].y;
            resize_if_lv4(all, line, add, tabpos);
            line++;
        }
    }
}
