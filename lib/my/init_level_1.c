/*
** EPITECH PROJECT, 2022
** B-MUL-200-RUN-2-1-mydefender-florian.etheve
** File description:
** level_1
*/

#include "defender.h"

level_1_map init_map_1(void)
{
    level_1_map map1;
    map1.sprite = sfSprite_create();
    map1.texture = sfTexture_createFromFile(LVL1_MAP, NULL);
    map1.position = (sfVector2f) {0, 0};
    map1.taille = (sfVector2f) {1, 1};
    sfSprite_setTexture(map1.sprite, map1.texture, sfTrue);
    sfSprite_setPosition(map1.sprite, map1.position);
    sfSprite_setScale(map1.sprite, map1.taille);
    return map1;
}

site_tower *init_site_tower(int x, int y)
{
    site_tower *site = malloc(sizeof(site_tower));
    site->sprite = sfSprite_create();
    site->texture = sfTexture_createFromFile(SITE_TOWER, NULL);
    site->position = (sfVector2f) {x, y};
    site->taille = (sfVector2f) {1, 1};
    site->posed = 0;
    site->shooted = 0;
    sfSprite_setTexture(site->sprite, site->texture, sfTrue);
    sfSprite_setPosition(site->sprite, site->position);
    sfSprite_setScale(site->sprite, site->taille);
    return site;
}

site_tower **tab_of_tower_site(int nb_tower, const int *x, const int *y)
{
    site_tower **site = malloc(sizeof(site_tower *) * (nb_tower + 1));
    int line = 0;

    while (line != nb_tower) {
        site[line] = init_site_tower(x[line], y[line]);
        line++;
    }
    site[line] = NULL;
    return site;
}
