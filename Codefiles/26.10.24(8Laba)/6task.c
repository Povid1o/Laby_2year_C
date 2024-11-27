//
//  main.c
//  6task(8Laba)
//
//  Created by Никита Башлыков on 26.10.2024.
//

#include <stdio.h>
#include <string.h>

int is_palindrome(char *str, int left, int right) {
    if (left >= right)
        return 1;
    if (str[left] != str[right])
        return 0;
    return is_palindrome(str, left + 1, right - 1);
}

int main() {
    char str[101];
    printf("Введите строку (длина строки ≤ 100): ");
    fgets(str, sizeof(str), stdin);

    size_t len = strlen(str);
    if (str[len - 1] == '\n')
        str[len - 1] = '\0';

    if (is_palindrome(str, 0, strlen(str) - 1)) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}
