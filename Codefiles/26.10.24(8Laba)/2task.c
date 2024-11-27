//
//  main.c
//  2task(8Laba)
//
//  Created by Никита Башлыков on 26.10.2024.
//

#include <stdio.h>

int fibonacci(int n) {
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;
    printf("Введите число (0 ≤ n ≤ 30): ");
    scanf("%d", &n);

    if (n < 0 || n > 30) {
        printf("Число вне диапазона.\n");
        return 1;
    }

    printf("%d-е число Фибоначчи: %d\n", n, fibonacci(n));
    return 0;
}
