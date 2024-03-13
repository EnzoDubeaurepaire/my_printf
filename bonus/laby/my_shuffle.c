/*
** EPITECH PROJECT, 2023
** my_shuffle
** File description:
** Placeholde
*/

#include <stdlib.h>
#include <time.h>

void my_shuffle(char *arr, int size)
{
    char tmp;
    int r;

    for (int i = 0; i < size; i++) {
        tmp = arr[i];
        r = rand() % size;
        arr[i] = arr[r];
        arr[r] = tmp;
    }
}
