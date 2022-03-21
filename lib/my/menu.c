/*
** EPITECH PROJECT, 2022
** B-MUL-200-RUN-2-1-mydefender-florian.etheve
** File description:
** menu
*/

#include "defender.h"

menu_background_t init_background(void)
{
    menu_background_t main_menu;
    main_menu.sprite = sfSprite_create();
    main_menu.texture = sfTexture_createFromFile(MENU, NULL);
    main_menu.position = (sfVector2f) {0, 0};
    main_menu.taille = (sfVector2f) {1, 1};
    sfSprite_setPosition(main_menu.sprite, main_menu.position);
    sfSprite_setScale(main_menu.sprite, main_menu.taille);
    sfSprite_setTexture(main_menu.sprite, main_menu.texture, sfTrue);
    main_menu.intro_menu = sfMusic_createFromFile(MENU_INTRO);
    main_menu.second_intro_menu = sfMusic_createFromFile(MENU_INTRO_SEC);
    main_menu.click_sound = sfSound_create();
    main_menu.click_buffer = sfSoundBuffer_createFromFile(CLICK_SOUND);
    sfSound_setBuffer(main_menu.click_sound, main_menu.click_buffer);
    return (main_menu);
}

main_menu_btn init_main_menu_btn(void)
{
    main_menu_btn menu_btn;
    menu_btn.play_sprite = sfSprite_create();
    menu_btn.play_texture = sfTexture_createFromFile(MENU_PLAY, NULL);
    menu_btn.play_position = (sfVector2f) {434, 362};
    menu_btn.play_taille = (sfVector2f) {1, 1};
    menu_btn.play_resize = (sfIntRect) {0, 0, 410, 105};
    sfSprite_setPosition(menu_btn.play_sprite, menu_btn.play_position);
    sfSprite_setScale(menu_btn.play_sprite, menu_btn.play_taille);
    sfSprite_setTexture(menu_btn.play_sprite, menu_btn.play_texture, sfTrue);
    sfSprite_setTextureRect(menu_btn.play_sprite, menu_btn.play_resize);
    menu_btn.quit_sprite = sfSprite_create();
    menu_btn.quit_texture = sfTexture_createFromFile(MENU_QUIT, NULL);
    menu_btn.quit_position = (sfVector2f) {434, 505};
    menu_btn.quit_taille = (sfVector2f) {1, 1};
    menu_btn.quit_resize = (sfIntRect) {0, 0, 410, 105};
    sfSprite_setPosition(menu_btn.quit_sprite, menu_btn.quit_position);
    sfSprite_setScale(menu_btn.quit_sprite, menu_btn.quit_taille);
    sfSprite_setTexture(menu_btn.quit_sprite, menu_btn.quit_texture, sfTrue);
    sfSprite_setTextureRect(menu_btn.quit_sprite, menu_btn.quit_resize);
    return (menu_btn);
}
