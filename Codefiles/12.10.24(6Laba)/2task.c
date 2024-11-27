//
//  main.c
//  2task(6Laba)
//
//  Created by Никита Башлыков on 12.10.2024.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int rows, cols;
    int **matrix;

    printf("Введите количество строк (N): ");
    scanf("%d", &rows);
    printf("Введите количество столбцов (M): ");
    scanf("%d", &cols);

    // Выделяем память для массива указателей (строк)
    matrix = (int **)malloc(rows * sizeof(int *));
    if (matrix == NULL) {
        printf("Ошибка выделения памяти.\n");
        return 1;
    }

    // Выделяем память для каждого столбца
    for (int i = 0; i < rows; i++) {
        matrix[i] = (int *)malloc(cols * sizeof(int));
        if (matrix[i] == NULL) {
            printf("Ошибка выделения памяти.\n");
            return 1;
        }
    }

    srand(time(NULL));

    
    printf("Матрица %d x %d:\n", rows, cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            matrix[i][j] = rand() % 100;
            printf("%4d ", matrix[i][j]);
        }
        printf("\n");
    }

    // Освобождаем память
    for (int i = 0; i < rows; i++) {
        free(matrix[i]);
    }
    free(matrix);

    return 0;
}
