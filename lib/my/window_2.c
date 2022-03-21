/*
** EPITECH PROJECT, 2022
** B-MUL-200-RUN-2-1-mydefender-florian.etheve
** File description:
** window_2
*/

#include "defender.h"

void resize_analyze2(all_t *all, game_state_t *state_of_game)
{
    if (*state_of_game == level_3_play)
        analyze_level(all, state_of_game);
    else if (*state_of_game == level_4_play)
        analyze_level(all, state_of_game);
}

void resize_analyze(all_t *all, game_state_t *state_of_game)
{
    if (*state_of_game == level_1_play)
        analyze_level(all, state_of_game);
    else if (*state_of_game == level_2_play)
        analyze_level(all, state_of_game);
    else
        resize_analyze2(all, state_of_game);
}

void analyze_level(all_t *all, game_state_t *state_of_game)
{
    interact_setting(all);
    interact_menu_setting(all, state_of_game);
    interact_quit_setting(all, state_of_game);
    interact_resume_setting(all);
    if_drag_and_drop_archery(all);
    if_drag_and_drop_wizard(all);
    if_drag_and_drop_tesla(all);
    if_drag_and_drop_canon(all);
    animate_setting_btn(all);
    resume_setting_btn(all);
    quit_setting_btn(all);
    menu_setting_btn(all);
}
