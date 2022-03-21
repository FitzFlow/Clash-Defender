/*
** EPITECH PROJECT, 2022
** B-MUL-200-RUN-2-1-mydefender-florian.etheve
** File description:
** draw_main_and_level
*/

#include "defender.h"

void draw_site_lvl3(all_t *all)
{
    sfRenderWindow_drawSprite(all->window.window,
    all->tab_of_site_lv_3[0]->sprite, NULL);
    sfRenderWindow_drawSprite(all->window.window,
    all->tab_of_site_lv_3[1]->sprite, NULL);
    sfRenderWindow_drawSprite(all->window.window,
    all->tab_of_site_lv_3[2]->sprite, NULL);
    sfRenderWindow_drawSprite(all->window.window,
    all->tab_of_site_lv_3[3]->sprite, NULL);
    sfRenderWindow_drawSprite(all->window.window,
    all->tab_of_site_lv_3[4]->sprite, NULL);
    sfRenderWindow_drawSprite(all->window.window,
    all->tab_of_site_lv_3[5]->sprite, NULL);
}

void draw_tower_3(all_t *all)
{
    sfRenderWindow_drawSprite(all->window.window,
    all->elixir.sprite, NULL);
    sfRenderWindow_drawSprite(all->window.window,
    all->arc_tower.sprite, NULL);
    sfRenderWindow_drawSprite(all->window.window,
    all->can_tower.sprite, NULL);
    sfRenderWindow_drawSprite(all->window.window,
    all->wiz_tower.sprite, NULL);
    sfRenderWindow_drawSprite(all->window.window,
    all->tes_tower.sprite, NULL);
}

void draw_game_3(all_t *all)
{
    draw_golem_lv3(all);
    draw_barbare_lv3(all);
    draw_valky_lv3(all);
    sfRenderWindow_drawSprite(all->window.window,
    all->twr_royal.sprite, NULL);
    draw_site_lvl3(all);
    draw_tower_3(all);
}

void draw_map_3(all_t *all)
{
    animate_card(all);
    sfRenderWindow_drawSprite(all->window.window,
    all->map3.sprite, NULL);
    sfRenderWindow_drawSprite(all->window.window,
    all->card_preview.sprite, NULL);
    sfRenderWindow_drawSprite(all->window.window,
    all->setting.sprite, NULL);
    sfRenderWindow_drawSprite(all->window.window,
    all->arc_card.sprite, NULL);
    sfRenderWindow_drawSprite(all->window.window,
    all->can_card.sprite, NULL);
    sfRenderWindow_drawSprite(all->window.window,
    all->tes_card.sprite, NULL);
    sfRenderWindow_drawSprite(all->window.window,
    all->wiz_card.sprite, NULL);
    draw_game_3(all);
}
