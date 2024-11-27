//
//  main.c
//  5task(11Laba)
//
//  Created by Никита Башлыков on 16.11.2024.
//

#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *input, *output;
    char *content;
    long file_size;

    input = fopen("input.txt", "r");
    if (input == NULL) {
        printf("Ошибка открытия файла input.txt.\n");
        return 1;
    }

    fseek(input, 0, SEEK_END);
    file_size = ftell(input);
    rewind(input);

    content = (char *)malloc(file_size * sizeof(char));
    if (content == NULL) {
        printf("Ошибка выделения памяти.\n");
        fclose(input);
        return 1;
    }

    fread(content, sizeof(char), file_size, input);
    fclose(input);

    output = fopen("reversed.txt", "w");
    if (output == NULL) {
        printf("Ошибка открытия файла reversed.txt.\n");
        free(content);
        return 1;
    }

    for (long i = file_size - 1; i >= 0; i--) {
        fputc(content[i], output);
    }

    fclose(output);
    free(content);

    printf("Содержимое файла input.txt успешно реверсировано в файл reversed.txt.\n");
    return 0;
}
