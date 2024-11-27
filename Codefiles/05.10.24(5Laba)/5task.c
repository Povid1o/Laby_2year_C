//
//  main.c
//  5task(5Laba)
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
    int max_sum = 0;
    int max_top = 0, max_left = 0;
    int submatrix_size = 3;

    srand(time(NULL));

    printf("Исходная матрица 10x20:\n");
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            matrix[i][j] = rand() % 50 - 25;
            printf("%4d ", matrix[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i <= ROWS - submatrix_size; i++) {
        for (int j = 0; j <= COLS - submatrix_size; j++) {
            int current_sum = 0;
            for (int x = 0; x < submatrix_size; x++) {
                for (int y = 0; y < submatrix_size; y++) {
                    current_sum += matrix[i + x][j + y];
                }
            }
            if (current_sum > max_sum) {
                max_sum = current_sum;
                max_top = i;
                max_left = j;
            }
        }
    }

    printf("\nПодматрица 3x3 с максимальной суммой элементов (%d):\n", max_sum);
    for (int i = max_top; i < max_top + submatrix_size; i++) {
        for (int j = max_left; j < max_left + submatrix_size; j++) {
            printf("%4d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
