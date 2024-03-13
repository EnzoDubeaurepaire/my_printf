#include "laby.h"
#include <stdlib.h>
#include <time.h>

#include "../include/my.h"
#include "laby.h"
int my_printf_laby(va_list list, params_t *params)
{
    cell_t **map = initialize_laby(20);
    int count = 0;
    int nb = va_arg(list, int);

    srand(time(NULL));
    generate_laby(map, nb, 0, 0);
    count += my_print_laby(nb, map);
    return count;
}
