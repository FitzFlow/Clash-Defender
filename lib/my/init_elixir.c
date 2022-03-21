/*
** EPITECH PROJECT, 2022
** B-MUL-200-RUN-2-1-mydefender-florian.etheve
** File description:
** init_elixir
*/

#include "defender.h"

void resize_clock(all_t *all, sfTime time)
{
    if (time.microseconds > 5000000.0) {
        if (all->elixir.rect.left == 4070)
            all->elixir.rect.left = 4070;
        else
            all->elixir.rect.left += 407;
        if (all->elixir.nb_elixir < 10)
            all->elixir.nb_elixir++;
        sfSprite_setTextureRect(all->elixir.sprite, all->elixir.rect);
        sfClock_restart(all->elixir.timer);
    }
}

void clock_elixir(all_t *all)
{
    sfTime time = sfClock_getElapsedTime(all->elixir.timer);

    if (all->pause != 1 && all->endgame != 2) {
        resize_clock(all, time);
    }
}

elixir_bar init_elixir(void)
{
    elixir_bar elix;
    elix.sprite = sfSprite_create();
    elix.texture = sfTexture_createFromFile(ELIXIR, NULL);
    elix.taille = (sfVector2f) {1, 1};
    elix.position = (sfVector2f) {423, 682};
    elix.rect = (sfIntRect) {0, 0, 407, 38};
    elix.timer = sfClock_create();
    elix.nb_elixir = 0;
    sfSprite_setTexture(elix.sprite, elix.texture, sfTrue);
    sfSprite_setTextureRect(elix.sprite, elix.rect);
    sfSprite_setPosition(elix.sprite, elix.position);
    sfSprite_setScale(elix.sprite, elix.taille);
    return elix;
}
