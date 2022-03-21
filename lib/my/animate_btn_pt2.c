/*
** EPITECH PROJECT, 2022
** B-MUL-200-RUN-2-1-mydefender-florian.etheve
** File description:
** animate_btn_pt2
*/

#include "defender.h"

void animate_quit_menu_btn(all_t *all)
{
    sfVector2i mouse = sfMouse_getPositionRenderWindow(all->window.window);
    sfVector2f quit_position =
    sfSprite_getPosition(all->main_menu_btn.quit_sprite);
    sfIntRect quit_rect =
    sfSprite_getTextureRect(all->main_menu_btn.quit_sprite);
    res_qt(all, mouse, quit_position, quit_rect);
}

void setting_anim(all_t *all, sfVector2i mse,
sfVector2f set_pos, sfIntRect set_rec)
{
    if (mse.x >= set_pos.x && mse.x <= set_pos.x + 72 && mse.y >= set_pos.y &&
        mse.y <= set_pos.y + 72 && (all->pause != 1) && (all->endgame != 2)) {
            all->setting.taille = (sfVector2f) {1.1, 1.1};
            set_rec.left = set_rec.width;
            sfSprite_setScale(all->setting.sprite,
            all->setting.taille);
            sfSprite_setTextureRect(all->setting.sprite, set_rec);
            sfSprite_setPosition(all->setting.sprite,
            (sfVector2f) {883, 626});
    } else {
        all->setting.taille = (sfVector2f) {1, 1};
        set_rec.left = 0;
        sfSprite_setScale(all->setting.sprite,
        all->setting.taille);
        sfSprite_setTextureRect(all->setting.sprite, set_rec);
        sfSprite_setPosition(all->setting.sprite,
        (sfVector2f) {883, 626});
    }
}

void animate_setting_btn(all_t *all)
{
    sfVector2i mouse = sfMouse_getPositionRenderWindow(all->window.window);
    sfVector2f setting_position =
    sfSprite_getPosition(all->setting.sprite);
    sfIntRect setting_rect =
    sfSprite_getTextureRect(all->setting.sprite);
    setting_anim(all, mouse, setting_position, setting_rect);
}
