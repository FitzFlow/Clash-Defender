/*
** EPITECH PROJECT, 2022
** B-MUL-200-RUN-2-1-mydefender-florian.etheve
** File description:
** level_1_action
*/

#include "defender.h"

void level_one_action(all_t *all, game_state_t *state_of_game)
{
    drag_drop(all);
    draw_leve_1(all, state_of_game);
    if ((all->kill + all->endtower_king) == 12)
        all->endgame = 2;
    if (all->pause != 1 && all->endgame != 2)
        clock_golem(all);
    clock_elixir(all);
}

void level_two_draw(all_t *all, game_state_t *state_of_game)
{
    drag_drop_2(all);
    draw_map_2(all);
    move_golem_lv2(all);
    move_barbare_2(all);
    move_valkye_2(all);
    shoot_golem_lv2(all);
    shoot_valkye_lv2(all);
    shoot_barb_lv2(all);
    count_kill_all_lv2(all);
    damage_royale_tower_lv2(all);
    draw_endgame_menu(all, state_of_game);
}

void level_two_action(all_t *all, game_state_t *state_of_game)
{
    if ((all->kill + all->endtower_king) == 18)
        all->endgame = 2;
    if (all->pause != 1)
        clock_golem_lv2(all);
    if (all->pause == 1) {
        sfRenderWindow_drawSprite(all->window.window,
        all->pause_back.sprite, NULL);
        sfRenderWindow_drawSprite(all->window.window,
        all->init_setting.sprite, NULL);
        sfRenderWindow_drawSprite(all->window.window,
        all->resume.sprite, NULL);
        sfRenderWindow_drawSprite(all->window.window,
        all->menu.sprite, NULL);
        sfRenderWindow_drawSprite(all->window.window,
        all->quit.sprite, NULL);
    }
    clock_elixir(all);
}

void level_three_draw(all_t *all, game_state_t *state_of_game)
{
    drag_drop_3(all);
    draw_map_3(all);
    move_golem_lv3(all);
    move_valkye_3(all);
    move_barbare_3(all);
    shoot_golem_lv3(all);
    shoot_valkye_lv3(all);
    shoot_barb_lv3(all);
    count_kill_all_lv3(all);
    damage_royale_tower_lv3(all);
    draw_endgame_menu(all, state_of_game);
}

void level_three_action(all_t *all, game_state_t *state_of_game)
{
    if ((all->kill + all->endtower_king) == 24)
        all->endgame = 2;
    if (all->pause != 1)
        clock_golem_lv3(all);
    if (all->pause == 1) {
        sfRenderWindow_drawSprite(all->window.window,
        all->pause_back.sprite, NULL);
        sfRenderWindow_drawSprite(all->window.window,
        all->init_setting.sprite, NULL);
        sfRenderWindow_drawSprite(all->window.window,
        all->resume.sprite, NULL);
        sfRenderWindow_drawSprite(all->window.window,
        all->menu.sprite, NULL);
        sfRenderWindow_drawSprite(all->window.window,
        all->quit.sprite, NULL);
    }
    clock_elixir(all);
}
