//
//  main.c
//  3task(9Laba)
//
//  Created by Никита Башлыков on 02.11.2024.
//

#include <stdio.h>

typedef enum {
    RED = 0,
    YELLOW,
    GREEN
} TrafficLight;

int main() {
    int input;
    printf("Введите состояние светофора (0 - RED, 1 - YELLOW, 2 - GREEN): ");
    scanf("%d", &input);

    switch (input) {
        case RED:
            printf("STOP\n");
            break;
        case YELLOW:
            printf("READY\n");
            break;
        case GREEN:
            printf("GO\n");
            break;
        default:
            printf("Некорректный ввод. Пожалуйста, введите число от 0 до 2.\n");
    }

    return 0;
}
