/*
** EPITECH PROJECT, 2022
** B-MUL-200-RUN-2-1-mydefender-florian.etheve
** File description:
** animate_btn
*/

#include "defender.h"

void animate_tuto_lvl_btn(all_t *all)
{
    sfVector2i mouse = sfMouse_getPositionRenderWindow(all->window.window);
    sfVector2f tuto_position =
    sfSprite_getPosition(all->lvl_button.tuto_sprite);
    sfIntRect tuto_rect =
    sfSprite_getTextureRect(all->lvl_button.tuto_sprite);
    if (mouse.x >= tuto_position.x &&
        mouse.x <= tuto_position.x + 319 &&
        mouse.y >= tuto_position.y &&
        mouse.y <= tuto_position.y + 219) {
            tuto_rect.left = tuto_rect.width;
            sfSprite_setTextureRect(all->lvl_button.tuto_sprite, tuto_rect);
    } else {
        all->lvl_button.tuto_taille = (sfVector2f) {1, 1};
        tuto_rect.left = 0;
        sfSprite_setScale(all->lvl_button.tuto_sprite,
        all->lvl_button.tuto_taille);
        sfSprite_setTextureRect(all->lvl_button.tuto_sprite, tuto_rect);
    }
}

void animate_back_lvl_btn(all_t *all)
{
    sfVector2i mouse = sfMouse_getPositionRenderWindow(all->window.window);
    sfVector2f back_position =
    sfSprite_getPosition(all->lvl_button.back_sprite);
    sfIntRect back_rect =
    sfSprite_getTextureRect(all->lvl_button.back_sprite);
    if (mouse.x >= back_position.x &&
        mouse.x <= back_position.x + 319 &&
        mouse.y >= back_position.y &&
        mouse.y <= back_position.y + 219) {
            back_rect.left = back_rect.width;
            sfSprite_setTextureRect(all->lvl_button.back_sprite, back_rect);
    } else {
        all->lvl_button.back_taille = (sfVector2f) {1, 1};
        back_rect.left = 0;
        sfSprite_setScale(all->lvl_button.back_sprite,
        all->lvl_button.back_taille);
        sfSprite_setTextureRect(all->lvl_button.back_sprite, back_rect);
    }
}

void res_anim(all_t *all, sfVector2i mse, sfVector2f pl_pos, sfIntRect pl_rec)
{
    if (mse.x >= pl_pos.x && mse.x <= pl_pos.x + 410 && mse.y >= pl_pos.y &&
        mse.y <= pl_pos.y + 105) {
            all->main_menu_btn.play_taille = (sfVector2f) {1.15, 1.15};
            pl_rec.left = pl_rec.width;
            sfSprite_setScale(all->main_menu_btn.play_sprite,
            all->main_menu_btn.play_taille);
            sfSprite_setTextureRect(all->main_menu_btn.play_sprite, pl_rec);
            sfSprite_setPosition(all->main_menu_btn.play_sprite,
            (sfVector2f) {401, 362});
    } else {
        all->main_menu_btn.play_taille = (sfVector2f) {1, 1};
        pl_rec.left = 0;
        sfSprite_setScale(all->main_menu_btn.play_sprite,
        all->main_menu_btn.play_taille);
        sfSprite_setTextureRect(all->main_menu_btn.play_sprite, pl_rec);
        sfSprite_setPosition(all->main_menu_btn.play_sprite,
        (sfVector2f) {434, 362});
    }
}

void animate_play_menu_btn(all_t *all)
{
    sfVector2i mouse = sfMouse_getPositionRenderWindow(all->window.window);
    sfVector2f play_position =
    sfSprite_getPosition(all->main_menu_btn.play_sprite);
    sfIntRect play_rect =
    sfSprite_getTextureRect(all->main_menu_btn.play_sprite);
    res_anim(all, mouse, play_position, play_rect);
}

void res_qt(all_t *all, sfVector2i ms, sfVector2f qt_pos, sfIntRect qt_rec)
{
    if (ms.x >= qt_pos.x && ms.x <= qt_pos.x + 410 && ms.y >= qt_pos.y &&
        ms.y <= qt_pos.y + 105) {
            all->main_menu_btn.quit_taille = (sfVector2f) {1.15, 1.15};
            qt_rec.left = qt_rec.width;
            sfSprite_setScale(all->main_menu_btn.quit_sprite,
            all->main_menu_btn.quit_taille);
            sfSprite_setTextureRect(all->main_menu_btn.quit_sprite, qt_rec);
            sfSprite_setPosition(all->main_menu_btn.quit_sprite,
            (sfVector2f) {401, 505});
    } else {
        all->main_menu_btn.quit_taille = (sfVector2f) {1, 1};
        qt_rec.left = 0;
        sfSprite_setScale(all->main_menu_btn.quit_sprite, PLAY_TAILLE);
        sfSprite_setTextureRect(all->main_menu_btn.quit_sprite, qt_rec);
        sfSprite_setPosition(all->main_menu_btn.quit_sprite,
        (sfVector2f) {434, 505});
    }
}
