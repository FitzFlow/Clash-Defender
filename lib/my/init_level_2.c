/*
** EPITECH PROJECT, 2022
** B-MUL-200-RUN-2-1-mydefender-florian.etheve
** File description:
** level_1
*/

#include "defender.h"

level_2_map init_map_2(void)
{
    level_2_map map2;
    map2.sprite = sfSprite_create();
    map2.texture = sfTexture_createFromFile(LVL2_MAP, NULL);
    map2.position = (sfVector2f) {0, 0};
    map2.taille = (sfVector2f) {1, 1};
    sfSprite_setTexture(map2.sprite, map2.texture, sfTrue);
    sfSprite_setPosition(map2.sprite, map2.position);
    sfSprite_setScale(map2.sprite, map2.taille);
    return map2;
}
