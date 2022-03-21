/*
** EPITECH PROJECT, 2022
** B-MUL-200-RUN-2-1-mydefender-florian.etheve
** File description:
** init_ennemy
*/

#include "defender.h"

ennemie_golem *init_golem(int x, int y)
{
    ennemie_golem *golem = malloc(sizeof(ennemie_golem));
    golem->sprite = sfSprite_create();
    golem->texture = sfTexture_createFromFile(GOLEM, NULL);
    golem->taille = (sfVector2f) {1, 1};
    golem->position = (sfVector2f) {x, y};
    golem->rect = (sfIntRect) {0, 0, 77, 98};
    sfSprite_setTexture(golem->sprite, golem->texture, sfTrue);
    sfSprite_setTextureRect(golem->sprite, golem->rect);
    sfSprite_setPosition(golem->sprite, golem->position);
    sfSprite_setScale(golem->sprite, golem->taille);
    golem->pv = 10000;
    golem->text = sfText_create();
    golem->font = sfFont_createFromFile(FONT);
    golem->txt_pos = (sfVector2f) {x, y};
    sfText_setFont(golem->text, golem->font);
    sfText_setPosition(golem->text, golem->position);
    sfText_setString(golem->text, my_nbr_to_char(golem->pv));
    sfText_setColor(golem->text, sfBlack);
    sfText_setCharacterSize(golem->text, 15);
    return golem;
}

ennemie_golem **tab_of_golem(int nb_golem, int *x, int *y)
{
    ennemie_golem **tab = malloc(sizeof(ennemie_golem *) * (nb_golem + 1));
    int line = 0;

    while (line != nb_golem) {
        tab[line] = init_golem(x[line], y[line]);
        tab[line]->i = 0;
        tab[line]->x = 0.5;
        tab[line]->y = 0;
        line++;
    }
    tab[line] = NULL;
    return tab;
}

ennemie_valkyrie *init_valkyrie(int x, int y)
{
    ennemie_valkyrie *valkyrie = malloc(sizeof(ennemie_valkyrie));
    valkyrie->sprite = sfSprite_create();
    valkyrie->texture = sfTexture_createFromFile(VALKYRIE, NULL);
    valkyrie->taille = (sfVector2f) {0.5, 0.5};
    valkyrie->position = (sfVector2f) {x, y};
    valkyrie->rect = (sfIntRect) {0, 0, 127, 131};
    sfSprite_setTexture(valkyrie->sprite, valkyrie->texture, sfTrue);
    sfSprite_setTextureRect(valkyrie->sprite, valkyrie->rect);
    sfSprite_setPosition(valkyrie->sprite, valkyrie->position);
    sfSprite_setScale(valkyrie->sprite, valkyrie->taille);
    valkyrie->pv = 4500;
    valkyrie->text = sfText_create();
    valkyrie->font = sfFont_createFromFile(FONT);
    valkyrie->txt_pos = (sfVector2f) {x, y};
    sfText_setFont(valkyrie->text, valkyrie->font);
    sfText_setPosition(valkyrie->text, valkyrie->position);
    sfText_setString(valkyrie->text, my_nbr_to_char(valkyrie->pv));
    sfText_setColor(valkyrie->text, sfBlack);
    sfText_setCharacterSize(valkyrie->text, 15);
    return (valkyrie);
}

ennemie_valkyrie **tab_of_valky(int nb_val, int *x, int *y)
{
    ennemie_valkyrie **tab = malloc(sizeof(ennemie_valkyrie *) * (nb_val + 1));
    int line = 0;

    while (line != nb_val) {
        tab[line] = init_valkyrie(x[line], y[line]);
        tab[line]->i = 0;
        tab[line]->x = 0.5;
        tab[line]->y = 0;
        line++;
    }
    tab[line] = NULL;
    return tab;
}
