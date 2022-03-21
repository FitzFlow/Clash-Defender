/*
** EPITECH PROJECT, 2022
** B-MUL-200-RUN-2-1-mydefender-florian.etheve
** File description:
** draw_main_and_level
*/

#include "defender.h"

void draw_site_lvl2(all_t *all)
{
    sfRenderWindow_drawSprite(all->window.window,
    all->tab_of_site_lv_2[0]->sprite, NULL);
    sfRenderWindow_drawSprite(all->window.window,
    all->tab_of_site_lv_2[1]->sprite, NULL);
    sfRenderWindow_drawSprite(all->window.window,
    all->tab_of_site_lv_2[2]->sprite, NULL);
    sfRenderWindow_drawSprite(all->window.window,
    all->tab_of_site_lv_2[3]->sprite, NULL);
    sfRenderWindow_drawSprite(all->window.window,
    all->tab_of_site_lv_2[4]->sprite, NULL);
}

void draw_enneny(all_t *all)
{
    draw_golem_lv2(all);
    draw_barbare_lv2(all);
    draw_valky_lv2(all);
    sfRenderWindow_drawSprite(all->window.window,
    all->twr_royal.sprite, NULL);
    draw_site_lvl2(all);
    sfRenderWindow_drawSprite(all->window.window,
    all->elixir.sprite, NULL);
    sfRenderWindow_drawSprite(all->window.window,
    all->setting.sprite, NULL);
    sfRenderWindow_drawSprite(all->window.window,
    all->arc_tower.sprite, NULL);
    sfRenderWindow_drawSprite(all->window.window,
    all->can_tower.sprite, NULL);
    sfRenderWindow_drawSprite(all->window.window,
    all->wiz_tower.sprite, NULL);
}

void draw_map_2(all_t *all)
{
    animate_card(all);
    sfRenderWindow_drawSprite(all->window.window,
    all->map2.sprite, NULL);
    sfRenderWindow_drawSprite(all->window.window,
    all->card_preview.sprite, NULL);
    sfRenderWindow_drawSprite(all->window.window,
    all->arc_card.sprite, NULL);
    sfRenderWindow_drawSprite(all->window.window,
    all->can_card.sprite, NULL);
    sfRenderWindow_drawSprite(all->window.window,
    all->tes_card.sprite, NULL);
    sfRenderWindow_drawSprite(all->window.window,
    all->wiz_card.sprite, NULL);
    draw_enneny(all);
    sfRenderWindow_drawSprite(all->window.window,
    all->tes_tower.sprite, NULL);
}
