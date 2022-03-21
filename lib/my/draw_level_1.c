/*
** EPITECH PROJECT, 2022
** B-MUL-200-RUN-2-1-mydefender-florian.etheve
** File description:
** draw_main_and_level
*/

#include "defender.h"

void draw_leve_1(all_t *all, game_state_t *state_of_game)
{
    animate_card(all);
    count_kill_golem(all);
    draw_map_1(all);
    move_golem(all);
    move_valkye(all);
    move_barbare(all);
    draw_tower_map_1(all);
    draw_endgame_menu(all, state_of_game);
    damage_royale_tower(all);
    shoot_golem(all);
    shoot_valkye_lv1(all);
    shoot_barb_lv1(all);
}

void game_paused_sprite(all_t *all)
{
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

void draw_site(all_t *all)
{
    sfRenderWindow_drawSprite(all->window.window,
    all->tab_of_site[0]->sprite, NULL);
    sfRenderWindow_drawSprite(all->window.window,
    all->tab_of_site[1]->sprite, NULL);
    sfRenderWindow_drawSprite(all->window.window,
    all->tab_of_site[2]->sprite, NULL);
    sfRenderWindow_drawSprite(all->window.window,
    all->tab_of_site[3]->sprite, NULL);
    draw_golem(all);
    draw_valky(all);
    draw_barbare(all);
    if (all->pause == 1)
        game_paused_sprite(all);
}

void draw_tower_map_1(all_t *all)
{
    sfRenderWindow_drawSprite(all->window.window,
    all->arc_tower.sprite, NULL);
    sfRenderWindow_drawSprite(all->window.window,
    all->can_tower.sprite, NULL);
    sfRenderWindow_drawSprite(all->window.window,
    all->wiz_tower.sprite, NULL);
    sfRenderWindow_drawSprite(all->window.window,
    all->tes_tower.sprite, NULL);
}

void draw_map_1(all_t *all)
{
    sfRenderWindow_drawSprite(all->window.window,
    all->map1.sprite, NULL);
    sfRenderWindow_drawSprite(all->window.window,
    all->card_preview.sprite, NULL);
    sfRenderWindow_drawSprite(all->window.window,
    all->arc_card.sprite, NULL);
    sfRenderWindow_drawSprite(all->window.window,
    all->wiz_card.sprite, NULL);
    sfRenderWindow_drawSprite(all->window.window,
    all->can_card.sprite, NULL);
    sfRenderWindow_drawSprite(all->window.window,
    all->tes_card.sprite, NULL);
    sfRenderWindow_drawSprite(all->window.window,
    all->setting.sprite, NULL);
    draw_site(all);
    sfRenderWindow_drawSprite(all->window.window,
    all->twr_royal.sprite, NULL);
    sfRenderWindow_drawSprite(all->window.window,
    all->elixir.sprite, NULL);
}
