//
//  main.c
//  2task(5Laba)
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
    int sum_of_max = 0;

    // Инициализация генератора случайных чисел
    srand(time(NULL));

    
    printf("Матрица 10x20:\n");
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            matrix[i][j] = rand() % 100; // Случайные числа от 0 до 99
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    
    for (int i = 0; i < ROWS; i++) {
        int max_in_row = matrix[i][0];
        for (int j = 1; j < COLS; j++) {
            if (matrix[i][j] > max_in_row) {
                max_in_row = matrix[i][j];
            }
        }
        sum_of_max += max_in_row;
    }
    

    printf("\nСумма максимальных элементов каждой строки: %d\n", sum_of_max);

    return 0;
}
