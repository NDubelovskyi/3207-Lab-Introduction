#include <stdio.h>
#include <stdlib.h>

char randchar() {
    int lower_bound = (int) 'A',
        upper_bound = (int) 'Z';

    return (char) ((rand() % (upper_bound - lower_bound + 1)) + lower_bound);
}