//
//  main.c
//  4task(5Laba)
//
//  Created by Никита Башлыков on 05.10.2024.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROWS 10
#define COLS 20

int main() {
    int matrix[ROWS][COLS];
    int transposed[COLS][ROWS];

    srand(time(NULL));

    
    printf("Исходная матрица 10x20:\n");
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            matrix[i][j] = rand() % 100;
            printf("%4d ", matrix[i][j]);
        }
        printf("\n");
    }

    
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            transposed[j][i] = matrix[i][j];
        }
    }

    
    printf("\nТранспонированная матрица 20x10:\n");
    for (int i = 0; i < COLS; i++) {
        for (int j = 0; j < ROWS; j++) {
            printf("%4d ", transposed[i][j]);
        }
        printf("\n");
    }

    return 0;
}
