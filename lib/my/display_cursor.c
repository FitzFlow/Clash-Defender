/*
** EPITECH PROJECT, 2022
** B-MUL-200-RUN-2-1-mydefender-florian.etheve
** File description:
** display_scope
*/

#include "defender.h"

clash_cursor init_cursor(void)
{
    clash_cursor cursor;
    cursor.sprite = sfSprite_create();
    cursor.texture = sfTexture_createFromFile(CURSOR, NULL);
    cursor.position = (sfVector2f) {1000, 1000};
    cursor.taille = (sfVector2f) {1, 1};
    sfSprite_setTexture(cursor.sprite, cursor.texture, sfTrue);
    sfSprite_setPosition(cursor.sprite, cursor.position);
    sfSprite_setScale(cursor.sprite, cursor.taille);
    return (cursor);
}

void display_cursor(all_t *all)
{
    sfVector2i mouse = sfMouse_getPositionRenderWindow(all->window.window);
    if (all->window.event.type == sfEvtMouseMoved) {
        sfRenderWindow_setMouseCursorVisible(all->window.window, sfFalse);
        sfSprite_setPosition(all->cursor.sprite, (sfVector2f) {CURSOR_POS});
    }
}
