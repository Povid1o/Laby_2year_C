//
//  main.c
//  3task(8Laba)
//
//  Created by Никита Башлыков on 26.10.2024.
//

#include <stdio.h>

int sum_of_digits(int n) {
    if (n == 0)
        return 0;
    return n % 10 + sum_of_digits(n / 10);
}

int main() {
    int n;
    printf("Введите число (0 ≤ n ≤ 2,147,483,647): ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Число должно быть неотрицательным.\n");
        return 1;
    }

    printf("Сумма цифр числа %d: %d\n", n, sum_of_digits(n));
    return 0;
}
