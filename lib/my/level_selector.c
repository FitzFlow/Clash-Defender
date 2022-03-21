/*
** EPITECH PROJECT, 2022
** B-MUL-200-RUN-2-1-mydefender-florian.etheve
** File description:
** level_selector
*/

#include "my.h"

level_select_t init_level_select(void)
{
    level_select_t level;
    level.sprite = sfSprite_create();
    level.texture = sfTexture_createFromFile(LEVEL_SELECT, NULL);
    level.position = (sfVector2f) {0, 0};
    level.taille = (sfVector2f) {1, 1};
    sfSprite_setPosition(level.sprite, level.position);
    sfSprite_setScale(level.sprite, level.taille);
    sfSprite_setTexture(level.sprite, level.texture, sfTrue);
    level.theme_sound = sfMusic_createFromFile(LEVEL_SOUND);
    return (level);
}

level_selector_btn init_lvl_selector_button(void)
{
    level_selector_btn lvl_btn;
    lvl_btn.back_sprite = sfSprite_create();
    lvl_btn.back_texture = sfTexture_createFromFile(LEVEL_SELECT_BCK, NULL);
    lvl_btn.back_position = (sfVector2f) {5, 5};
    lvl_btn.back_taille = (sfVector2f) {1, 1};
    lvl_btn.back_resize = (sfIntRect) {0, 0, 319, 209};
    sfSprite_setPosition(lvl_btn.back_sprite, lvl_btn.back_position);
    sfSprite_setScale(lvl_btn.back_sprite, lvl_btn.back_taille);
    sfSprite_setTexture(lvl_btn.back_sprite, lvl_btn.back_texture, sfTrue);
    sfSprite_setTextureRect(lvl_btn.back_sprite, lvl_btn.back_resize);
    lvl_btn.tuto_sprite = sfSprite_create();
    lvl_btn.tuto_texture = sfTexture_createFromFile(LEVEL_SLCT_TUTO, NULL);
    lvl_btn.tuto_position = (sfVector2f) {5, 487};
    lvl_btn.tuto_taille = (sfVector2f) {1, 1};
    lvl_btn.tuto_resize = (sfIntRect) {0, 0, 319, 209};
    sfSprite_setPosition(lvl_btn.tuto_sprite, lvl_btn.tuto_position);
    sfSprite_setScale(lvl_btn.tuto_sprite, lvl_btn.tuto_taille);
    sfSprite_setTexture(lvl_btn.tuto_sprite, lvl_btn.tuto_texture, sfTrue);
    sfSprite_setTextureRect(lvl_btn.tuto_sprite, lvl_btn.tuto_resize);
    return (lvl_btn);
}
