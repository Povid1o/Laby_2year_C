//
//  main.c
//  4task(8Laba)
//
//  Created by Никита Башлыков on 26.10.2024.
//

#include <stdio.h>
#include <string.h>

void reverse_string(char *str, int index) {
    if (index < 0)
        return;
    putchar(str[index]);
    reverse_string(str, index - 1);
}

int main() {
    char str[101];
    printf("Введите строку (длина строки ≤ 100): ");
    fgets(str, sizeof(str), stdin);

    // Убираем символ новой строки, если он есть
    size_t len = strlen(str);
    if (str[len - 1] == '\n')
        str[len - 1] = '\0';

    printf("Обратная строка: ");
    reverse_string(str, strlen(str) - 1);
    printf("\n");

    return 0;
}
