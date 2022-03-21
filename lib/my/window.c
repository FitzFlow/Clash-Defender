/*
** EPITECH PROJECT, 2021
** B-MUL-100-RUN-1-1-myrunner-brice.huet
** File description:
** game
*/

#include "defender.h"

void action_main_menu(all_t *all, game_state_t *state)
{
    sfVector2i click_position =
    sfMouse_getPositionRenderWindow(all->window.window);
    sfVector2f play_position =
    sfSprite_getPosition(all->main_menu_btn.play_sprite);
    sfVector2f quit_position =
    sfSprite_getPosition(all->main_menu_btn.quit_sprite);
    if (sfMouse_isButtonPressed(sfMouseLeft)) {
        if (click_position.x >= play_position.x &&
        click_position.x <= play_position.x + 410 &&
        click_position.y >= play_position.y &&
        click_position.y <= play_position.y + 105) {
            sfSound_play(all->main_menu.click_sound);
            *state = level_selection;
        }
        if (click_position.x >= quit_position.x &&
        click_position.x <= quit_position.x + 410 &&
        click_position.y >= quit_position.y &&
        click_position.y <= quit_position.y + 105)
            sfRenderWindow_close(all->window.window);
    }
}

void action_level_selector(all_t *all, game_state_t *state)
{
    sfVector2i click_position = sfMouse_getPositionRenderWindow(WINDOW);
    sfVector2f back_position = sfSprite_getPosition(BACK_BTN);
    sfVector2f tuto_position =
    sfSprite_getPosition(all->lvl_button.tuto_sprite);
    if (sfMouse_isButtonPressed(sfMouseLeft)) {
        if (click_position.x >= back_position.x &&
        click_position.x <= back_position.x + 319 &&
        click_position.y >= back_position.y &&
        click_position.y <= back_position.y + 219) {
            sfSound_play(all->main_menu.click_sound);
            *state = main_menu;
        }
        if (click_position.x >= tuto_position.x &&
        click_position.x <= tuto_position.x + 319 &&
        click_position.y >= tuto_position.y &&
        click_position.y <= tuto_position.y + 209) {
            sfSound_play(all->main_menu.click_sound);
            *state = tutorial;
        }
    }
}

void close_window(all_t *all, game_state_t *state_of_game)
{
    if (all->window.event.type == sfEvtClosed)
        sfRenderWindow_close(all->window.window);
    else if (all->window.event.type == sfEvtKeyPressed &&
    all->window.event.key.code == sfKeyEscape && all->endgame != 2 &&
    all->pause == 0 &&
    *state_of_game != level_selection && *state_of_game != tutorial &&
    *state_of_game != main_menu)
        all->pause = 1;
    else if (all->window.event.type == sfEvtKeyPressed &&
    all->window.event.key.code == sfKeyEscape && all->pause == 1 &&
    *state_of_game != level_selection && *state_of_game != tutorial &&
    *state_of_game != main_menu)
        all->pause = 0;
}

void analyze_event2(all_t *all, game_state_t *state_of_game)
{
    if (*state_of_game == tutorial) {
        animate_quit_tuto_btn(all);
        action_quit_tuto(all, state_of_game);
    }
    if (all->endgame == 2)
        interact_menu_setting_endgame(all, state_of_game);
}

void analyze_event(all_t *all, game_state_t *state_of_game)
{
    if (*state_of_game == main_menu) {
        action_main_menu(all, state_of_game);
        animate_quit_menu_btn(all);
    } else if (*state_of_game == level_selection)
        draw_level_selection(all, state_of_game);
    else
        resize_analyze(all, state_of_game);
    analyze_event2(all, state_of_game);
    close_window(all, state_of_game);
}
