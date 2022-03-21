/*
** EPITECH PROJECT, 2022
** B-MUL-200-RUN-2-1-mydefender-florian.etheve
** File description:
** tower_king_lose_lv3
*/

#include "defender.h"

void resize_damage_royale_lv3(all_t *all, int line2, int line3)
{
    while (all->tab_of_valky_lv3[line2] != NULL) {
        if ((all->twr_royal.position.y + 150) ==
        all->tab_of_valky_lv3[line2]->position.y &&
        all->tab_of_valky_lv3[line2]->position.x >= 995 &&
        all->endgame != 2) {
            all->twr_royal.life_tower -= 6;
            all->endtower_king += 1;
        }
        line2++;
    }
    while (all->tab_of_barbare_lv3[line3] != NULL) {
        if ((all->twr_royal.position.y + 150) ==
        all->tab_of_barbare_lv3[line3]->position.y &&
        all->tab_of_barbare_lv3[line3]->position.x >= 995 &&
        all->endgame != 2) {
            all->twr_royal.life_tower -= 4;
            all->endtower_king += 1;
        }
        line3++;
    }
}

void damage_royale_tower_lv3(all_t *all)
{
    int line = 0;
    int line2 = 0;
    int line3 = 0;

    while (all->tab_of_golem_lv3[line] != NULL) {
        if ((all->twr_royal.position.y + 150) ==
        all->tab_of_golem_lv3[line]->position.y &&
        all->tab_of_golem_lv3[line]->position.x >= 995 &&
        all->endgame != 2) {
            all->twr_royal.life_tower -= 10;
            all->endtower_king += 1;
        }
        line++;
    }
    resize_damage_royale_lv3(all, line2, line3);
}
