/*
** EPITECH PROJECT, 2022
** B-MUL-200-RUN-2-1-mydefender-florian.etheve
** File description:
** init_btn_setting
*/

#include "defender.h"

btn_setting init_btn_setting(void)
{
    btn_setting set;
    set.sprite = sfSprite_create();
    set.texture = sfTexture_createFromFile(SETTING, NULL);
    set.taille = (sfVector2f) {1, 1};
    set.position = (sfVector2f) {883, 626};
    set.rect = (sfIntRect) {0, 0, 72, 72};
    sfSprite_setPosition(set.sprite, set.position);
    sfSprite_setScale(set.sprite, set.taille);
    sfSprite_setTexture(set.sprite, set.texture, sfTrue);
    sfSprite_setTextureRect(set.sprite, set.rect);
    return set;
}

back_pause init_back_pause(void)
{
    back_pause back;
    back.sprite = sfSprite_create();
    back.texture = sfTexture_createFromFile(BACK_PAUSE, NULL);
    back.taille = (sfVector2f) {1, 1};
    back.position = (sfVector2f) {0, 0};
    sfSprite_setPosition(back.sprite, back.position);
    sfSprite_setScale(back.sprite, back.taille);
    sfSprite_setTexture(back.sprite, back.texture, sfTrue);
    return back;
}

page_setting init_page_setting(void)
{
    page_setting pg_set;
    pg_set.sprite = sfSprite_create();
    pg_set.texture = sfTexture_createFromFile(PAGE_SETTING, NULL);
    pg_set.taille = (sfVector2f) {1, 1};
    pg_set.position = (sfVector2f) {270, 121};
    sfSprite_setPosition(pg_set.sprite, pg_set.position);
    sfSprite_setScale(pg_set.sprite, pg_set.taille);
    sfSprite_setTexture(pg_set.sprite, pg_set.texture, sfTrue);
    return pg_set;
}
