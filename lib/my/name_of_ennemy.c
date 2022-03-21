/*
** EPITECH PROJECT, 2022
** B-MUL-200-RUN-2-1-mydefender-florian.etheve
** File description:
** name_of_ennemy
*/

#include "defender.h"

int random_number(void)
{
    int fd = open("/dev/urandom", O_RDONLY);
    int number = 0;

    if (fd == -1) {
        close(fd);
        return (number);
    }
    read(fd, &number, 4);
    close(fd);
    return (number);
}

char *name_of_ennemy(void)
{
    srand(random_number());
    int nb = rand() % 6;
    char *name[6] = {"M4rv1n_42", "Bigsm0k3", "Dark_Pome", "Mathusion",
    "Je te refuse","Bigananas"};
    return (name[nb]);
}
