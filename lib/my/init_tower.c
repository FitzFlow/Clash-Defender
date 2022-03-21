/*
** EPITECH PROJECT, 2022
** B-MUL-200-RUN-2-1-mydefender-florian.etheve
** File description:
** init_tower
*/

#include "defender.h"

archery_tower init_archery_tower(void)
{
    archery_tower tower;
    tower.sprite = sfSprite_create();
    tower.texture = sfTexture_createFromFile(ARCHERY_TOWER, NULL);
    tower.position = (sfVector2f) {1000, 1000};
    tower.taille = (sfVector2f) {1, 1};
    sfSprite_setTexture(tower.sprite, tower.texture, sfTrue);
    sfSprite_setPosition(tower.sprite, tower.position);
    sfSprite_setScale(tower.sprite, tower.taille);
    return (tower);
}

canon_tower init_canon_tower(void)
{
    canon_tower tower;
    tower.sprite = sfSprite_create();
    tower.texture = sfTexture_createFromFile(CANON, NULL);
    tower.position = (sfVector2f) {1000, 1000};
    tower.taille = (sfVector2f) {1, 1};
    tower.rect = (sfIntRect) {0, 0, 132, 126};
    sfSprite_setTexture(tower.sprite, tower.texture, sfTrue);
    sfSprite_setTextureRect(tower.sprite, tower.rect);
    sfSprite_setPosition(tower.sprite, tower.position);
    sfSprite_setScale(tower.sprite, tower.taille);
    return (tower);
}

wizard_tower init_wizard_tower(void)
{
    wizard_tower tower;
    tower.sprite = sfSprite_create();
    tower.texture = sfTexture_createFromFile(WIZARD_TOWER, NULL);
    tower.position = (sfVector2f) {1000, 1000};
    tower.taille = (sfVector2f) {1, 1};
    sfSprite_setTexture(tower.sprite, tower.texture, sfTrue);
    sfSprite_setPosition(tower.sprite, tower.position);
    sfSprite_setScale(tower.sprite, tower.taille);
    return (tower);
}

tesla_tower init_tesla_tower(void)
{
    tesla_tower tower;
    tower.sprite = sfSprite_create();
    tower.texture = sfTexture_createFromFile(TESLA_TOWER, NULL);
    tower.position = (sfVector2f) {1000, 1000};
    tower.taille = (sfVector2f) {1, 1};
    sfSprite_setTexture(tower.sprite, tower.texture, sfTrue);
    sfSprite_setPosition(tower.sprite, tower.position);
    sfSprite_setScale(tower.sprite, tower.taille);
    return (tower);
}
