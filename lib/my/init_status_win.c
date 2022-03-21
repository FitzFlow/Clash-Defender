/*
** EPITECH PROJECT, 2022
** B-MUL-200-RUN-2-1-mydefender-florian.etheve
** File description:
** init_status_win
*/

#include "defender.h"

my_win init_win(void)
{
    my_win win;
    win.sprite = sfSprite_create();
    win.texture = sfTexture_createFromFile(WIN, NULL);
    win.position = (sfVector2f) {353, 383};
    win.rect = (sfIntRect) {0, 0, 568, 238};
    win.taille = (sfVector2f) {1, 1};
    sfSprite_setTexture(win.sprite, win.texture, sfTrue);
    sfSprite_setScale(win.sprite, win.taille);
    sfSprite_setPosition(win.sprite, win.position);
    sfSprite_setTextureRect(win.sprite, win.rect);
    return win;
}

my_lose init_lose(void)
{
    my_lose lose;
    lose.sprite = sfSprite_create();
    lose.texture = sfTexture_createFromFile(LOSE, NULL);
    lose.position = (sfVector2f) {353, 80};
    lose.rect = (sfIntRect) {0, 0, 568, 238};
    lose.taille = (sfVector2f) {1, 1};
    sfSprite_setTexture(lose.sprite, lose.texture, sfTrue);
    sfSprite_setScale(lose.sprite, lose.taille);
    sfSprite_setPosition(lose.sprite, lose.position);
    sfSprite_setTextureRect(lose.sprite, lose.rect);
    return lose;
}
