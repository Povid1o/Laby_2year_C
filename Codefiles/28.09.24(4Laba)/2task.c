//
//  main.c
//  2task
//
//  Created by Никита Башлыков on 28.09.2024.
//

#include <stdio.h>

void insert_element(int arr[], int n, int index, int value, int result[]) {
    for (int i = 0; i < index; i++) {
        result[i] = arr[i];
    }
    result[index] = value;
    for (int i = index + 1; i < n + 1; i++) {
        result[i] = arr[i - 1];
    }
}

void delete_element(int arr[], int n, int index, int result[]) {
    for (int i = 0; i < index; i++) {
        result[i] = arr[i];
    }
    for (int i = index; i < n - 1; i++) {
        result[i] = arr[i + 1];
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int arr2[n + 1];
    int arr3[n - 1];

    printf("Исходный массив: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    insert_element(arr, n, 2, 10, arr2);
    printf("Массив после вставки: ");
    for (int i = 0; i < n + 1; i++) {
        printf("%d ", arr2[i]);
    }
    printf("\n");

    delete_element(arr, n, 2, arr3);
    printf("Массив после удаления: ");
    for (int i = 0; i < n - 1; i++) {
        printf("%d ", arr3[i]);
    }
    printf("\n");

    return 0;
}
