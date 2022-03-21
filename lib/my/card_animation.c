/*
** EPITECH PROJECT, 2022
** B-MUL-200-RUN-2-1-mydefender-florian.etheve
** File description:
** card_animation
*/

#include "defender.h"

void animate_tesla_card(all_t *all)
{
    sfIntRect rect = sfSprite_getTextureRect(all->tes_card.sprite);

    if (all->elixir.nb_elixir < 8) {
        rect.left = 102;
        sfSprite_setTextureRect(all->tes_card.sprite, rect);
    } else if (all->elixir.nb_elixir >= 8) {
        rect.left = 0;
        sfSprite_setTextureRect(all->tes_card.sprite, rect);
    }
}

void animate_wizard_card(all_t *all)
{
    sfIntRect rect = sfSprite_getTextureRect(all->wiz_card.sprite);

    if (all->elixir.nb_elixir < 5) {
        rect.left = 101;
        sfSprite_setTextureRect(all->wiz_card.sprite, rect);
    } else if (all->elixir.nb_elixir >= 5) {
        rect.left = 0;
        sfSprite_setTextureRect(all->wiz_card.sprite, rect);
    }
}

void animate_archery_card(all_t *all)
{
    sfIntRect rect = sfSprite_getTextureRect(all->arc_card.sprite);

    if (all->elixir.nb_elixir < 4) {
        rect.left = 102;
        sfSprite_setTextureRect(all->arc_card.sprite, rect);
    } else if (all->elixir.nb_elixir >= 4) {
        rect.left = 0;
        sfSprite_setTextureRect(all->arc_card.sprite, rect);
    }
}

void animate_canon_card(all_t *all)
{
    sfIntRect rect = sfSprite_getTextureRect(all->can_card.sprite);

    if (all->elixir.nb_elixir < 3) {
        rect.left = 102;
        sfSprite_setTextureRect(all->can_card.sprite, rect);
    } else if (all->elixir.nb_elixir >= 3) {
        rect.left = 0;
        sfSprite_setTextureRect(all->can_card.sprite, rect);
    }
}

void animate_card(all_t *all)
{
    animate_canon_card(all);
    animate_archery_card(all);
    animate_wizard_card(all);
    animate_tesla_card(all);
}
