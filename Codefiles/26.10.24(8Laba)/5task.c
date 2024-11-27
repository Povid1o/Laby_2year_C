//
//  main.c
//  5task(8Laba)
//
//  Created by Никита Башлыков on 26.10.2024.
//

#include <stdio.h>

int count_digits(int n) {
    if (n == 0)
        return 0;
    return 1 + count_digits(n / 10);
}

int main() {
    int n;
    printf("Введите число (0 ≤ n ≤ 2,147,483,647): ");
    scanf("%d", &n);

    if (n == 0) {
        printf("Количество цифр: 1\n");
        return 0;
    }

    printf("Количество цифр: %d\n", count_digits(n));
    return 0;
}
