/*
** EPITECH PROJECT, 2022
** towerkinglose
** File description:
** look if tower take a damage
*/

#include "defender.h"

void resize_damage_royale(all_t *all, int line2, int line3)
{
    while (all->tab_of_valky[line2] != NULL) {
        if ((all->twr_royal.position.y + 150) ==
        all->tab_of_valky[line2]->position.y && all->endgame != 2) {
            all->twr_royal.life_tower -= 6;
            all->endtower_king += 1;
        }
        line2++;
    }
    while (all->tab_of_barbare[line3] != NULL) {
        if ((all->twr_royal.position.y + 150) ==
        all->tab_of_barbare[line3]->position.y && all->endgame != 2) {
            all->twr_royal.life_tower -= 4;
            all->endtower_king += 1;
        }
        line3++;
    }
}

void damage_royale_tower(all_t *all)
{
    int line = 0;
    int line2 = 0;
    int line3 = 0;

    while (all->tab_of_golem[line] != NULL) {
        if ((all->twr_royal.position.y + 150) ==
        all->tab_of_golem[line]->position.y && all->endgame != 2) {
            all->twr_royal.life_tower -= 10;
            all->endtower_king += 1;
        }
        line++;
    }
    resize_damage_royale(all, line2, line3);
}
