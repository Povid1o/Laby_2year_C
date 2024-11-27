//
//  main.c
//  8task(8Laba)
//
//  Created by Никита Башлыков on 26.10.2024.
//

#include <stdio.h>

int sum_array(int *arr, int size) {
    if (size == 0)
        return 0;
    return arr[size - 1] + sum_array(arr, size - 1);
}

int main() {
    int m;
    printf("Введите количество элементов массива (1 ≤ m ≤ 100): ");
    scanf("%d", &m);

    if (m < 1 || m > 100) {
        printf("Количество элементов вне диапазона.\n");
        return 1;
    }

    int arr[m];
    printf("Введите %d элементов массива:\n", m);
    for (int i = 0; i < m; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Сумма элементов массива: %d\n", sum_array(arr, m));
    return 0;
}
