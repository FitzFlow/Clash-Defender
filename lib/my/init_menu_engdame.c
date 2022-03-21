/*
** EPITECH PROJECT, 2022
** B-MUL-200-RUN-2-1-mydefender-florian.etheve
** File description:
** init_menu_engdame
*/

#include "defender.h"

back_to_menu init_menu_endgame(void)
{
    back_to_menu menu;
    menu.sprite = sfSprite_create();
    menu.texture = sfTexture_createFromFile(BTN_MENU, NULL);
    menu.position = (sfVector2f) {531, 625};
    menu.taille = (sfVector2f) {1, 1};
    menu.rect = (sfIntRect) {0, 0, 200, 56};
    sfSprite_setTexture(menu.sprite, menu.texture, sfTrue);
    sfSprite_setTextureRect(menu.sprite, menu.rect);
    sfSprite_setPosition(menu.sprite, menu.position);
    sfSprite_setScale(menu.sprite, menu.taille);
    return (menu);
}
