/*
** EPITECH PROJECT, 2022
** B-MUL-200-RUN-2-1-mydefender-florian.etheve
** File description:
** draw_with_state
*/

#include "defender.h"

void draw_endgame_menu(all_t *all, game_state_t *state_of_game)
{
    if (all->endgame == 2) {
        draw_crown(all);
        sfRenderWindow_drawSprite(all->window.window,
        all->pause_back.sprite, NULL);
        sfRenderWindow_drawSprite(all->window.window,
        all->win.sprite, NULL);
        sfRenderWindow_drawSprite(all->window.window,
        all->lose.sprite, NULL);
        sfRenderWindow_drawText(all->window.window,
        all->sc_and_name->name_text, NULL);
        sfRenderWindow_drawText(all->window.window,
        all->sc_and_name->trohpy_text, NULL);
        sfRenderWindow_drawSprite(all->window.window,
        all->back_menu.sprite, NULL);
        menu_setting_btn_endgame(all);
    }
}

void draw_with_state3(all_t *all, game_state_t *state_of_game)
{
    if (*state_of_game == level_1_play)
        level_one_action(all, state_of_game);
    if (*state_of_game == level_2_play) {
        level_two_draw(all, state_of_game);
        level_two_action(all, state_of_game);
    }
    if (*state_of_game == tutorial) {
        sfRenderWindow_drawSprite(all->window.window, all->tuto.sprite, NULL);
        sfRenderWindow_drawSprite(all->window.window,
        all->tuto_quit_btn.sprite, NULL);
    }
}

void draw_with_state2(all_t * all, game_state_t *state_of_game)
{
    if (*state_of_game == level_3_play) {
        level_three_draw(all, state_of_game);
        level_three_action(all, state_of_game);
    }
    if (*state_of_game == level_4_play) {
        level_four_draw(all, state_of_game);
        level_four_action(all, state_of_game);
    } else
        draw_with_state3(all, state_of_game);
}

void level_selector_draw_badge(all_t *all)
{
    sfRenderWindow_drawSprite(all->window.window,
    all->badge1.sprite, NULL);
    sfRenderWindow_drawSprite(all->window.window,
    all->badge2.sprite, NULL);
    sfRenderWindow_drawSprite(all->window.window,
    all->badge3.sprite, NULL);
    sfRenderWindow_drawSprite(all->window.window,
    all->badge4.sprite, NULL);
}

void draw_with_state(all_t *all, game_state_t *state_of_game)
{
    if (*state_of_game == main_menu)
        main_menu_action(all, state_of_game);
    else if (*state_of_game == level_selection) {
        all->elixir.nb_elixir = 0;
        all->elixir.rect.left = 0;
        all->kill = 0;
        all->endtower_king = 0;
        all->twr_royal.life_tower = 100;
        sfRenderWindow_drawSprite(all->window.window,
        all->level_selector.sprite, NULL);
        sfRenderWindow_drawSprite(all->window.window,
        all->lvl_button.back_sprite, NULL);
        sfRenderWindow_drawSprite(all->window.window,
        all->lvl_button.tuto_sprite, NULL);
        level_selector_draw_badge(all);
        all->endgame = 0;
    } else
        draw_with_state2(all, state_of_game);
}
