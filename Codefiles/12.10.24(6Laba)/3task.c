//
//  main.c
//  3task(6Laba)
//
//  Created by Никита Башлыков on 12.10.2024.
//

#include <stdio.h>
#include <stdlib.h>

int main() {
    int r1, c1, r2, c2, **mat1, **mat2, **result;

    printf("Введите размеры первой матрицы (строки и столбцы): ");
    scanf("%d %d", &r1, &c1);
    printf("Введите размеры второй матрицы (строки и столбцы): ");
    scanf("%d %d", &r2, &c2);

    if (c1 != r2) {
        printf("Умножение невозможно: число столбцов первой матрицы не равно числу строк второй.\n");
        return 1;
    }

    mat1 = (int **)malloc(r1 * sizeof(int *));
    mat2 = (int **)malloc(r2 * sizeof(int *));
    result = (int **)malloc(r1 * sizeof(int *));

    for (int i = 0; i < r1; i++) mat1[i] = (int *)malloc(c1 * sizeof(int));
    for (int i = 0; i < r2; i++) mat2[i] = (int *)malloc(c2 * sizeof(int));
    for (int i = 0; i < r1; i++) result[i] = (int *)malloc(c2 * sizeof(int));

    printf("Введите элементы первой матрицы:\n");
    for (int i = 0; i < r1; i++)
        for (int j = 0; j < c1; j++)
            scanf("%d", &mat1[i][j]);

    printf("Введите элементы второй матрицы:\n");
    for (int i = 0; i < r2; i++)
        for (int j = 0; j < c2; j++)
            scanf("%d", &mat2[i][j]);

    for (int i = 0; i < r1; i++)
        for (int j = 0; j < c2; j++) {
            result[i][j] = 0;
            for (int k = 0; k < c1; k++)
                result[i][j] += mat1[i][k] * mat2[k][j];
        }

    printf("Результирующая матрица:\n");
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++)
            printf("%4d ", result[i][j]);
        printf("\n");
    }

    for (int i = 0; i < r1; i++) free(mat1[i]);
    for (int i = 0; i < r2; i++) free(mat2[i]);
    for (int i = 0; i < r1; i++) free(result[i]);

    free(mat1);
    free(mat2);
    free(result);

    return 0;
}
