/*
** EPITECH PROJECT, 2022
** B-MUL-200-RUN-2-1-mydefender-florian.etheve
** File description:
** animate_btn_resume
*/

#include "defender.h"

void resume_setting_btn(all_t *all)
{
    sfVector2i mouse = sfMouse_getPositionRenderWindow(all->window.window);
    sfVector2f resume_position =
    sfSprite_getPosition(all->resume.sprite);
    sfIntRect resume_rect =
    sfSprite_getTextureRect(all->resume.sprite);
    res_resume_setting(all, mouse, resume_position, resume_rect);
}

void quit_setting_btn(all_t *all)
{
    sfVector2i mouse = sfMouse_getPositionRenderWindow(all->window.window);
    sfVector2f quit_position =
    sfSprite_getPosition(all->quit.sprite);
    sfIntRect quit_rect =
    sfSprite_getTextureRect(all->quit.sprite);
    res_quit_setting(all, mouse, quit_position, quit_rect);
}

void menu_setting_btn(all_t *all)
{
    sfVector2i mouse = sfMouse_getPositionRenderWindow(all->window.window);
    sfVector2f menu_position =
    sfSprite_getPosition(all->menu.sprite);
    sfIntRect menu_rect =
    sfSprite_getTextureRect(all->menu.sprite);
    res_menu_setting(all, mouse, menu_position, menu_rect);
}

void menu_setting_btn_endgame(all_t *all)
{
    sfVector2i mouse = sfMouse_getPositionRenderWindow(all->window.window);
    sfVector2f menu_position =
    sfSprite_getPosition(all->back_menu.sprite);
    sfIntRect menu_rect =
    sfSprite_getTextureRect(all->back_menu.sprite);
    res_menu_setting_endgame(all, mouse, menu_position, menu_rect);
}
