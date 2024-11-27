//
//  main.c
//  1task(8Laba)
//
//  Created by Никита Башлыков on 26.10.2024.
//

#include <stdio.h>

int factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    return n * factorial(n - 1);
}

int main() {
    int n;
    printf("Введите число (0 ≤ n ≤ 12): ");
    scanf("%d", &n);

    if (n < 0 || n > 12) {
        printf("Число вне диапазона.\n");
        return 1;
    }

    printf("Факториал числа %d: %d\n", n, factorial(n));
    return 0;
}
