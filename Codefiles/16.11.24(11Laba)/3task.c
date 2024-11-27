//
//  main.c
//  3task(11Laba)
//
//  Created by Никита Башлыков on 16.11.2024.
//

#include <stdio.h>

int main() {
    FILE *source, *destination;
    char ch;

    source = fopen("source.txt", "r");
    if (source == NULL) {
        printf("Ошибка открытия исходного файла.\n");
        return 1;
    }

    destination = fopen("destination.txt", "w");
    if (destination == NULL) {
        printf("Ошибка открытия целевого файла.\n");
        fclose(source);
        return 1;
    }

    while ((ch = fgetc(source)) != EOF) {
        fputc(ch, destination);
    }

    fclose(source);
    fclose(destination);

    printf("Содержимое файла source.txt успешно скопировано в destination.txt\n");
    return 0;
}
