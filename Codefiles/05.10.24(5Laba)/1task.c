//
//  main.c
//  1task(5Laba)
//
//  Created by Никита Башлыков on 05.10.2024.
//

#include <stdio.h>

#define SIZE 20

int main() {
    int matrix[SIZE][SIZE] = {0};

    for (int i = 0; i < SIZE; i++) {
        matrix[i][i] = 1; // Главная диагональ
        matrix[i][SIZE - i - 1] = 1; // Побочная диагональ
    }

    
    printf("Матрица 20x20 с единицами по диагоналям:\n");
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
