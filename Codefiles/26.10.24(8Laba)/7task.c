//
//  main.c
//  7task(8Laba)
//
//  Created by Никита Башлыков on 26.10.2024.
//

#include <stdio.h>

int power(int x, int n) {
    if (n == 0)
        return 1;
    return x * power(x, n - 1);
}

int main() {
    int x, n;
    printf("Введите основание (0 ≤ x ≤ 10): ");
    scanf("%d", &x);
    printf("Введите степень (0 ≤ n ≤ 10): ");
    scanf("%d", &n);

    if (x < 0 || x > 10 || n < 0 || n > 10) {
        printf("Числа вне диапазона.\n");
        return 1;
    }

    printf("%d^%d = %d\n", x, n, power(x, n));
    return 0;
}
