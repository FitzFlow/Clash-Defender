/*
** EPITECH PROJECT, 2022
** B-MUL-200-RUN-2-1-mydefender-florian.etheve
** File description:
** shoot_valkye_lv4
*/

#include "defender.h"

void clock_damage_valky_lv4(all_t *all, int line2, int degat, float firerate)
{
    int line = 0;
    sfTime time = sfClock_getElapsedTime(all->timer_dmg_golem);

    if (time.microseconds > firerate) {
        all->tab_of_valky_lv4[line2]->pv -= degat;
        sfClock_restart(all->timer_dmg_golem);
    }
}

void resize_valky_lv4(all_t *all, int dist, int line, int line2)
{
    if (dist < 150 && all->tab_of_site_lv_4[line]->posed == 1 &&
    all->tab_of_site_lv_4[line]->texture == all->can_tower.texture
    && all->tab_of_valky_lv4[line2]->pv > 0 && all->pause != 1
    && all->endgame != 2)
        clock_damage_valky_lv4(all, line2, 5, 5.0);
    if (dist < 100 && all->tab_of_site_lv_4[line]->posed == 1 &&
    all->tab_of_site_lv_4[line]->texture == all->tes_tower.texture
    && all->tab_of_valky_lv4[line2]->pv > 0 && all->pause != 1
    && all->endgame != 2)
        clock_damage_valky_lv4(all, line2, 12, 3.0);
    if (dist < 300 && all->tab_of_site_lv_4[line]->posed == 1 &&
    all->tab_of_site_lv_4[line]->texture == all->arc_tower.texture
    && all->tab_of_valky_lv4[line2]->pv > 0 && all->pause != 1
    && all->endgame != 2)
        clock_damage_valky_lv4(all, line2, 7, 1.0);
    if (dist < 200 && all->tab_of_site_lv_4[line]->posed == 1 &&
    all->tab_of_site_lv_4[line]->texture == all->wiz_tower.texture
    && all->tab_of_valky_lv4[line2]->pv > 0 && all->pause != 1
    && all->endgame != 2)
        clock_damage_valky_lv4(all, line2, 6, 10.0);
}

void shoot_valky_lv4(all_t *all)
{
    int distance = 0;
    int line = 0;
    int line2 = 0;

    while (all->tab_of_site_lv_4[line] != NULL) {
        while (all->tab_of_valky_lv4[line2] != NULL) {
            distance = func_dist(all->tab_of_valky_lv4[line2]->position.x
            + 38, all->tab_of_valky_lv4[line2]->position.y + 49,
            all->tab_of_site_lv_4[line]->position.x + 68,
            all->tab_of_site_lv_4[line]->position.y + 62);
            resize_valky_lv4(all, distance, line, line2);
            line2++;
        }
        line2 = 0;
        line++;
    }
}
