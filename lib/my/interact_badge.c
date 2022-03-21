/*
** EPITECH PROJECT, 2022
** B-MUL-200-RUN-2-1-mydefender-florian.etheve
** File description:
** interact_badge
*/

#include "defender.h"

void interact_badge_4(all_t *all, game_state_t *state)
{
    sfVector2i click_position =
    sfMouse_getPositionRenderWindow(all->window.window);
    sfVector2f badge_position = sfSprite_getPosition(all->badge4.sprite);
    if (all->window.event.type == sfEvtMouseButtonPressed &&
    all->window.event.mouseButton.button == sfMouseLeft) {
        if (click_position.x >= badge_position.x &&
        click_position.x <= badge_position.x + 86 &&
        click_position.y >= badge_position.y &&
        click_position.y <= badge_position.y + 104) {
            sfSound_play(all->main_menu.click_sound);
            *state = level_4_play;
        }
    }
}

void interact_badge_3(all_t *all, game_state_t *state)
{
    sfVector2i click_position =
    sfMouse_getPositionRenderWindow(all->window.window);
    sfVector2f badge_position = sfSprite_getPosition(all->badge3.sprite);
    if (all->window.event.type == sfEvtMouseButtonPressed &&
    all->window.event.mouseButton.button == sfMouseLeft) {
        if (click_position.x >= badge_position.x &&
        click_position.x <= badge_position.x + 86 &&
        click_position.y >= badge_position.y &&
        click_position.y <= badge_position.y + 104) {
            sfSound_play(all->main_menu.click_sound);
            *state = level_3_play;
    } else
        interact_badge_4(all, state);
    }
}

void interact_badge_2(all_t *all, game_state_t *state)
{
    sfVector2i click_position =
    sfMouse_getPositionRenderWindow(all->window.window);
    sfVector2f badge_position = sfSprite_getPosition(all->badge2.sprite);
    if (all->window.event.type == sfEvtMouseButtonPressed &&
    all->window.event.mouseButton.button == sfMouseLeft) {
        if (click_position.x >= badge_position.x &&
        click_position.x <= badge_position.x + 86 &&
        click_position.y >= badge_position.y &&
        click_position.y <= badge_position.y + 104) {
            sfSound_play(all->main_menu.click_sound);
            *state = level_2_play;
    } else
        interact_badge_3(all, state);
    }
}

void interact_badge_1(all_t *all, game_state_t *state)
{
    sfVector2i click_position =
    sfMouse_getPositionRenderWindow(all->window.window);
    sfVector2f badge_position = sfSprite_getPosition(all->badge1.sprite);
    if (all->window.event.type == sfEvtMouseButtonPressed &&
    all->window.event.mouseButton.button == sfMouseLeft) {
        if (click_position.x >= badge_position.x &&
        click_position.x <= badge_position.x + 86 &&
        click_position.y >= badge_position.y &&
        click_position.y <= badge_position.y + 104) {
            sfSound_play(all->main_menu.click_sound);
            *state = level_1_play;
        } else
            interact_badge_2(all, state);
    }
}
