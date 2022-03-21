/*
** EPITECH PROJECT, 2022
** B-MUL-200-RUN-2-1-mydefender-florian.etheve
** File description:
** draw_level_pt3
*/

#include "defender.h"

void draw_golem_lv3(all_t *all)
{
    int line = 0;
    sfVector2f golem_pos;

    while (all->tab_of_golem_lv3[line] != NULL) {
        golem_pos = sfSprite_getPosition(all->tab_of_golem_lv3[line]->sprite);
        if (all->tab_of_golem_lv3[line]->pv > 0) {
            sfRenderWindow_drawSprite(all->window.window,
            all->tab_of_golem_lv3[line]->sprite, NULL);
            sfRenderWindow_drawText(all->window.window,
            all->tab_of_golem_lv3[line]->text, NULL);
            golem_pos.x += 15;
            golem_pos.y -= 15;
            sfText_setPosition(all->tab_of_golem_lv3[line]->text,
            golem_pos);
            sfText_setString(all->tab_of_golem_lv3[line]->text,
            my_nbr_to_char(all->tab_of_golem_lv3[line]->pv));
        }
        line = line + 1;
    }
}

void draw_valky_lv3(all_t *all)
{
    int line = 0;
    sfVector2f valky_pos;

    while (all->tab_of_valky_lv3[line] != NULL) {
        valky_pos = sfSprite_getPosition(all->tab_of_valky_lv3[line]->sprite);
        if (all->tab_of_valky_lv3[line]->pv > 0) {
            sfRenderWindow_drawSprite(all->window.window,
            all->tab_of_valky_lv3[line]->sprite, NULL);
            sfRenderWindow_drawText(all->window.window,
            all->tab_of_valky_lv3[line]->text, NULL);
            valky_pos.x += 15;
            valky_pos.y -= 15;
            sfText_setPosition(all->tab_of_valky_lv3[line]->text,
            valky_pos);
            sfText_setString(all->tab_of_valky_lv3[line]->text,
            my_nbr_to_char(all->tab_of_valky_lv3[line]->pv));
        }
        line = line + 1;
    }
}

void draw_barbare_lv3(all_t *all)
{
    int line = 0;
    sfVector2f barbare_pos;

    while (all->tab_of_barbare_lv3[line] != NULL) {
        barbare_pos = sfSprite_getPosition(all->tab_of_barbare_lv3[line]->
        sprite);
        if (all->tab_of_barbare_lv3[line]->pv > 0) {
            sfRenderWindow_drawSprite(all->window.window,
            all->tab_of_barbare_lv3[line]->sprite, NULL);
            sfRenderWindow_drawText(all->window.window,
            all->tab_of_barbare_lv3[line]->text, NULL);
            barbare_pos.x += 15;
            barbare_pos.y -= 15;
            sfText_setPosition(all->tab_of_barbare_lv3[line]->text,
            barbare_pos);
            sfText_setString(all->tab_of_barbare_lv3[line]->text,
            my_nbr_to_char(all->tab_of_barbare_lv3[line]->pv));
        }
        line = line + 1;
    }
}
