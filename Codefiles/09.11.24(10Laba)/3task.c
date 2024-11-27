//
//  main.c
//  3task(10Laba)
//
//  Created by Никита Башлыков on 09.11.2024.
//

#include <stdio.h>

typedef union {
    float temperature;
    float humidity;
    float wind_speed;
} Measurement;

int main() {
    Measurement m;
    int choice;

    printf("Выберите тип измерения:\n");
    printf("1 - Температура\n");
    printf("2 - Влажность\n");
    printf("3 - Скорость ветра\n");
    printf("Ваш выбор: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Введите значение температуры: ");
            scanf("%f", &m.temperature);
            printf("Выбранное измерение: Температура = %.2f°C\n", m.temperature);
            break;
        case 2:
            printf("Введите значение влажности: ");
            scanf("%f", &m.humidity);
            printf("Выбранное измерение: Влажность = %.2f%%\n", m.humidity);
            break;
        case 3:
            printf("Введите значение скорости ветра: ");
            scanf("%f", &m.wind_speed);
            printf("Выбранное измерение: Скорость ветра = %.2f м/с\n", m.wind_speed);
            break;
        default:
            printf("Некорректный выбор. Пожалуйста, введите число от 1 до 3.\n");
    }

    return 0;
}
