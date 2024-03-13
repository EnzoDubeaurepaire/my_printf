/*
** EPITECH PROJECT, 2023
** generate_laby
** File description:
** Placeholder
*/

#include "laby.h"

void right(cell_t **map, int size, int line, int collumn)
{
    if (collumn + 1 >= size || map[line][collumn + 1].visited == 1)
        return;
    map[line][collumn].right = 0;
    map[line][collumn + 1].left = 0;
    generate_laby(map, size, line, collumn + 1);
}

void left(cell_t **map, int size, int line, int collumn)
{
    if (collumn - 1 < 0 || map[line][collumn - 1].visited == 1)
        return;
    map[line][collumn].left = 0;
    map[line][collumn - 1].right = 0;
    generate_laby(map, size, line, collumn - 1);
}

void bot(cell_t **map, int size, int line, int collumn)
{
    if (line + 1 >= size || map[line + 1][collumn].visited == 1)
        return;
    map[line][collumn].bot = 0;
    map[line + 1][collumn].top = 0;
    generate_laby(map, size, line + 1, collumn);
}

void top(cell_t **map, int size, int line, int collumn)
{
    if (line - 1 < 0 || map[line - 1][collumn].visited == 1)
        return;
    map[line][collumn].top = 0;
    map[line - 1][collumn].bot = 0;
    generate_laby(map, size, line - 1, collumn);
}

void generate_laby(cell_t **map, int size, int line, int collumn)
{
    char direction[5] = "0123\0";
    void (*direction_function[4])(cell_t **, int, int, int) = {&top, &bot,
        &left, &right};

    map[line][collumn].visited = 1;
    my_shuffle(direction, 4);
    direction_function[(int)direction[0] - 48](map, size, line, collumn);
    direction_function[(int)direction[1] - 48](map, size, line, collumn);
    direction_function[(int)direction[2] - 48](map, size, line, collumn);
    direction_function[(int)direction[3] - 48](map, size, line, collumn);
}
