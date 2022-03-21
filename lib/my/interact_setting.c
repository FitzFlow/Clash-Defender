/*
** EPITECH PROJECT, 2022
** B-MUL-200-RUN-2-1-mydefender-florian.etheve
** File description:
** interact_setting
*/

#include "defender.h"

void interact_setting(all_t *all)
{
    sfVector2i click_position =
    sfMouse_getPositionRenderWindow(all->window.window);
    sfVector2f setting_postion = sfSprite_getPosition(all->setting.sprite);
    if (all->window.event.type == sfEvtMouseButtonPressed &&
    all->window.event.mouseButton.button == sfMouseLeft &&
    all->pause != 1 && all->endgame != 2) {
        if (click_position.x >= setting_postion.x &&
        click_position.x <= setting_postion.x + 72 &&
        click_position.y >= setting_postion.y &&
        click_position.y <= setting_postion.y + 72) {
            sfSound_play(all->main_menu.click_sound);
            all->pause = 1;
        }
    }
}

void interact_resume_setting(all_t *all)
{
    sfVector2i click_position =
    sfMouse_getPositionRenderWindow(all->window.window);
    sfVector2f resume_postion = sfSprite_getPosition(all->resume.sprite);
    if (all->window.event.type == sfEvtMouseButtonPressed &&
    all->window.event.mouseButton.button == sfMouseLeft && all->pause == 1) {
        if (click_position.x >= resume_postion.x &&
        click_position.x <= resume_postion.x + 200 &&
        click_position.y >= resume_postion.y &&
        click_position.y <= resume_postion.y + 56) {
            sfSound_play(all->main_menu.click_sound);
            all->pause = 0;
        }
    }
}

void interact_menu_setting(all_t *all, game_state_t *state)
{
    sfVector2i click_position =
    sfMouse_getPositionRenderWindow(all->window.window);
    sfVector2f menu_postion = sfSprite_getPosition(all->menu.sprite);
    if (all->window.event.type == sfEvtMouseButtonPressed &&
    all->window.event.mouseButton.button == sfMouseLeft && all->pause == 1 ||
    all->window.event.type == sfEvtMouseButtonPressed &&
    all->window.event.mouseButton.button == sfMouseLeft && all->endgame != 2) {
        if (click_position.x >= menu_postion.x &&
        click_position.x <= menu_postion.x + 200 &&
        click_position.y >= menu_postion.y &&
        click_position.y <= menu_postion.y + 56) {
            sfSound_play(all->main_menu.click_sound);
            all->pause = 0;
            *state = level_selection;
        }
    }
}

void interact_menu_setting_endgame(all_t *all, game_state_t *state)
{
    sfVector2i click_position =
    sfMouse_getPositionRenderWindow(all->window.window);
    sfVector2f backmenu_postion = sfSprite_getPosition(all->back_menu.sprite);
    if (all->window.event.type == sfEvtMouseButtonPressed &&
    all->window.event.mouseButton.button == sfMouseLeft) {
        if (click_position.x >= backmenu_postion.x &&
        click_position.x <= backmenu_postion.x + 200 &&
        click_position.y >= backmenu_postion.y &&
        click_position.y <= backmenu_postion.y + 56) {
            sfSound_play(all->main_menu.click_sound);
            all->pause = 0;
            *state = level_selection;
        }
    }
}

void interact_quit_setting(all_t *all, game_state_t *state)
{
    sfVector2i click_position =
    sfMouse_getPositionRenderWindow(all->window.window);
    sfVector2f quit_postion = sfSprite_getPosition(all->quit.sprite);
    if (all->window.event.type == sfEvtMouseButtonPressed &&
    all->window.event.mouseButton.button == sfMouseLeft && all->pause == 1) {
        if (click_position.x >= quit_postion.x &&
        click_position.x <= quit_postion.x + 200 &&
        click_position.y >= quit_postion.y &&
        click_position.y <= quit_postion.y + 56) {
            sfSound_play(all->main_menu.click_sound);
            all->pause = 0;
            sfRenderWindow_close(all->window.window);
        }
    }
}
