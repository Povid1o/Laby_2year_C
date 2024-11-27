//
//  main.c
//  4task(11Laba)
//
//  Created by Никита Башлыков on 16.11.2024.
//

#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *file;
    char ch;
    int word_count = 0;
    int in_word = 0;

    file = fopen("text.txt", "r");
    if (file == NULL) {
        printf("Ошибка открытия файла.\n");
        return 1;
    }

    while ((ch = fgetc(file)) != EOF) {
        if (isspace(ch)) {
            if (in_word) {
                word_count++;
                in_word = 0;
            }
        } else {
            in_word = 1;
        }
    }

    if (in_word) {
        word_count++;
    }

    fclose(file);

    printf("Количество слов в файле: %d\n", word_count);
    return 0;
}
