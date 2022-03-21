/*
** EPITECH PROJECT, 2022
** B-MUL-200-RUN-2-1-mydefender-florian.etheve
** File description:
** init_score_and_name
*/

#include "defender.h"

score_and_name *init_score_and_name(all_t *all)
{
    score_and_name *score_nme = malloc(sizeof(score_and_name));
    score_nme->name_text = sfText_create();
    score_nme->name_font = sfFont_createFromFile(FONT);
    score_nme->name_position = (sfVector2f) {520, 255};
    sfText_setPosition(score_nme->name_text, score_nme->name_position);
    sfText_setString(score_nme->name_text, name_of_ennemy());
    sfText_setFont(score_nme->name_text, score_nme->name_font);
    sfText_setCharacterSize(score_nme->name_text, 30);
    sfText_setColor(score_nme->name_text, sfWhite);
    score_nme->trohpy_text = sfText_create();
    score_nme->trohpy_font = sfFont_createFromFile(FONT);
    score_nme->trophy_position = (sfVector2f) {590, 560};
    sfText_setPosition(score_nme->trohpy_text, score_nme->trophy_position);
    sfText_setString(score_nme->trohpy_text, "You");
    sfText_setFont(score_nme->trohpy_text, score_nme->trohpy_font);
    sfText_setCharacterSize(score_nme->trohpy_text, 30);
    sfText_setColor(score_nme->trohpy_text, sfWhite);
    return (score_nme);
}

trophy init_trophy(void)
{
    trophy tph;
    tph.text = sfText_create();
    tph.font = sfFont_createFromFile(FONT);
    tph.position = (sfVector2f) {800, 263};
    sfText_setPosition(tph.text, tph.position);
    sfText_setFont(tph.text, tph.font);
    sfText_setCharacterSize(tph.text, 23);
    sfText_setColor(tph.text, sfWhite);
    return (tph);
}
