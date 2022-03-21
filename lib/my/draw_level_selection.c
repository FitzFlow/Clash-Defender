/*
** EPITECH PROJECT, 2022
** B-MUL-200-RUN-2-1-mydefender-florian.etheve
** File description:
** draw_sprite_of_level_selection
*/

#include "defender.h"

void draw_level_selection(all_t *all, game_state_t *state_of_game)
{
    interact_badge_1(all, state_of_game);
    call_badge_anim(all);
    action_level_selector(all, state_of_game);
    animate_back_lvl_btn(all);
    animate_tuto_lvl_btn(all);
}
