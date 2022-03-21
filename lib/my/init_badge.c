/*
** EPITECH PROJECT, 2022
** B-MUL-200-RUN-2-1-mydefender-florian.etheve
** File description:
** init_badge
*/

#include "my.h"

level_1_badge init_badge_1(void)
{
    level_1_badge badge1;
    badge1.sprite = sfSprite_create();
    badge1.texture = sfTexture_createFromFile(LVL1_BADGE, NULL);
    badge1.taille = (sfVector2f) {1, 1};
    badge1.position = (sfVector2f) {503, 119};
    badge1.rect = (sfIntRect) {0, 0, 86, 104};
    sfSprite_setPosition(badge1.sprite, badge1.position);
    sfSprite_setTexture(badge1.sprite, badge1.texture, sfTrue);
    sfSprite_setTextureRect(badge1.sprite, badge1.rect);
    sfSprite_setScale(badge1.sprite, badge1.taille);
    return badge1;
}

level_2_badge init_badge_2(void)
{
    level_2_badge badge2;
    badge2.sprite = sfSprite_create();
    badge2.texture = sfTexture_createFromFile(LVL2_BADGE, NULL);
    badge2.taille = (sfVector2f) {1, 1};
    badge2.position = (sfVector2f) {753, 211};
    badge2.rect = (sfIntRect) {0, 0, 86, 104};
    sfSprite_setPosition(badge2.sprite, badge2.position);
    sfSprite_setTexture(badge2.sprite, badge2.texture, sfTrue);
    sfSprite_setTextureRect(badge2.sprite, badge2.rect);
    sfSprite_setScale(badge2.sprite, badge2.taille);
    return badge2;
}

level_3_badge init_badge_3(void)
{
    level_3_badge badge3;
    badge3.sprite = sfSprite_create();
    badge3.texture = sfTexture_createFromFile(LVL3_BADGE, NULL);
    badge3.taille = (sfVector2f) {1, 1};
    badge3.position = (sfVector2f) {998, 388};
    badge3.rect = (sfIntRect) {0, 0, 86, 104};
    sfSprite_setPosition(badge3.sprite, badge3.position);
    sfSprite_setTexture(badge3.sprite, badge3.texture, sfTrue);
    sfSprite_setTextureRect(badge3.sprite, badge3.rect);
    sfSprite_setScale(badge3.sprite, badge3.taille);
    return badge3;
}

level_4_badge init_badge_4(void)
{
    level_4_badge badge4;
    badge4.sprite = sfSprite_create();
    badge4.texture = sfTexture_createFromFile(LVL4_BADGE, NULL);
    badge4.taille = (sfVector2f) {1, 1};
    badge4.position = (sfVector2f) {745, 530};
    badge4.rect = (sfIntRect) {0, 0, 86, 104};
    sfSprite_setPosition(badge4.sprite, badge4.position);
    sfSprite_setTexture(badge4.sprite, badge4.texture, sfTrue);
    sfSprite_setTextureRect(badge4.sprite, badge4.rect);
    sfSprite_setScale(badge4.sprite, badge4.taille);
    return badge4;
}
