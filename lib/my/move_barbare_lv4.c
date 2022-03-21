/*
** EPITECH PROJECT, 2022
** B-MUL-200-RUN-2-1-mydefender-florian.etheve
** File description:
** move_barbare_lv4
*/

#include "defender.h"

void resize_move_barbare_4(all_t *all, int line,
sfVector2f add[], sfVector2f tabpos[])
{
    if (all->tab_of_barbare_lv4[line]->position.x ==
    tabpos[all->tab_of_barbare_lv4[line]->i].x
    && (all->tab_of_barbare_lv4[line]->position.y ==
    tabpos[all->tab_of_barbare_lv4[line]->i].y)) {
        all->tab_of_barbare_lv4[line]->x =
        add[all->tab_of_barbare_lv4[line]->i].x;
        all->tab_of_barbare_lv4[line]->y =
        add[all->tab_of_barbare_lv4[line]->i].y;
        all->tab_of_barbare_lv4[line]->i += 1;
    }
}

void resize_move_barb_4(all_t *all, int line, sfVector2f add[],
sfVector2f tabpos[])
{
    if (all->tab_of_barbare_lv4[line]->pv > 0) {
        all->tab_of_barbare_lv4[line]->position.x +=
        all->tab_of_barbare_lv4[line]->x;
        all->tab_of_barbare_lv4[line]->position.y +=
        all->tab_of_barbare_lv4[line]->y;
        resize_move_barbare_4(all, line, add, tabpos);
        sfSprite_setPosition(all->tab_of_barbare_lv4[line]->sprite,
        all->tab_of_barbare_lv4[line]->position);
    }
}

void move_barbare_4(all_t *all)
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
        while (all->tab_of_barbare_lv4[line] != NULL) {
            all->tab_of_barbare_lv4[line]->x =
            add[all->tab_of_barbare_lv4[line]->i].x;
            all->tab_of_barbare_lv4[line]->y =
            add[all->tab_of_barbare_lv4[line]->i].y;
            resize_move_barb_4(all, line, add, tabpos);
            line++;
        }
    }
}
