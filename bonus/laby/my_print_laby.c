/*
** EPITECH PROJECT, 2023
** my_print_laby
** File description:
** Placeholder
*/

#include "laby.h"
#include <unistd.h>

int my_print_laby(int size, cell_t **map)
{
    int count = 0;

    count += write(1, "#", 1);
    for (int j = 0; j < size; j++) {
        count += (map[0][0].top == 1) ? write(1, "####", 4) : write(1, "    ", 4);
        count += (j != size - 1) ? write(1, "##", 2) : write(1, "#", 1);
    }
    write(1, "\n", 1);
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            count += (map[i][j].left == 1) ? write(1, "#    ", 5) : write(1, "     ", 5);
            count += (map[i][j].right == 1) ? write(1, "#", 1) : write(1, " ", 1);
        }
        write(1, "\n", 1);
        for (int j = 0; j < size; j++) {
            count += (map[i][j].left == 1) ? write(1, "#    ", 5) : write(1, "     ", 5);
            count += (map[i][j].right == 1) ? write(1, "#", 1) : write(1, " ", 1);
        }
        write(1, "\n", 1);
        for (int j = 0; j < size; j++) {
            count += (map[i][j].bot == 1) ? write(1, "#####", 5) : write(1, "#     ", 5);
            count += (j != size - 1) ? write(1, "#", 1) : 0;
        }
        write(1, "#\n", 2);
    }
    return count;
}
