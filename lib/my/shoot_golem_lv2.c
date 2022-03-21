/*
** EPITECH PROJECT, 2022
** B-MUL-200-RUN-2-1-mydefender-florian.etheve
** File description:
** shoot_golem_lv2
*/

#include "defender.h"

void count_kill_all_lv2(all_t *all)
{
    int line = 0;
    all->kill = 0;
    while (all->tab_of_golem_lv2[line] != NULL && all->kill != 18) {
        if (all->tab_of_golem_lv2[line]->pv <= 0)
            all->kill++;
        if (all->tab_of_valky_lv2[line]->pv <= 0)
            all->kill++;
        if (all->tab_of_barbare_lv2[line]->pv <= 0)
            all->kill++;
        line++;
    }
}

void clock_damage_golem_lv2(all_t *all, int line2, int degat, float firerate)
{
    int line = 0;
    sfTime time = sfClock_getElapsedTime(all->timer_dmg_golem);

    if (time.microseconds > firerate) {
        all->tab_of_golem_lv2[line2]->pv -= degat;
        sfClock_restart(all->timer_dmg_golem);
    }
}

void resize_golem_lv2(all_t *all, int distance, int line, int line2)
{
    if (distance < 150 && all->tab_of_site_lv_2[line]->posed == 1 &&
    all->tab_of_site_lv_2[line]->texture == all->can_tower.texture
    && all->tab_of_golem_lv2[line2]->pv > 0 && all->pause != 1
    && all->endgame != 2)
        clock_damage_golem_lv2(all, line2, 20, 5.0);
    if (distance < 100 && all->tab_of_site_lv_2[line]->posed == 1 &&
    all->tab_of_site_lv_2[line]->texture == all->tes_tower.texture
    && all->tab_of_golem_lv2[line2]->pv > 0 && all->pause != 1
    && all->endgame != 2)
        clock_damage_golem_lv2(all, line2, 50, 3.0);
    if (distance < 300 && all->tab_of_site_lv_2[line]->posed == 1 &&
    all->tab_of_site_lv_2[line]->texture == all->arc_tower.texture
    && all->tab_of_golem_lv2[line2]->pv > 0 && all->pause != 1
    && all->endgame != 2)
        clock_damage_golem_lv2(all, line2, 10, 1.0);
    if (distance < 200 && all->tab_of_site_lv_2[line]->posed == 1 &&
    all->tab_of_site_lv_2[line]->texture == all->wiz_tower.texture
    && all->tab_of_golem_lv2[line2]->pv > 0 && all->pause != 1
    && all->endgame != 2)
        clock_damage_golem_lv2(all, line2, 15, 4.0);
}

void shoot_golem_lv2(all_t *all)
{
    int distance = 0;
    int line = 0;
    int line2 = 0;

    while (all->tab_of_site_lv_2[line] != NULL) {
        while (all->tab_of_golem_lv2[line2] != NULL) {
            distance = func_dist(all->tab_of_golem_lv2[line2]->position.x
            + 38, all->tab_of_golem_lv2[line2]->position.y + 49,
            all->tab_of_site_lv_2[line]->position.x + 68,
            all->tab_of_site_lv_2[line]->position.y + 62);
            resize_golem_lv2(all, distance, line, line2);
            line2++;
        }
        line2 = 0;
        line++;
    }
}
