/*
** EPITECH PROJECT, 2022
** B-MUL-200-RUN-2-1-mydefender-florian.etheve
** File description:
** draw_level_1_pt2
*/

#include "defender.h"

void draw_golem(all_t *all)
{
    int line = 0;
    sfVector2f golem_pos;

    while (all->tab_of_golem[line] != NULL) {
        golem_pos = sfSprite_getPosition(all->tab_of_golem[line]->sprite);
        if (all->tab_of_golem[line]->pv > 0) {
            sfRenderWindow_drawSprite(all->window.window,
            all->tab_of_golem[line]->sprite, NULL);
            sfRenderWindow_drawText(all->window.window,
            all->tab_of_golem[line]->text, NULL);
            golem_pos.x += 15;
            golem_pos.y -= 15;
            sfText_setPosition(all->tab_of_golem[line]->text,
            golem_pos);
            sfText_setString(all->tab_of_golem[line]->text,
            my_nbr_to_char(all->tab_of_golem[line]->pv));
        }
        line = line + 1;
    }
}

void draw_valky(all_t *all)
{
    int line = 0;
    sfVector2f valky_pos;

    while (all->tab_of_valky[line] != NULL) {
        valky_pos = sfSprite_getPosition(all->tab_of_valky[line]->sprite);
        if (all->tab_of_valky[line]->pv > 0) {
            sfRenderWindow_drawSprite(all->window.window,
            all->tab_of_valky[line]->sprite, NULL);
            sfRenderWindow_drawText(all->window.window,
            all->tab_of_valky[line]->text, NULL);
            valky_pos.x += 15;
            valky_pos.y -= 15;
            sfText_setPosition(all->tab_of_valky[line]->text,
            valky_pos);
            sfText_setString(all->tab_of_valky[line]->text,
            my_nbr_to_char(all->tab_of_valky[line]->pv));
        }
        line = line + 1;
    }
}

void draw_barbare(all_t *all)
{
    int line = 0;
    sfVector2f barbare_pos;

    while (all->tab_of_barbare[line] != NULL) {
        barbare_pos = sfSprite_getPosition(all->tab_of_barbare[line]->sprite);
        if (all->tab_of_barbare[line]->pv > 0) {
            sfRenderWindow_drawSprite(all->window.window,
            all->tab_of_barbare[line]->sprite, NULL);
            sfRenderWindow_drawText(all->window.window,
            all->tab_of_barbare[line]->text, NULL);
            barbare_pos.x += 15;
            barbare_pos.y -= 15;
            sfText_setPosition(all->tab_of_barbare[line]->text,
            barbare_pos);
            sfText_setString(all->tab_of_barbare[line]->text,
            my_nbr_to_char(all->tab_of_barbare[line]->pv));
        }
        line = line + 1;
    }
}
