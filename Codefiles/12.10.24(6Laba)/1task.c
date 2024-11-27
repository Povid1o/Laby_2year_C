//
//  main.c
//  1task(6Laba)
//
//  Created by Никита Башлыков on 12.10.2024.
//

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    int *array;
    int sum = 0;

    printf("Введите размер массива: ");
    scanf("%d", &n);

    array = (int *)malloc(n * sizeof(int));
    if (array == NULL) {
        printf("Ошибка выделения памяти.\n");
        return 1;
    }

    printf("Введите %d элементов массива:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
        sum += array[i];
    }

    printf("Сумма элементов массива: %d\n", sum);

    free(array);
    return 0;
}
