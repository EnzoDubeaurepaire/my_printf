/*
** EPITECH PROJECT, 2023
** laby.h
** File description:
** Placeholder
*/

#ifndef LABY_H_
    #define LABY_H_

typedef struct cell {
    int top;
    int bot;
    int left;
    int right;
    int visited;
} cell_t;
void generate_laby(cell_t **map, int size, int line, int collumn);
cell_t **initialize_laby(int size);
int my_print_laby(int size, cell_t **map);
void my_shuffle(char *arr, int size);
#endif
