//
//  main.c
//  1task(7Laba)
//
//  Created by Никита Башлыков on 19.10.2024.
//

#include <stdio.h>

int sum(int a, int b) {
    return a + b;
}

int main() {
    int num1, num2;

    printf("Введите первое число: ");
    scanf("%d", &num1);
    printf("Введите второе число: ");
    scanf("%d", &num2);

    printf("Сумма: %d\n", sum(num1, num2));
    return 0;
}
