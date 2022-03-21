/*
** EPITECH PROJECT, 2022
** B-MUL-200-RUN-2-1-mydefender-florian.etheve
** File description:
** level_1
*/

#include "defender.h"

level_4_map init_map_4(void)
{
    level_4_map map4;
    map4.sprite = sfSprite_create();
    map4.texture = sfTexture_createFromFile(LVL4_MAP, NULL);
    map4.position = (sfVector2f) {0, 0};
    map4.taille = (sfVector2f) {1, 1};
    sfSprite_setTexture(map4.sprite, map4.texture, sfTrue);
    sfSprite_setPosition(map4.sprite, map4.position);
    sfSprite_setScale(map4.sprite, map4.taille);
    return map4;
}
