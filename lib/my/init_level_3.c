/*
** EPITECH PROJECT, 2022
** B-MUL-200-RUN-2-1-mydefender-florian.etheve
** File description:
** level_1
*/

#include "defender.h"

level_3_map init_map_3(void)
{
    level_3_map map3;
    map3.sprite = sfSprite_create();
    map3.texture = sfTexture_createFromFile(LVL3_MAP, NULL);
    map3.position = (sfVector2f) {0, 0};
    map3.taille = (sfVector2f) {1, 1};
    sfSprite_setTexture(map3.sprite, map3.texture, sfTrue);
    sfSprite_setPosition(map3.sprite, map3.position);
    sfSprite_setScale(map3.sprite, map3.taille);
    return map3;
}
