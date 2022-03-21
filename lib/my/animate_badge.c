/*
** EPITECH PROJECT, 2022
** B-MUL-200-RUN-2-1-mydefender-florian.etheve
** File description:
** animate_badge
*/

#include "defender.h"

void animate_badge1_btn(all_t *all)
{
    sfVector2i mouse = sfMouse_getPositionRenderWindow(all->window.window);
    sfVector2f badge_position =
    sfSprite_getPosition(all->badge1.sprite);
    sfIntRect badge_rect =
    sfSprite_getTextureRect(all->badge1.sprite);
    if (mouse.x >= badge_position.x &&
        mouse.x <= badge_position.x + 86 &&
        mouse.y >= badge_position.y &&
        mouse.y <= badge_position.y + 104) {
            badge_rect.left = badge_rect.width;
            sfSprite_setTextureRect(all->badge1.sprite, badge_rect);
    } else {
        badge_rect.left = 0;
        sfSprite_setTextureRect(all->badge1.sprite, badge_rect);
    }
}

void animate_badge2_btn(all_t *all)
{
    sfVector2i mouse = sfMouse_getPositionRenderWindow(all->window.window);
    sfVector2f badge_position =
    sfSprite_getPosition(all->badge2.sprite);
    sfIntRect badge_rect =
    sfSprite_getTextureRect(all->badge2.sprite);
    if (mouse.x >= badge_position.x &&
        mouse.x <= badge_position.x + 86 &&
        mouse.y >= badge_position.y &&
        mouse.y <= badge_position.y + 104) {
            badge_rect.left = badge_rect.width;
            sfSprite_setTextureRect(all->badge2.sprite, badge_rect);
    } else {
        badge_rect.left = 0;
        sfSprite_setTextureRect(all->badge2.sprite, badge_rect);
    }
}

void animate_badge3_btn(all_t *all)
{
    sfVector2i mouse = sfMouse_getPositionRenderWindow(all->window.window);
    sfVector2f badge_position =
    sfSprite_getPosition(all->badge3.sprite);
    sfIntRect badge_rect =
    sfSprite_getTextureRect(all->badge3.sprite);
    if (mouse.x >= badge_position.x &&
        mouse.x <= badge_position.x + 86 &&
        mouse.y >= badge_position.y &&
        mouse.y <= badge_position.y + 104) {
            badge_rect.left = badge_rect.width;
            sfSprite_setTextureRect(all->badge3.sprite, badge_rect);
    } else {
        badge_rect.left = 0;
        sfSprite_setTextureRect(all->badge3.sprite, badge_rect);
    }
}

void animate_badge4_btn(all_t *all)
{
    sfVector2i mouse = sfMouse_getPositionRenderWindow(all->window.window);
    sfVector2f badge_position =
    sfSprite_getPosition(all->badge4.sprite);
    sfIntRect badge_rect =
    sfSprite_getTextureRect(all->badge4.sprite);
    if (mouse.x >= badge_position.x &&
        mouse.x <= badge_position.x + 86 &&
        mouse.y >= badge_position.y &&
        mouse.y <= badge_position.y + 104) {
            badge_rect.left = badge_rect.width;
            sfSprite_setTextureRect(all->badge4.sprite, badge_rect);
    } else {
        badge_rect.left = 0;
        sfSprite_setTextureRect(all->badge4.sprite, badge_rect);
    }
}

void call_badge_anim(all_t *all)
{
    animate_badge1_btn(all);
    animate_badge2_btn(all);
    animate_badge3_btn(all);
    animate_badge4_btn(all);
}
