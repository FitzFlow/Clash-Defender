/*
** EPITECH PROJECT, 2021
** csfml
** File description:
** test
*/

#include "defender.h"

void destroy_all_sound_and_sprite(all_t *all)
{
    sfRenderWindow_destroy(all->window.window);
    sfMusic_destroy(all->main_menu.intro_menu);
    sfMusic_destroy(all->main_menu.second_intro_menu);
    sfMusic_destroy(all->level_selector.theme_sound);
    sfSprite_destroy(all->cursor.sprite);
    sfSprite_destroy(all->level_selector.sprite);
    sfSprite_destroy(all->lvl_button.back_sprite);
    sfSprite_destroy(all->lvl_button.tuto_sprite);
    sfSprite_destroy(all->main_menu.sprite);
    sfSprite_destroy(all->main_menu_btn.play_sprite);
    sfSprite_destroy(all->main_menu_btn.quit_sprite);
    sfSound_destroy(all->main_menu.click_sound);
    sfSoundBuffer_destroy(all->main_menu.click_buffer);
}

void play_music_with_state(all_t *all, game_state_t *state_of_game)
{
    if (*state_of_game == main_menu) {
        sfMusic_play(all->main_menu.intro_menu);
        sfMusic_play(all->main_menu.second_intro_menu);
    }
    if (*state_of_game == level_selection)
        sfMusic_play(all->level_selector.theme_sound);
}

void my_defender(void)
{
    all_t *all = load_all();
    game_state_t state_of_game = main_menu;
    sfRenderWindow_setFramerateLimit(all->window.window, 60);
    sfRenderWindow_clear(all->window.window, sfBlack);
    play_music_with_state(all, &state_of_game);
    all->name_ennemy = my_strdup(name_of_ennemy());
    while (sfRenderWindow_isOpen(all->window.window)) {
        sfRenderWindow_clear(all->window.window, sfBlack);
        while (sfRenderWindow_pollEvent(all->window.window,
        &all->window.event))
            analyze_event(all, &state_of_game);
        display_cursor(all);
        draw_with_state(all, &state_of_game);
        sfRenderWindow_drawSprite(all->window.window,
        all->cursor.sprite, NULL);
        sfRenderWindow_display(all->window.window);
    }
    destroy_all_sound_and_sprite(all);
}

int main(int ac, char **av)
{
    if (ac == 2 && av[1][0] == '-' && av[1][1] == 'h') {
        write(2, "Clash Defender, a tower defense game with ", 42);
        write(2, "Clash Royal / Clash of Clans themes and soundtracks\n", 53);
    } else if (ac == 1)
        my_defender();
    else
        return 84;
    return 0;
}
