/*
** EPITECH PROJECT, 2022
** B-MUL-200-RUN-2-1-mydefender-florian.etheve
** File description:
** move_valkye_lv3
*/

#include "defender.h"

void resize_move_valkye_3(all_t *all, int line,
sfVector2f add[], sfVector2f tabpos[])
{
    if (all->tab_of_valky_lv3[line]->position.x ==
    tabpos[all->tab_of_valky_lv3[line]->i].x
    && (all->tab_of_valky_lv3[line]->position.y ==
    tabpos[all->tab_of_valky_lv3[line]->i].y)) {
        all->tab_of_valky_lv3[line]->x =
        add[all->tab_of_valky_lv3[line]->i].x;
        all->tab_of_valky_lv3[line]->y =
        add[all->tab_of_valky_lv3[line]->i].y;
        all->tab_of_valky_lv3[line]->i += 1;
    }
}

void resize_move_3(all_t *all, int line, sfVector2f add[], sfVector2f tabpos[])
{
    if (all->tab_of_valky_lv3[line]->pv > 0) {
        all->tab_of_valky_lv3[line]->position.x +=
        all->tab_of_valky_lv3[line]->x;
        all->tab_of_valky_lv3[line]->position.y +=
        all->tab_of_valky_lv3[line]->y;
        resize_move_valkye_3(all, line, add, tabpos);
        sfSprite_setPosition(all->tab_of_valky_lv3[line]->sprite,
        all->tab_of_valky_lv3[line]->position);
    }
}

void move_valkye_3(all_t *all)
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
        while (all->tab_of_valky_lv3[line] != NULL) {
            all->tab_of_valky_lv3[line]->x =
            add[all->tab_of_valky_lv3[line]->i].x;
            all->tab_of_valky_lv3[line]->y =
            add[all->tab_of_valky_lv3[line]->i].y;
            resize_move_3(all, line, add, tabpos);
            line++;
        }
    }
}
