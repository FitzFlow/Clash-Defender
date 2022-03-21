/*
** EPITECH PROJECT, 2022
** B-MUL-200-RUN-2-1-mydefender-florian.etheve
** File description:
** move_valkye
*/

#include "defender.h"

void resize_move_valkye(all_t *all, int line,
sfVector2f add[], sfVector2f tabpos[])
{
    if (all->tab_of_valky[line]->position.x ==
    tabpos[all->tab_of_valky[line]->i].x
    && (all->tab_of_valky[line]->position.y ==
    tabpos[all->tab_of_valky[line]->i].y)) {
        all->tab_of_valky[line]->x = add[all->tab_of_valky[line]->i].x;
        all->tab_of_valky[line]->y = add[all->tab_of_valky[line]->i].y;
        all->tab_of_valky[line]->i += 1;
    }
}

void resize_move(all_t *all, int line, sfVector2f add[], sfVector2f tabpos[])
{
    if (all->tab_of_valky[line]->pv > 0) {
        all->tab_of_valky[line]->position.x += all->tab_of_valky[line]->x;
        all->tab_of_valky[line]->position.y += all->tab_of_valky[line]->y;
        resize_move_valkye(all, line, add, tabpos);
        sfSprite_setPosition(all->tab_of_valky[line]->sprite,
        all->tab_of_valky[line]->position);
    }
}

void move_valkye(all_t *all)
{
    sfVector2f add[3] = {(sfVector2f) {0, -0.5},
    (sfVector2f) {0.5, 0}, (sfVector2f) {0, -0.5} };
    sfVector2f tabpos[3] = {(sfVector2f) {550,475},
    (sfVector2f) {550, 235},(sfVector2f) {1050, 235}};

    int line = 0;

    if (all->pause != 1 && all->endgame != 2) {
        while (all->tab_of_valky[line] != NULL) {
            resize_move(all, line, add, tabpos);
            line++;
        }
    }
}
