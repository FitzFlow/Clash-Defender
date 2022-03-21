/*
** EPITECH PROJECT, 2022
** B-MUL-200-RUN-2-1-mydefender-florian.etheve
** File description:
** animate_btn_set2
*/

#include "defender.h"

void res_resume_setting(all_t *all, sfVector2i mse,
sfVector2f set_pos, sfIntRect set_rec)
{
    if (mse.x >= set_pos.x && mse.x <= set_pos.x + 200 && mse.y >= set_pos.y &&
        mse.y <= set_pos.y + 56 && (all->pause == 1)) {
            all->resume.taille = (sfVector2f) {1.1, 1.1};
            set_rec.left = set_rec.width;
            sfSprite_setScale(all->resume.sprite,
            all->resume.taille);
            sfSprite_setTextureRect(all->resume.sprite, set_rec);
            sfSprite_setPosition(all->resume.sprite,
            (sfVector2f) {506, 282});
    } else {
        all->resume.taille = (sfVector2f) {1, 1};
        set_rec.left = 0;
        sfSprite_setScale(all->resume.sprite,
        all->resume.taille);
        sfSprite_setTextureRect(all->resume.sprite, set_rec);
        sfSprite_setPosition(all->resume.sprite,
        (sfVector2f) {517, 282});
    }
}

void res_quit_setting(all_t *all, sfVector2i mse,
sfVector2f set_pos, sfIntRect set_rec)
{
    if (mse.x >= set_pos.x && mse.x <= set_pos.x + 200 && mse.y >= set_pos.y &&
        mse.y <= set_pos.y + 56 && (all->pause == 1)) {
            all->quit.taille = (sfVector2f) {1.1, 1.1};
            set_rec.left = set_rec.width;
            sfSprite_setScale(all->quit.sprite,
            all->quit.taille);
            sfSprite_setTextureRect(all->quit.sprite, set_rec);
            sfSprite_setPosition(all->quit.sprite,
            (sfVector2f) {506, 470});
    } else {
        all->quit.taille = (sfVector2f) {1, 1};
        set_rec.left = 0;
        sfSprite_setScale(all->quit.sprite,
        all->quit.taille);
        sfSprite_setTextureRect(all->quit.sprite, set_rec);
        sfSprite_setPosition(all->quit.sprite,
        (sfVector2f) {517, 476});
    }
}

void res_menu_setting(all_t *all, sfVector2i mse,
sfVector2f set_pos, sfIntRect set_rec)
{
    if (mse.x >= set_pos.x && mse.x <= set_pos.x + 200 && mse.y >= set_pos.y &&
        mse.y <= set_pos.y + 56 && (all->pause == 1) || mse.x >= set_pos.x &&
        mse.x <= set_pos.x + 200 && mse.y >= set_pos.y &&
        mse.y <= set_pos.y + 56 && (all->endgame == 2)) {
            all->menu.taille = (sfVector2f) {1.1, 1.1};
            set_rec.left = set_rec.width;
            sfSprite_setScale(all->menu.sprite,
            all->menu.taille);
            sfSprite_setTextureRect(all->menu.sprite, set_rec);
            sfSprite_setPosition(all->menu.sprite,
            (sfVector2f) {506, 370});
    } else {
        all->menu.taille = (sfVector2f) {1, 1};
        set_rec.left = 0;
        sfSprite_setScale(all->menu.sprite,
        all->menu.taille);
        sfSprite_setTextureRect(all->menu.sprite, set_rec);
        sfSprite_setPosition(all->menu.sprite,
        (sfVector2f) {517, 381});
    }
}

void res_menu_setting_endgame(all_t *all, sfVector2i mse,
sfVector2f set_pos, sfIntRect set_rec)
{
    if (mse.x >= set_pos.x && mse.x <= set_pos.x + all->back_menu.rect.width
    && mse.y >= set_pos.y && mse.y <= set_pos.y + all->back_menu.rect.height
    && (all->endgame == 2)) {
        all->back_menu.taille = (sfVector2f) {1.1, 1.1};
        set_rec.left = set_rec.width;
        sfSprite_setScale(all->back_menu.sprite,
        all->back_menu.taille);
        sfSprite_setTextureRect(all->back_menu.sprite, set_rec);
        sfSprite_setPosition(all->back_menu.sprite,
        (sfVector2f) {520, 620});
    } else {
        all->back_menu.taille = (sfVector2f) {1, 1};
        set_rec.left = 0;
        sfSprite_setScale(all->back_menu.sprite,
        all->back_menu.taille);
        sfSprite_setTextureRect(all->back_menu.sprite, set_rec);
        sfSprite_setPosition(all->back_menu.sprite,
        (sfVector2f) {531, 625});
    }
}
