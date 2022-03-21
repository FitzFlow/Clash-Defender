/*
** EPITECH PROJECT, 2022
** B-MUL-200-RUN-2-1-mydefender-florian.etheve
** File description:
** draw_with_state_2
*/

#include "defender.h"

void draw_crown(all_t *all)
{
    if (all->twr_royal.life_tower >= 66)
        all->lose.rect.left = 1704;
    else if ((all->twr_royal.life_tower >= 33 &&
    all->twr_royal.life_tower <= 65)) {
        all->win.rect.left = 568;
        all->lose.rect.left = 1136;
    } else if (all->twr_royal.life_tower > 0 &&
    all->twr_royal.life_tower <= 32) {
        all->win.rect.left = 1136;
        all->lose.rect.left = 568;
    } else
        all->win.rect.left = 1704;
    sfSprite_setTextureRect(all->win.sprite,
    all->win.rect);
    sfSprite_setTextureRect(all->lose.sprite,
    all->lose.rect);
}
