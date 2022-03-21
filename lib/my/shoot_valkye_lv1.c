/*
** EPITECH PROJECT, 2022
** B-MUL-200-RUN-2-1-mydefender-florian.etheve
** File description:
** shoot_valkye_lv1
*/

#include "defender.h"

void clock_damage_valkye_lv1(all_t *all, int line2, int degat, float firerate)
{
    int line = 0;
    sfTime time = sfClock_getElapsedTime(all->timer_dmg_golem);

    if (time.microseconds > firerate) {
        all->tab_of_valky[line2]->pv -= degat;
        sfClock_restart(all->timer_dmg_golem);
    }
}

void resize_valkye_lv1(all_t *all, int distance, int line, int line2)
{
    if (distance < 150 && all->tab_of_site[line]->posed == 1 &&
    all->tab_of_site[line]->texture == all->can_tower.texture
    && all->tab_of_valky[line2]->pv > 0 && all->pause != 1
    && all->endgame != 2)
        clock_damage_valkye_lv1(all, line2, 20, 2.0);
    if (distance < 100 && all->tab_of_site[line]->posed == 1 &&
    all->tab_of_site[line]->texture == all->tes_tower.texture
    && all->tab_of_valky[line2]->pv > 0 && all->pause != 1
    && all->endgame != 2)
        clock_damage_valkye_lv1(all, line2, 50, 3.0);
    if (distance < 300 && all->tab_of_site[line]->posed == 1 &&
    all->tab_of_site[line]->texture == all->arc_tower.texture
    && all->tab_of_valky[line2]->pv > 0 && all->pause != 1
    && all->endgame != 2)
        clock_damage_valkye_lv1(all, line2, 10, 1.0);
    if (distance < 200 && all->tab_of_site[line]->posed == 1 &&
    all->tab_of_site[line]->texture == all->wiz_tower.texture
    && all->tab_of_valky[line2]->pv > 0 && all->pause != 1
    && all->endgame != 2)
        clock_damage_valkye_lv1(all, line2, 15, 4.0);
}

void shoot_valkye_lv1(all_t *all)
{
    int distance = 0;
    int line = 0;
    int line2 = 0;

    while (all->tab_of_site[line] != NULL) {
        while (all->tab_of_valky[line2] != NULL) {
            distance = func_dist(all->tab_of_valky[line2]->position.x
            + 38, all->tab_of_valky[line2]->position.y + 49,
            all->tab_of_site[line]->position.x + 68,
            all->tab_of_site[line]->position.y + 62);
            resize_valkye_lv1(all, distance, line, line2);
            line2++;
        }
        line2 = 0;
        line++;
    }
}
