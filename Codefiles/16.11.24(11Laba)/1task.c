//
//  main.c
//  1task(11Laba)
//
//  Created by Никита Башлыков on 16.11.2024.
//

#include <stdio.h>

int main() {
    FILE *file;
    char text[256];

    printf("Введите строку для записи в файл: ");
    fgets(text, sizeof(text), stdin);

    file = fopen("output.txt", "w");
    if (file == NULL) {
        printf("Ошибка открытия файла.\n");
        return 1;
    }

    fprintf(file, "%s", text);
    fclose(file);

    printf("Строка успешно записана в файл output.txt\n");
    return 0;
}
