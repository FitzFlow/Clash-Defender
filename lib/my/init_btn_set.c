/*
** EPITECH PROJECT, 2022
** B-MUL-200-RUN-2-1-mydefender-florian.etheve
** File description:
** init_btn_set
*/

#include "defender.h"

resume_setting init_resume_setting(void)
{
    resume_setting res;
    res.sprite = sfSprite_create();
    res.texture = sfTexture_createFromFile(BTN_RESUME, NULL);
    res.taille = (sfVector2f) {1, 1};
    res.position = (sfVector2f) {517, 282};
    res.rect = (sfIntRect) {0, 0, 200, 56};
    sfSprite_setPosition(res.sprite, res.position);
    sfSprite_setScale(res.sprite, res.taille);
    sfSprite_setTexture(res.sprite, res.texture, sfTrue);
    sfSprite_setTextureRect(res.sprite, res.rect);
    return res;
}

menu_setting init_menu_setting(void)
{
    menu_setting menu;
    menu.sprite = sfSprite_create();
    menu.texture = sfTexture_createFromFile(BTN_MENU, NULL);
    menu.taille = (sfVector2f) {1, 1};
    menu.position = (sfVector2f) {517, 381};
    menu.rect = (sfIntRect) {0, 0, 200, 56};
    sfSprite_setPosition(menu.sprite, menu.position);
    sfSprite_setScale(menu.sprite, menu.taille);
    sfSprite_setTexture(menu.sprite, menu.texture, sfTrue);
    sfSprite_setTextureRect(menu.sprite, menu.rect);
    return menu;
}

quit_setting init_quit_setting(void)
{
    quit_setting quit;
    quit.sprite = sfSprite_create();
    quit.texture = sfTexture_createFromFile(BTN_QUIT, NULL);
    quit.taille = (sfVector2f) {1, 1};
    quit.position = (sfVector2f) {517, 476};
    quit.rect = (sfIntRect) {0, 0, 200, 56};
    sfSprite_setPosition(quit.sprite, quit.position);
    sfSprite_setScale(quit.sprite, quit.taille);
    sfSprite_setTexture(quit.sprite, quit.texture, sfTrue);
    sfSprite_setTextureRect(quit.sprite, quit.rect);
    return quit;
}
