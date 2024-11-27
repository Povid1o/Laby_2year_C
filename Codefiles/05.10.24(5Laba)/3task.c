//
//  main.c
//  3task(5Laba)
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
    int max_row_index = -1;

    srand(time(NULL));

    printf("Матрица 10x20:\n");
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            matrix[i][j] = rand() % 201 - 100;
            printf("%4d ", matrix[i][j]);
        }
        printf("\n");
    }


    for (int i = 0; i < ROWS; i++) {
        int positive_count = 0;
        int row_sum = 0;

        for (int j = 0; j < COLS; j++) {
            if (matrix[i][j] > 0) {
                positive_count++;
            }
            row_sum += matrix[i][j];
        }

        
        if (positive_count > 2 && row_sum > max_sum) {
            max_sum = row_sum;
            max_row_index = i;
        }
    }

    
    if (max_row_index != -1) {
        printf("\nСтрока с более чем двумя положительными элементами и максимальной суммой:\n");
        printf("Номер строки: %d (индексация с 0)\n", max_row_index);
        printf("Сумма элементов строки: %d\n", max_sum);
    } else {
        printf("\nНет строки с более чем двумя положительными элементами.\n");
    }

    return 0;
}
