/*
** EPITECH PROJECT, 2022
** B-MUL-200-RUN-2-1-mydefender-florian.etheve
** File description:
** drop_tower
*/

#include "defender.h"

void drop_tower_archery(all_t *all, sfVector2i click_position)
{
    sfFloatRect site_rect;
    int line = 0;

    while (all->tab_of_site[line] != NULL) {
        site_rect = sfSprite_getGlobalBounds(all->tab_of_site[line]->sprite);
        if (sfFloatRect_contains(&site_rect, click_position.x,
        click_position.y) == sfTrue && all->tab_of_site[line]->posed == 0) {
            all->tab_of_site[line]->texture = all->arc_tower.texture;
            sfSprite_setTexture(all->tab_of_site[line]->sprite,
            all->arc_tower.texture, sfTrue);
            sfSprite_setPosition(all->arc_tower.sprite,
            (sfVector2f) {1000, 1000});
            all->tab_of_site[line]->posed = 1;
            all->elixir.nb_elixir -= 4;
            all->elixir.rect.left = (all->elixir.rect.left - (4 * 407));
            sfSprite_setTextureRect(all->elixir.sprite, all->elixir.rect);
            all->drag = 2;
        }
        line++;
    }
}

void drop_tower_tesla(all_t *all, sfVector2i click_position)
{
    sfFloatRect site_rect;
    int line = 0;

    while (all->tab_of_site[line] != NULL) {
        site_rect = sfSprite_getGlobalBounds(all->tab_of_site[line]->sprite);
        if (sfFloatRect_contains(&site_rect, click_position.x,
        click_position.y) == sfTrue && all->tab_of_site[line]->posed == 0) {
            all->tab_of_site[line]->texture = all->tes_tower.texture;
            sfSprite_setTexture(all->tab_of_site[line]->sprite,
            all->tes_tower.texture, sfTrue);
            sfSprite_setPosition(all->tes_tower.sprite,
            (sfVector2f) {1000, 1000});
            all->tab_of_site[line]->posed = 1;
            all->elixir.nb_elixir -= 8;
            all->elixir.rect.left = (all->elixir.rect.left - (8 * 407));
            sfSprite_setTextureRect(all->elixir.sprite, all->elixir.rect);
            all->drag = 2;
        }
        line++;
    }
}

void drop_tower_wizard(all_t *all, sfVector2i click_position)
{
    sfFloatRect site_rect;
    int line = 0;

    while (all->tab_of_site[line] != NULL) {
        site_rect = sfSprite_getGlobalBounds(all->tab_of_site[line]->sprite);
        if (sfFloatRect_contains(&site_rect, click_position.x,
        click_position.y) == sfTrue && all->tab_of_site[line]->posed == 0) {
            all->tab_of_site[line]->texture = all->wiz_tower.texture;
            sfSprite_setTexture(all->tab_of_site[line]->sprite,
            all->wiz_tower.texture, sfTrue);
            sfSprite_setPosition(all->tes_tower.sprite,
            (sfVector2f) {1000, 1000});
            all->tab_of_site[line]->posed = 1;
            all->elixir.nb_elixir -= 5;
            all->elixir.rect.left = (all->elixir.rect.left - (5 * 407));
            sfSprite_setTextureRect(all->elixir.sprite, all->elixir.rect);
            all->drag = 2;
        }
        line++;
    }
}

void resize_drop_tower_canon(all_t *all, int line)
{
    all->tab_of_site[line]->texture = all->can_tower.texture;
    sfSprite_setTexture(all->tab_of_site[line]->sprite,
    all->can_tower.texture, sfTrue);
    sfSprite_setTextureRect(all->tab_of_site[line]->sprite,
    all->can_tower.rect);
    sfSprite_setPosition(all->can_tower.sprite,
    (sfVector2f) {1000, 1000});
    all->tab_of_site[line]->posed = 1;
    all->elixir.nb_elixir -= 3;
    all->elixir.rect.left = (all->elixir.rect.left - (3 * 407));
    sfSprite_setTextureRect(all->elixir.sprite, all->elixir.rect);
    all->drag = 2;
}

void drop_tower_canon(all_t *all, sfVector2i click_position)
{
    sfFloatRect site_rect;
    int line = 0;

    while (all->tab_of_site[line] != NULL) {
        site_rect = sfSprite_getGlobalBounds(all->tab_of_site[line]->sprite);
        if (sfFloatRect_contains(&site_rect, click_position.x,
        click_position.y) == sfTrue && all->tab_of_site[line]->posed == 0)
            resize_drop_tower_canon(all, line);
        line++;
    }
}
