/*
** EPITECH PROJECT, 2022
** B-MUL-200-RUN-2-1-mydefender-florian.etheve
** File description:
** init_hud
*/

#include "defender.h"

game_card_preview init_game_preview(void)
{
    game_card_preview setcard;
    setcard.sprite = sfSprite_create();
    setcard.texture = sfTexture_createFromFile(CARD_PREVIEW, NULL);
    setcard.position = (sfVector2f) {408, 569};
    setcard.taille = (sfVector2f) {1, 1};
    sfSprite_setTexture(setcard.sprite, setcard.texture, sfTrue);
    sfSprite_setPosition(setcard.sprite, setcard.position);
    sfSprite_setScale(setcard.sprite, setcard.taille);
    return setcard;
}

tower_royale init_tower_royale(void)
{
    tower_royale royaletwr;
    royaletwr.sprite = sfSprite_create();
    royaletwr.texture = sfTexture_createFromFile(TOWER_ROYAL, NULL);
    royaletwr.position = (sfVector2f) {1032, 6};
    royaletwr.taille = (sfVector2f) {1, 1};
    sfSprite_setTexture(royaletwr.sprite, royaletwr.texture, sfTrue);
    sfSprite_setPosition(royaletwr.sprite, royaletwr.position);
    sfSprite_setScale(royaletwr.sprite, royaletwr.taille);
    royaletwr.life_tower = 100;
    return royaletwr;
}
