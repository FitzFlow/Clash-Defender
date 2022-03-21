/*
** EPITECH PROJECT, 2021
** myh
** File description:
** write all fonctios
*/

#ifndef DEFENDER_H_
    #define DEFENDER_H_
    #include "my.h"
    #include "define.h"
    #include "state_of_game.h"
    #define WINDOW all->window.window
    #define BACK_BTN all->lvl_button.back_sprite

    void display(all_t *all);

    void analyze_event(all_t *all, game_state_t *state);

    void analyze_event2(all_t *all, game_state_t *state_of_game);

    void analyze_level(all_t *all, game_state_t *state_of_game);

    void display_cursor(all_t *all);

    void animate_play_menu_btn(all_t *all);

    void animate_quit_menu_btn(all_t *all);

    void animate_setting_btn(all_t *all);

    void call_badge_anim(all_t *all);

    void resume_setting_btn(all_t *all);

    void quit_setting_btn(all_t *all);

    void menu_setting_btn(all_t *all);

    void animate_back_lvl_btn(all_t *all);

    void animate_tuto_lvl_btn(all_t *all);

    void res_qt(all_t *all,
    sfVector2i ms, sfVector2f qt_pos, sfIntRect qt_rec);

    void res_menu_setting(all_t *all, sfVector2i mse,
    sfVector2f set_pos, sfIntRect set_rec);

    void res_quit_setting(all_t *all, sfVector2i mse,
    sfVector2f set_pos, sfIntRect set_rec);

    void res_resume_setting(all_t *all, sfVector2i mse,
    sfVector2f set_pos, sfIntRect set_rec);

    void interact_setting(all_t *all);

    void interact_resume_setting(all_t *all);

    void interact_menu_setting(all_t *all, game_state_t *state);

    void interact_quit_setting(all_t *all, game_state_t *state);

    void interact_badge_1(all_t *all, game_state_t *state);

    void interact_badge_2(all_t *all, game_state_t *state);

    void interact_badge_3(all_t *all, game_state_t *state);

    void interact_badge_4(all_t *all, game_state_t *state);

    void draw_with_state(all_t *all, game_state_t *state_of_game);

    void drop_tower_tesla(all_t *all, sfVector2i click_position);

    void drop_tower_archery(all_t *all, sfVector2i click_position);

    void drop_tower_wizard(all_t *all, sfVector2i click_position);

    void drop_tower_canon(all_t *all, sfVector2i click_position);

    void if_drag_and_drop_archery(all_t *all);

    void drag_and_drop_archery(all_t *all);

    void if_drag_and_drop_canon(all_t *all);

    void drag_and_drop_canon(all_t *all);

    void if_drag_and_drop_wizard(all_t *all);

    void drag_and_drop_wizard(all_t *all);

    void if_drag_and_drop_tesla(all_t *all);

    void drag_and_drop_tesla(all_t *all);

    all_t *load_all(void);

    void draw_map_1(all_t *all);

    void draw_map_2(all_t *all);

    void draw_map_3(all_t *all);

    void draw_map_4(all_t *all);

    void action_quit_tuto(all_t *all, game_state_t *state);

    void animate_quit_tuto_btn(all_t *all);

    void move_golem(all_t *all);

    void draw_site(all_t *all);

    void draw_tower_map_1(all_t *all);

    int func_dist(int x1, int y1, int x2, int y2);

    void damage_royale_tower(all_t *all);

    void clock_golem(all_t *all);

    void clock_elixir(all_t *all);

    void count_kill_golem(all_t *all);

    void draw_crown(all_t *all);

    void resize_if_(all_t *all, int line, sfVector2f add[],
    sfVector2f tabpos[]);

    void resize_move_golem(all_t *all, int line, sfVector2f add[],
    sfVector2f tabpos[]);

    void animate_canon_card(all_t *all);

    void animate_card(all_t *all);

    char *name_of_ennemy(void);

    char *my_strdup(char *src);

    char *my_nbr_to_char(int nb);

    void draw_golem(all_t *all);

    void draw_barbare(all_t *all);

    void draw_valky(all_t *all);

    void clock_valky(all_t *all);

    void resize_clock_valkye(all_t *all, int line);

    void resize_clock_valkye2(all_t *all, int line);

    void all_clock_valky(all_t *all);

    void all_clock_barbare(all_t *all);

    void move_valkye(all_t *all);

    void move_barbare(all_t *all);

    void draw_leve_2(all_t *all);

    void draw_endgame_menu(all_t *all, game_state_t *state_of_game);

    void drop_tower_canon_lv2(all_t *all, sfVector2i click_position);

    void drop_tower_wizard_lv2(all_t *all, sfVector2i click_position);

    void drop_tower_tesla_lv2(all_t *all, sfVector2i click_position);

    void drop_tower_archery_lv_2(all_t *all, sfVector2i click_position);

    void drag_and_drop_canon_2(all_t *all);

    void drag_and_drop_wizard_2(all_t *all);

    void drag_and_drop_tesla_2(all_t *all);

    void drag_and_drop_archery_2(all_t *all);

    void drag_drop_2(all_t *all);

    void drag_drop(all_t *all);

    void drag_drop_3(all_t *all);

    void drag_drop_4(all_t *all);

    void drop_tower_canon_lv3(all_t *all, sfVector2i click_position);

    void drop_tower_wizard_lv3(all_t *all, sfVector2i click_position);

    void drop_tower_tesla_lv3(all_t *all, sfVector2i click_position);

    void drop_tower_archery_lv_3(all_t *all, sfVector2i click_position);

    void drag_and_drop_canon_3(all_t *all);

    void drag_and_drop_wizard_3(all_t *all);

    void drag_and_drop_tesla_3(all_t *all);

    void drag_and_drop_archery_3(all_t *all);

    void drop_tower_canon_lv4(all_t *all, sfVector2i click_position);

    void drop_tower_wizard_lv4(all_t *all, sfVector2i click_position);

    void drop_tower_tesla_lv4(all_t *all, sfVector2i click_position);

    void drop_tower_archery_lv_4(all_t *all, sfVector2i click_position);

    void drag_and_drop_archery_4(all_t *all);

    void drag_and_drop_tesla_4(all_t *all);

    void drag_and_drop_wizard_4(all_t *all);

    void drag_and_drop_canon_4(all_t *all);

    void move_golem_lv2(all_t *all);

    void draw_valky_lv2(all_t *all);

    void draw_barbare_lv2(all_t *all);

    void draw_golem_lv2(all_t *all);

    void clock_golem_lv2(all_t *all);

    void move_golem_lv3(all_t *all);

    void clock_golem_lv3(all_t *all);

    void draw_golem_lv3(all_t *all);

    void draw_valky_lv3(all_t *all);

    void draw_barbare_lv3(all_t *all);

    void move_golem_lv4(all_t *all);

    void clock_golem_lv4(all_t *all);

    void draw_golem_lv4(all_t *all);

    void draw_valky_lv4(all_t *all);

    void draw_barbare_lv4(all_t *all);

    void all_clock_valky_2(all_t *all);

    void resize_clock_valkye2_2(all_t *all, int line);

    void resize_clock_valkye_2(all_t *all, int line);

    void all_clock_valky_3(all_t *all);

    void resize_clock_valkye2_3(all_t *all, int line);

    void resize_clock_valkye_3(all_t *all, int line);

    void all_clock_valky_4(all_t *all);

    void resize_clock_valkye_4(all_t *all, int line);

    void resize_clock_valkye_4(all_t *all, int line);

    void resize_clock_barbare_4(all_t *all, int line);

    void resize_clock_barbare2_4(all_t *all, int line);

    void all_clock_barbare_4(all_t *all);

    void resize_clock_barbare_3(all_t *all, int line);

    void resize_clock_barbare2_3(all_t *all, int line);

    void all_clock_barbare_3(all_t *all);

    void resize_clock_barbare_2(all_t *all, int line);

    void resize_clock_barbare2_2(all_t *all, int line);

    void all_clock_barbare_2(all_t *all);

    void move_valkye_2(all_t *all);

    void move_valkye_3(all_t *all);

    void move_valkye_4(all_t *all);

    void move_barbare_2(all_t *all);

    void move_barbare_3(all_t *all);

    void move_barbare_4(all_t *all);

    void interact_menu_setting_endgame(all_t *all, game_state_t *state);

    void menu_setting_btn_endgame(all_t *all);

    void res_menu_setting_endgame(all_t *all, sfVector2i mse,
    sfVector2f set_pos, sfIntRect set_rec);

    void shoot_golem(all_t *all);

    void shoot_valkye_lv1(all_t *all);

    void shoot_barb_lv1(all_t *all);

    void count_kill_all_lv2(all_t *all);

    void shoot_golem_lv2(all_t *all);

    void shoot_barb_lv2(all_t *all);

    void shoot_valkye_lv2(all_t *all);

    void damage_royale_tower_lv2(all_t *all);

    void damage_royale_tower_lv3(all_t *all);

    void shoot_golem_lv3(all_t *all);

    void shoot_barb_lv3(all_t *all);

    void shoot_valkye_lv3(all_t *all);

    void count_kill_all_lv3(all_t *all);

    void damage_royale_tower_lv4(all_t *all);

    void shoot_golem_lv4(all_t *all);

    void shoot_barb_lv4(all_t *all);

    void shoot_valky_lv4(all_t *all);

    void count_kill_all_lv4(all_t *all);

    void draw_leve_1(all_t *all, game_state_t *state_of_game);

    int random_number(void);

    void draw_level_selection(all_t *all, game_state_t *state_of_game);

    void action_level_selector(all_t *all, game_state_t *state);

    void level_one_action(all_t *all, game_state_t *state_of_game);

    void level_two_draw(all_t *all, game_state_t *state_of_game);

    void level_two_action(all_t *all, game_state_t *state_of_game);

    void level_three_draw(all_t *all, game_state_t *state_of_game);

    void level_three_action(all_t *all, game_state_t *state_of_game);

    void level_four_draw(all_t *all, game_state_t *state_of_game);

    void level_four_action(all_t *all, game_state_t *state_of_game);

    void main_menu_action(all_t *all, game_state_t *state_of_game);

    void draw_crown(all_t *all);

    void resize_load_all_5(all_t *all);

    void resize_clock_golem2_lv2(all_t *all, int line);

    void resize_clock_golem_lv2(all_t *all, int line);

    void resize_clock_golem2_lv3(all_t *all, int line);

    void resize_clock_golem_lv3(all_t *all, int line);

    void resize_clock_golem2_lv4(all_t *all, int line);

    void resize_clock_golem_lv4(all_t *all, int line);

    void resize_clock_golem(all_t *all, int line);

    void resize_clock_golem2(all_t *all, int line);

    void resize_analyze2(all_t *all, game_state_t *state_of_game);

    void resize_analyze(all_t *all, game_state_t *state_of_game);

#endif
