//
//  main.c
//  3task(7Laba)
//
//  Created by Никита Башлыков on 19.10.2024.
//
// P.S. Так и не разобрался, как в икскоде лепить несколько файлов в один сишный проект, всегда выкидывает ошибку, поэтому так

#include <stdio.h>

int sum(int a, int b) {
    return a + b;
}

void reverse_array(int *arr, int size) {
    for (int i = 0; i < size / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[size - i - 1];
        arr[size - i - 1] = temp;
    }
}

int main() {
    int choice;

    printf("Выберите действие:\n");
    printf("1. Сложить два числа\n");
    printf("2. Развернуть массив\n");
    printf("Ваш выбор: ");
    scanf("%d", &choice);

    if (choice == 1) {
        int a, b;
        printf("Введите два числа: ");
        scanf("%d %d", &a, &b);
        printf("Сумма: %d\n", sum(a, b));
    } else if (choice == 2) {
        int n;
        printf("Введите количество элементов массива: ");
        scanf("%d", &n);

        int arr[n];
        printf("Введите %d элементов массива:\n", n);
        for (int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }

        reverse_array(arr, n);

        printf("Развернутый массив:\n");
        for (int i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    } else {
        printf("Некорректный выбор.\n");
    }

    return 0;
}
