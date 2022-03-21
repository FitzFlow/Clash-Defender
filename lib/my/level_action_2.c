/*
** EPITECH PROJECT, 2022
** B-MUL-200-RUN-2-1-mydefender-florian.etheve
** File description:
** level_action_2
*/

#include "defender.h"

void level_four_draw(all_t *all, game_state_t *state_of_game)
{
    drag_drop_4(all);
    draw_map_4(all);
    move_golem_lv4(all);
    move_valkye_4(all);
    move_barbare_4(all);
    shoot_golem_lv4(all);
    shoot_valky_lv4(all);
    shoot_barb_lv4(all);
    count_kill_all_lv4(all);
    damage_royale_tower_lv4(all);
    draw_endgame_menu(all, state_of_game);
}

void level_four_action(all_t *all, game_state_t *state_of_game)
{
    if ((all->kill + all->endtower_king) == 30)
        all->endgame = 2;
    if (all->pause != 1)
        clock_golem_lv4(all);
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

void main_menu_action(all_t *all, game_state_t *state_of_game)
{
    animate_play_menu_btn(all);
    sfRenderWindow_drawSprite(all->window.window,
    all->main_menu.sprite, NULL);
    sfRenderWindow_drawSprite(all->window.window,
    all->main_menu_btn.play_sprite, NULL);
    sfRenderWindow_drawSprite(all->window.window,
    all->main_menu_btn.quit_sprite, NULL);
}
