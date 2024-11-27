//
//  main.c
//  1task(9Laba)
//
//  Created by Никита Башлыков on 02.11.2024.
//

#include <stdio.h>

typedef enum {
    POOR = 1,
    AVERAGE,
    GOOD,
    EXCELLENT
} ServiceRating;

int main() {
    int input;
    printf("Введите оценку качества обслуживания (1 - POOR, 2 - AVERAGE, 3 - GOOD, 4 - EXCELLENT): ");
    scanf("%d", &input);

    switch (input) {
        case POOR:
            printf("Оценка: POOR\n");
            break;
        case AVERAGE:
            printf("Оценка: AVERAGE\n");
            break;
        case GOOD:
            printf("Оценка: GOOD\n");
            break;
        case EXCELLENT:
            printf("Оценка: EXCELLENT\n");
            break;
        default:
            printf("Некорректный ввод. Пожалуйста, введите число от 1 до 4.\n");
    }

    return 0;
}
