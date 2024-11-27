//
//  main.c
//  2task(9Laba)
//
//  Created by Никита Башлыков on 02.11.2024.
//

#include <stdio.h>

typedef enum {
    MONDAY = 1,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY,
    SUNDAY
} Days;

int main() {
    int input;
    printf("Введите день недели (1 - Понедельник, ..., 7 - Воскресенье): ");
    scanf("%d", &input);

    switch (input) {
        case MONDAY:
            printf("День недели: Понедельник (Рабочий день)\n");
            break;
        case TUESDAY:
            printf("День недели: Вторник (Рабочий день)\n");
            break;
        case WEDNESDAY:
            printf("День недели: Среда (Рабочий день)\n");
            break;
        case THURSDAY:
            printf("День недели: Четверг (Рабочий день)\n");
            break;
        case FRIDAY:
            printf("День недели: Пятница (Рабочий день)\n");
            break;
        case SATURDAY:
            printf("День недели: Суббота (Выходной)\n");
            break;
        case SUNDAY:
            printf("День недели: Воскресенье (Выходной)\n");
            break;
        default:
            printf("Некорректный ввод. Пожалуйста, введите число от 1 до 7.\n");
    }

    return 0;
}
