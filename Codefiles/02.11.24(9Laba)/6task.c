//
//  main.c
//  6task(9Laba)
//
//  Created by Никита Башлыков on 02.11.2024.
//

#include <stdio.h>

typedef int (*Operation)(int, int);

int add(int a, int b) {
    return a + b;
}

int multiply(int a, int b) {
    return a * b;
}

int main() {
    int choice, a, b;
    Operation op;

    printf("Выберите операцию:\n");
    printf("1. Сложение\n");
    printf("2. Умножение\n");
    printf("Ваш выбор: ");
    scanf("%d", &choice);

    printf("Введите два числа: ");
    scanf("%d %d", &a, &b);

    if (choice == 1) {
        op = add;
    } else if (choice == 2) {
        op = multiply;
    } else {
        printf("Некорректный выбор.\n");
        return 1;
    }

    printf("Результат: %d\n", op(a, b));

    return 0;
}
