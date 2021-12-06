#include <string.h>
#include <stdbool.h>
#include <stdio.h>

#define ARRAY_SIZE(array) sizeof(array) / sizeof(array[0])

void print_array(int array[], size_t array_size) {
    printf("{");
    for (size_t i = 0; i < array_size; i++) {
        printf("%d, ", array[i]);
    }
    printf("}\n");
} 

void swap(int *x, int *y) {
    int tmp = *x;
    *x = *y;
    *y = tmp;
}

void bubblesort(int array[], size_t array_size) {

    bool sorted = false;
    size_t max_next = array_size - 2;;

    while (!sorted) {
        sorted = true;

        for (size_t i = 0, max = max_next; i <= max; i++) {
            if (array[i] > array[i + 1]) {
                swap(&array[i], &array[i + 1]);
                max_next = i;
                sorted = false;
            }
        }
    }
}

int main() {    

    int array[] = {5, 4, 3, 2, 1};
    size_t array_size = ARRAY_SIZE(array);
    print_array(array, array_size);
    bubblesort(array, array_size);
    print_array(array, array_size);


    return 0;
}