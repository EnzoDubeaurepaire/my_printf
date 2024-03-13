/*
** EPITECH PROJECT, 2023
** initialize_laby
** File description:
** Placeholder
*/

#include "laby.h"
#include <stdlib.h>
#include <time.h>

cell_t **initialize_laby(int size)
{
    cell_t **map;

    map = malloc(sizeof(cell_t *) * (size + 1));
    for (int i = 0; i <= size; i++) {
        map[i] = malloc(sizeof(cell_t) * size);
        for (int j = 0; j < size; j++) {
            map[i][j].top = 1;
            map[i][j].bot = 1;
            map[i][j].left = 1;
            map[i][j].right = 1;
            map[i][j].visited = 0;
        }
    }
    map[size] = 0;
    return map;
}
