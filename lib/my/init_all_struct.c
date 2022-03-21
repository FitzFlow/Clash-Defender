/*
** EPITECH PROJECT, 2022
** B-MUL-200-RUN-2-1-mydefender-florian.etheve
** File description:
** init_all_struct
*/

#include "defender.h"

void resize_load_all_4(all_t *all)
{
    int barb_x_lvl3[8] = {297, 297, 297, 297, 297, 297, 297, 297};
    int barb_y_lvl3[8] = {720, 900, 1200, 1700, 2700, 3200, 3500, 3700};
    all->tab_of_barbare_lv3 = tab_of_barbare(8, barb_x_lvl3, barb_y_lvl3);
    int barb_x_lvl1[4] = {-120, -300, -800, -1100};
    int barb_y_lvl1[4] = {475, 475, 475, 475};
    all->tab_of_barbare = tab_of_barbare(4, barb_x_lvl1, barb_y_lvl1);
    int x_lvl3[6] = {127, 101, 216, 815, 512, 1088};
    int y_lvl3[6] = {574, 337, 100, 6, 275, 546};
    all->tab_of_site_lv_3 = tab_of_tower_site(6, x_lvl3, y_lvl3);
    all->back_menu = init_menu_endgame();
    resize_load_all_5(all);
}

void resize_load_all_3(all_t *all)
{
    int golem_x_lvl2[6] = {186, 186, 186, 186, 186, 186};
    int golem_y_lvl2[6] = {1100, 2400, 2600, 3300, 3900, 4200};
    all->tab_of_golem_lv2 = tab_of_golem(6, golem_x_lvl2, golem_y_lvl2);
    int valky_x_lvl2[6] = {186, 186, 186, 186, 186, 186};
    int valky_y_lvl2[6] = {1400, 1700, 2200, 2500, 2700, 3700};
    all->tab_of_valky_lv2 = tab_of_valky(6, valky_x_lvl2, valky_y_lvl2);
    int barb_x_lvl2[6] = {186, 186, 186, 186, 186, 186};
    int barb_y_lvl2[6] = {720, 900, 1500, 2100, 2800, 3400};
    all->tab_of_barbare_lv2 = tab_of_barbare(6, barb_x_lvl2, barb_y_lvl2);
    int golem_x_lvl3[8] = {297, 297, 297, 297, 297, 297, 297, 297};
    int golem_y_lvl3[8] = {1120, 1400, 1800, 2200, 2600, 3000, 3400, 3800};
    all->tab_of_golem_lv3 = tab_of_golem(8, golem_x_lvl3, golem_y_lvl3);
    int valky_x_lvl3[8] = {297, 297, 297, 297, 297, 297, 297, 297};
    int valky_y_lvl3[8] = {1100, 1250, 1650, 1850, 2150, 2450, 2850, 3250};
    all->tab_of_valky_lv3 = tab_of_valky(8, valky_x_lvl3, valky_y_lvl3);
    int valky_x_lvl1[4] = {-50, -200, -550, -950};
    int valky_y_lvl1[4] = {475, 475, 475, 475};
    all->tab_of_valky = tab_of_valky(4, valky_x_lvl1, valky_y_lvl1);
    resize_load_all_4(all);
}

void resize_load_all_2(all_t *all)
{
    all->pause_back = init_back_pause();
    all->timer_golem = sfClock_create();
    all->timer_dmg_golem = sfClock_create();
    all->elixir = init_elixir();
    all->lose = init_lose();
    all->win = init_win();
    all->name_ennemy = NULL;
    all->kill = 0;
    all->sc_and_name = init_score_and_name(all);
    all->trophy = init_trophy();
    all->endtower_king = 0;
    int golem_x_lvl1[4] = {-400, -700, -1200, -1500};
    int golem_y_lvl1[4] = {460, 460, 460, 460};
    all->tab_of_golem = tab_of_golem(4, golem_x_lvl1, golem_y_lvl1);
    int x_lvl4[4] = {133, 394, 640, 898};
    int y_lvl4[4] = {121, 401, 141, 414};
    all->tab_of_site_lv_4 = tab_of_tower_site(4, x_lvl4, y_lvl4);
    resize_load_all_3(all);
}

void resize_load_all(all_t *all)
{
    all->arc_tower = init_archery_tower();
    all->can_tower = init_canon_tower();
    all->wiz_tower = init_wizard_tower();
    all->tes_tower = init_tesla_tower();
    all->can_card = init_canon_card();
    all->wiz_card = init_wizard_card();
    all->tes_card = init_tesla_card();
    all->drag = 2;
    all->pause = 0;
    all->endgame = 0;
    all->tuto = init_tutorial();
    all->tuto_quit_btn = init_quit_tuto_btn();
    all->setting = init_btn_setting();
    all->resume = init_resume_setting();
    all->quit = init_quit_setting();
    all->menu = init_menu_setting();
    all->init_setting = init_page_setting();
    resize_load_all_2(all);
}

all_t *load_all(void)
{
    all_t *all = malloc(sizeof(all_t));
    all->window = load_window();
    all->main_menu = init_background();
    all->main_menu_btn = init_main_menu_btn();
    all->level_selector = init_level_select();
    all->lvl_button = init_lvl_selector_button();
    all->cursor = init_cursor();
    all->badge1 = init_badge_1();
    all->badge2 = init_badge_2();
    all->badge3 = init_badge_3();
    all->badge4 = init_badge_4();
    all->map1 = init_map_1();
    all->map2 = init_map_2();
    all->map3 = init_map_3();
    all->map4 = init_map_4();
    all->card_preview = init_game_preview();
    all->arc_card = init_archery_card();
    all->twr_royal = init_tower_royale();
    resize_load_all(all);
    return (all);
}
