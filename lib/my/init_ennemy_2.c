/*
** EPITECH PROJECT, 2022
** B-MUL-200-RUN-2-1-mydefender-florian.etheve
** File description:
** init_ennemy_2
*/

#include "defender.h"

ennemie_barbare *init_barbare(int x, int y)
{
    ennemie_barbare *barbare = malloc(sizeof(ennemie_barbare));
    barbare->sprite = sfSprite_create();
    barbare->texture = sfTexture_createFromFile(BARBARE, NULL);
    barbare->taille = (sfVector2f) {0.5, 0.5};
    barbare->position = (sfVector2f) {x, y};
    barbare->rect = (sfIntRect) {0, 0, 117, 131};
    sfSprite_setTexture(barbare->sprite, barbare->texture, sfTrue);
    sfSprite_setTextureRect(barbare->sprite, barbare->rect);
    sfSprite_setPosition(barbare->sprite, barbare->position);
    sfSprite_setScale(barbare->sprite, barbare->taille);
    barbare->pv = 4500;
    barbare->text = sfText_create();
    barbare->font = sfFont_createFromFile(FONT);
    barbare->txt_pos = (sfVector2f) {x, y};
    sfText_setFont(barbare->text, barbare->font);
    sfText_setPosition(barbare->text, barbare->position);
    sfText_setString(barbare->text, my_nbr_to_char(barbare->pv));
    sfText_setColor(barbare->text, sfBlack);
    sfText_setCharacterSize(barbare->text, 15);
    return (barbare);
}

ennemie_barbare **tab_of_barbare(int nb_bar, int *x, int *y)
{
    ennemie_barbare **tab = malloc(sizeof(ennemie_barbare *) * (nb_bar + 1));
    int line = 0;

    while (line != nb_bar) {
        tab[line] = init_barbare(x[line], y[line]);
        tab[line]->i = 0;
        tab[line]->x = 0.5;
        tab[line]->y = 0;
        line++;
    }
    tab[line] = NULL;
    return tab;
}
