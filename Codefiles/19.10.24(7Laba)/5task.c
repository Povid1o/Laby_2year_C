//
//  main.c
//  5task(7Laba)
//
//  Created by Никита Башлыков on 25.11.2024.
//

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int is_prime(int n) {
    if (n < 2)
        return 0;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

int* filter_array(int *arr, int size, int (*condition)(int), int *new_size) {
    int *result = (int *)malloc(size * sizeof(int));
    if (result == NULL) {
        printf("Ошибка выделения памяти.\n");
        exit(1);
    }

    *new_size = 0;
    for (int i = 0; i < size; i++) {
        if (!condition(arr[i])) {
            result[*new_size] = arr[i];
            (*new_size)++;
        }
    }

    return result;
}

int main() {
    int arr[1001];
    int size = 1001;

    for (int i = 0; i < size; i++) {
        arr[i] = i;
    }

    int new_size;
    int *filtered_array = filter_array(arr, size, is_prime, &new_size);

    printf("Массив после фильтрации (без простых чисел):\n");
    for (int i = 0; i < new_size; i++) {
        printf("%d ", filtered_array[i]);
    }
    printf("\n");

    free(filtered_array);
    return 0;
}
