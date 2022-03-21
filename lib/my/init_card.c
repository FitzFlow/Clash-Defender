/*
** EPITECH PROJECT, 2022
** B-MUL-200-RUN-2-1-mydefender-florian.etheve
** File description:
** init_card
*/

#include "defender.h"

archery_card init_archery_card(void)
{
    archery_card archery;
    archery.sprite = sfSprite_create();
    archery.texture = sfTexture_createFromFile(CARD_ARCHERY, NULL);
    archery.position = (sfVector2f) {536, 577};
    archery.taille = (sfVector2f) {1, 1};
    archery.rect = (sfIntRect) {0, 0, 102, 119};
    sfSprite_setTexture(archery.sprite, archery.texture, sfTrue);
    sfSprite_setTextureRect(archery.sprite, archery.rect);
    sfSprite_setPosition(archery.sprite, archery.position);
    sfSprite_setScale(archery.sprite, archery.taille);
    return archery;
}

canon_card init_canon_card(void)
{
    canon_card canon;
    canon.sprite = sfSprite_create();
    canon.texture = sfTexture_createFromFile(CARD_CANON, NULL);
    canon.position = (sfVector2f) {426, 577};
    canon.taille = (sfVector2f) {1, 1};
    canon.rect = (sfIntRect) {0, 0, 102, 119};
    sfSprite_setTexture(canon.sprite, canon.texture, sfTrue);
    sfSprite_setTextureRect(canon.sprite, canon.rect);
    sfSprite_setPosition(canon.sprite, canon.position);
    sfSprite_setScale(canon.sprite, canon.taille);
    return canon;
}

wizard_card init_wizard_card(void)
{
    wizard_card wizard;
    wizard.sprite = sfSprite_create();
    wizard.texture = sfTexture_createFromFile(CARD_WIZARD, NULL);
    wizard.position = (sfVector2f) {644, 577};
    wizard.taille = (sfVector2f) {1, 1};
    wizard.rect = (sfIntRect) {0, 0, 102, 119};
    sfSprite_setTexture(wizard.sprite, wizard.texture, sfTrue);
    sfSprite_setTextureRect(wizard.sprite, wizard.rect);
    sfSprite_setPosition(wizard.sprite, wizard.position);
    sfSprite_setScale(wizard.sprite, wizard.taille);
    return wizard;
}

tesla_card init_tesla_card(void)
{
    tesla_card tesla;
    tesla.sprite = sfSprite_create();
    tesla.texture = sfTexture_createFromFile(CARD_TESLA, NULL);
    tesla.position = (sfVector2f) {753, 577};
    tesla.taille = (sfVector2f) {1, 1};
    tesla.rect = (sfIntRect) {0, 0, 102, 119};
    sfSprite_setTexture(tesla.sprite, tesla.texture, sfTrue);
    sfSprite_setTextureRect(tesla.sprite, tesla.rect);
    sfSprite_setPosition(tesla.sprite, tesla.position);
    sfSprite_setScale(tesla.sprite, tesla.taille);
    return tesla;
}
