/*
** EPITECH PROJECT, 2022
** B-MUL-200-RUN-2-1-mydefender-florian.etheve
** File description:
** init_all_struct_2
*/

#include "defender.h"

void resize_load_all_5(all_t *all)
{
    int x_lvl1[4] = {299, 656, 95, 656};
    int y_lvl1[4] = {343, 343, 564, 121};
    all->tab_of_site = tab_of_tower_site(4, x_lvl1, y_lvl1);
    int x_lvl2[5] = {16, 282, 374, 807, 739};
    int y_lvl2[5] = {93, 425, 105, 330, 0};
    all->tab_of_site_lv_2 = tab_of_tower_site(5, x_lvl2, y_lvl2);
    int golem_x_4[10] = {41, 41, 41, 41, 41, 41, 41, 41, 41, 41};
    int golem_y_4[10] = {1120, 1520, 2300, 2400, 2800, 3200, 3600,
    4000, 4400, 4800};
    all->tab_of_golem_lv4 = tab_of_golem(10, golem_x_4, golem_y_4);
    int valky_x_4[10] = {41, 41, 41, 41, 41, 41, 41, 41, 41, 41};
    int valky_y_4[10] = {920, 1120, 1320, 1520, 1720, 1920, 2120,
    2320, 2520, 2720};
    all->tab_of_valky_lv4 = tab_of_valky(10, valky_x_4, valky_y_4);
    int barb_x_4[10] = {41, 41, 41, 41, 41, 41, 41, 41, 41, 41};
    int barb_y_4[10] = {720, 1320, 1920, 2520, 3120, 3720, 4320,
    4920, 5520, 6120};
    all->tab_of_barbare_lv4 = tab_of_barbare(10, barb_x_4, barb_y_4);
}
