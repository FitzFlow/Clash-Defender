/*
** EPITECH PROJECT, 2022
** B-MUL-200-RUN-2-1-mydefender-florian.etheve
** File description:
** drag_and_drop_resize
*/

#include "defender.h"

void if_drag_and_drop_archery(all_t *all)
{
    sfVector2i click_position = sfMouse_getPositionRenderWindow(WINDOW);
    sfVector2f card_archery =
    sfSprite_getPosition(all->arc_card.sprite);

    if (sfMouse_isButtonPressed(sfMouseLeft) && all->pause == 0
    && all->endgame != 2) {
        if (click_position.x >= card_archery.x &&
        click_position.x <= card_archery.x + 102 &&
        click_position.y >= card_archery.y &&
        click_position.y <= card_archery.y + 119 && all->drag == 2)
            all->drag = 1;
    }
    if (sfEvtMouseButtonReleased == all->window.event.type && all->drag == 1) {
        all->drag = 10;
    }
}

void if_drag_and_drop_canon(all_t *all)
{
    sfVector2i click_position = sfMouse_getPositionRenderWindow(WINDOW);
    sfVector2f card_canon =
    sfSprite_getPosition(all->can_card.sprite);
    sfVector2f site_position;
    int line = 0;

    if (sfMouse_isButtonPressed(sfMouseLeft) && all->pause == 0
    && all->endgame != 2) {
        if (click_position.x >= card_canon.x &&
        click_position.x <= card_canon.x + 102 &&
        click_position.y >= card_canon.y &&
        click_position.y <= card_canon.y + 119 && all->drag == 2)
            all->drag = 3;
    }
    if (all->window.event.type == sfEvtMouseButtonReleased && all->drag == 3)
        all->drag = 30;
}

void if_drag_and_drop_tesla(all_t *all)
{
    sfVector2i click_position = sfMouse_getPositionRenderWindow(WINDOW);
    sfVector2f card_tesla =
    sfSprite_getPosition(all->tes_card.sprite);
    sfVector2f site_position;
    int line = 0;

    if (sfMouse_isButtonPressed(sfMouseLeft) && all->pause == 0
    && all->endgame != 2) {
        if (click_position.x >= card_tesla.x &&
        click_position.x <= card_tesla.x + 102 &&
        click_position.y >= card_tesla.y &&
        click_position.y <= card_tesla.y + 119 && all->drag == 2)
            all->drag = 7;
    }
    if (all->window.event.type == sfEvtMouseButtonReleased && all->drag == 7)
        all->drag = 70;
}

void if_drag_and_drop_wizard(all_t *all)
{
    sfVector2i click_position = sfMouse_getPositionRenderWindow(WINDOW);
    sfVector2f card_wizard =
    sfSprite_getPosition(all->wiz_card.sprite);

    if (sfMouse_isButtonPressed(sfMouseLeft) && all->pause == 0
    && all->endgame != 2) {
        if (click_position.x >= card_wizard.x &&
        click_position.x <= card_wizard.x + 102 &&
        click_position.y >= card_wizard.y &&
        click_position.y <= card_wizard.y + 119 && all->drag == 2)
            all->drag = 5;
    }
    if (sfEvtMouseButtonReleased == all->window.event.type && all->drag == 5) {
        all->drag = 50;
    }
}
