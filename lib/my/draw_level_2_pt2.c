/*
** EPITECH PROJECT, 2022
** B-MUL-200-RUN-2-1-mydefender-florian.etheve
** File description:
** draw_level_2_pt2
*/

#include "defender.h"

void draw_golem_lv2(all_t *all)
{
    int line = 0;
    sfVector2f golem_pos;

    while (all->tab_of_golem_lv2[line] != NULL) {
        golem_pos = sfSprite_getPosition(all->tab_of_golem_lv2[line]->sprite);
        if (all->tab_of_golem_lv2[line]->pv > 0) {
            sfRenderWindow_drawSprite(all->window.window,
            all->tab_of_golem_lv2[line]->sprite, NULL);
            sfRenderWindow_drawText(all->window.window,
            all->tab_of_golem_lv2[line]->text, NULL);
            golem_pos.x += 15;
            golem_pos.y -= 15;
            sfText_setPosition(all->tab_of_golem_lv2[line]->text,
            golem_pos);
            sfText_setString(all->tab_of_golem_lv2[line]->text,
            my_nbr_to_char(all->tab_of_golem_lv2[line]->pv));
        }
        line = line + 1;
    }
}

void draw_valky_lv2(all_t *all)
{
    int line = 0;
    sfVector2f valky_pos;

    while (all->tab_of_valky_lv2[line] != NULL) {
        valky_pos = sfSprite_getPosition(all->tab_of_valky_lv2[line]->sprite);
        if (all->tab_of_valky_lv2[line]->pv > 0) {
            sfRenderWindow_drawSprite(all->window.window,
            all->tab_of_valky_lv2[line]->sprite, NULL);
            sfRenderWindow_drawText(all->window.window,
            all->tab_of_valky_lv2[line]->text, NULL);
            valky_pos.x += 15;
            valky_pos.y -= 15;
            sfText_setPosition(all->tab_of_valky_lv2[line]->text,
            valky_pos);
            sfText_setString(all->tab_of_valky_lv2[line]->text,
            my_nbr_to_char(all->tab_of_valky_lv2[line]->pv));
        }
        line = line + 1;
    }
}

void draw_barbare_lv2(all_t *all)
{
    int line = 0;
    sfVector2f barb_pos;

    while (all->tab_of_barbare_lv2[line] != NULL) {
        barb_pos = sfSprite_getPosition(all->tab_of_barbare_lv2[line]->sprite);
        if (all->tab_of_barbare_lv2[line]->pv > 0) {
            sfRenderWindow_drawSprite(all->window.window,
            all->tab_of_barbare_lv2[line]->sprite, NULL);
            sfRenderWindow_drawText(all->window.window,
            all->tab_of_barbare_lv2[line]->text, NULL);
            barb_pos.x += 15;
            barb_pos.y -= 15;
            sfText_setPosition(all->tab_of_barbare_lv2[line]->text,
            barb_pos);
            sfText_setString(all->tab_of_barbare_lv2[line]->text,
            my_nbr_to_char(all->tab_of_barbare_lv2[line]->pv));
        }
        line = line + 1;
    }
}
