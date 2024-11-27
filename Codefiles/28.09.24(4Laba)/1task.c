//
//  main.c
//  1task
//
//  Created by Никита Башлыков on 28.09.2024.
//

#include <stdio.h>

void copy_array(int n, int src[], int dest[]) {
    for (int i = 0; i < n; i++) {
        dest[i] = src[i];
    }
}

int main() {
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[3]; // destination array with different length 
    int n = sizeof(arr1) / sizeof(arr1[0]);
    
    printf("Исходный массив: ");
    for(int i=0; i<n; i++){
        printf("%d ", arr1[i]);
    }
    printf("\n"); 
    copy_array(n, arr1, arr2);
    printf("Копия массива: "); 
    for(int i=0; i<n; i++){
        printf("%d ", arr2[i]);
    }
    printf("\n");
    return 0;
}
