/*
** EPITECH PROJECT, 2022
** B-MUL-200-RUN-2-1-mydefender-florian.etheve
** File description:
** drag_and_drop
*/

#include "defender.h"

void drag_and_drop_canon(all_t *all)
{
    sfVector2i click_position = sfMouse_getPositionRenderWindow(WINDOW);
    sfVector2f card_canon = sfSprite_getPosition(all->can_card.sprite);

    if (all->drag == 3 && all->elixir.nb_elixir >= 3) {
        sfSprite_setPosition(all->can_card.sprite, (sfVector2f) {1000, 1000});
        all->can_tower.position =
        (sfVector2f) {click_position.x - 63, click_position.y - 65};
        sfSprite_setPosition(all->can_tower.sprite, all->can_tower.position);
    } else if (all->drag == 30 && all->elixir.nb_elixir >= 3) {
        drop_tower_canon(all, click_position);
        all->can_card.position = (sfVector2f) {426, 577};
        sfSprite_setPosition(all->can_card.sprite,
        all->can_card.position);
        sfSprite_setPosition(all->can_tower.sprite,
        (sfVector2f) {1000, 1000});
        all->drag = 2;
    }
}

void drag_and_drop_wizard(all_t *all)
{
    sfVector2i click_position = sfMouse_getPositionRenderWindow(WINDOW);
    sfVector2f card_wizard = sfSprite_getPosition(all->wiz_card.sprite);

    if (all->drag == 5 && all->elixir.nb_elixir >= 5) {
        sfSprite_setPosition(all->wiz_card.sprite, (sfVector2f) {1000, 1000});
        all->wiz_tower.position =
        (sfVector2f) {click_position.x - 63, click_position.y - 65};
        sfSprite_setPosition(all->wiz_tower.sprite, all->wiz_tower.position);
    } else if (all->drag == 50 && all->elixir.nb_elixir >= 5) {
        drop_tower_wizard(all, click_position);
        all->wiz_card.position = (sfVector2f) {644, 577};
        sfSprite_setPosition(all->wiz_card.sprite,
        all->wiz_card.position);
        sfSprite_setPosition(all->wiz_tower.sprite,
        (sfVector2f) {1000, 1000});
        all->drag = 2;
    }
}

void drag_and_drop_tesla(all_t *all)
{
    sfVector2i click_position = sfMouse_getPositionRenderWindow(WINDOW);
    sfVector2f card_tesla = sfSprite_getPosition(all->tes_card.sprite);

    if (all->drag == 7 && all->elixir.nb_elixir >= 8) {
        sfSprite_setPosition(all->tes_card.sprite, (sfVector2f) {1000, 1000});
        all->tes_tower.position =
        (sfVector2f) {click_position.x - 63, click_position.y - 65};
        sfSprite_setPosition(all->tes_tower.sprite, all->tes_tower.position);
    } else if (all->drag == 70 && all->elixir.nb_elixir >= 8) {
        drop_tower_tesla(all, click_position);
        all->tes_card.position = (sfVector2f) {753, 577};
        sfSprite_setPosition(all->tes_card.sprite,
        all->tes_card.position);
        sfSprite_setPosition(all->tes_tower.sprite,
        (sfVector2f) {1000, 1000});
        all->drag = 2;
    }
}

void drag_and_drop_archery(all_t *all)
{
    sfVector2i click_position = sfMouse_getPositionRenderWindow(WINDOW);
    sfVector2f card_archery = sfSprite_getPosition(all->arc_card.sprite);

    if (all->drag == 1 && all->elixir.nb_elixir >= 4) {
        sfSprite_setPosition(all->arc_card.sprite, (sfVector2f) {1000, 1000});
        all->arc_tower.position =
        (sfVector2f) {click_position.x - 63, click_position.y - 65};
        sfSprite_setPosition(all->arc_tower.sprite, all->arc_tower.position);
    } else if (all->drag == 10 && all->elixir.nb_elixir >= 4) {
        drop_tower_archery(all, click_position);
        all->arc_card.position = (sfVector2f) {536, 577};
        sfSprite_setPosition(all->arc_card.sprite,
        all->arc_card.position);
        sfSprite_setPosition(all->arc_tower.sprite,
        (sfVector2f) {1000, 1000});
        all->drag = 2;
    }
}
