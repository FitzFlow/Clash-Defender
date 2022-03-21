/*
** EPITECH PROJECT, 2022
** B-MUL-200-RUN-2-1-mydefender-florian.etheve
** File description:
** init_tutorial
*/

#include "defender.h"

tutorial_image init_tutorial(void)
{
    tutorial_image tuto;
    tuto.sprite = sfSprite_create();
    tuto.texture = sfTexture_createFromFile(TUTO, NULL);
    tuto.position = (sfVector2f) {0, 0};
    tuto.taille = (sfVector2f) {1, 1};
    sfSprite_setTexture(tuto.sprite, tuto.texture, sfTrue);
    sfSprite_setPosition(tuto.sprite, tuto.position);
    sfSprite_setScale(tuto.sprite, tuto.taille);
    return (tuto);
}

quit_tuto init_quit_tuto_btn(void)
{
    quit_tuto btn;
    btn.sprite = sfSprite_create();
    btn.texture = sfTexture_createFromFile(QUIT_TUTO, NULL);
    btn.position = (sfVector2f) {8, 30};
    btn.taille = (sfVector2f) {1, 1};
    btn.rect = (sfIntRect) {0, 0, 245, 63};
    sfSprite_setTexture(btn.sprite, btn.texture, sfTrue);
    sfSprite_setPosition(btn.sprite, btn.position);
    sfSprite_setScale(btn.sprite, btn.taille);
    sfSprite_setTextureRect(btn.sprite, btn.rect);
    return (btn);
}

void action_quit_tuto(all_t *all, game_state_t *state)
{
    sfVector2i click_position =
    sfMouse_getPositionRenderWindow(all->window.window);
    sfVector2f quit_position = sfSprite_getPosition(all->tuto_quit_btn.sprite);
    if (all->window.event.type == sfEvtMouseButtonReleased &&
    all->window.event.mouseButton.button == sfMouseLeft) {
        if (click_position.x >= quit_position.x &&
        click_position.x <= quit_position.x + 490 &&
        click_position.y >= quit_position.y &&
        click_position.y <= quit_position.y + 63) {
            sfSound_play(all->main_menu.click_sound);
            *state = level_selection;
        }
    }
}

void res_tuto_quit(all_t *all, sfVector2i mse,
sfVector2f qt_pos, sfIntRect qt_rec)
{
    if (mse.x >= qt_pos.x && mse.x <= qt_pos.x + 245 && mse.y >= qt_pos.y &&
        mse.y <= qt_pos.y + 63) {
            all->tuto_quit_btn.rect = (sfIntRect) {245, 0, 245, 63};
            sfSprite_setTextureRect(all->tuto_quit_btn.sprite,
            all->tuto_quit_btn.rect);
    } else {
            all->tuto_quit_btn.rect = (sfIntRect) {0, 0, 245, 63};
            sfSprite_setTextureRect(all->tuto_quit_btn.sprite,
            all->tuto_quit_btn.rect);
    }
}

void animate_quit_tuto_btn(all_t *all)
{
    sfVector2i mouse = sfMouse_getPositionRenderWindow(all->window.window);
    sfVector2f quit_position =
    sfSprite_getPosition(all->tuto_quit_btn.sprite);
    sfIntRect quit_rect =
    sfSprite_getTextureRect(all->main_menu_btn.play_sprite);
    res_tuto_quit(all, mouse, quit_position, quit_rect);
}
