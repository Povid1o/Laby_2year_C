//
//  main.c
//  5task(9Laba)
//
//  Created by Никита Башлыков on 25.11.2024.
//

#include <stdio.h>

typedef struct {
    int hours;
    int minutes;
    int seconds;
} Time;

void printTime(Time t) {
    printf("Время: %02d:%02d:%02d\n", t.hours, t.minutes, t.seconds);
}

int main() {
    Time t;

    printf("Введите время (часы, минуты, секунды): ");
    scanf("%d %d %d", &t.hours, &t.minutes, &t.seconds);

    if (t.hours < 0 || t.hours > 23 || t.minutes < 0 || t.minutes > 59 || t.seconds < 0 || t.seconds > 59) {
        printf("Некорректное время.\n");
        return 1;
    }

    printTime(t);

    return 0;
}
