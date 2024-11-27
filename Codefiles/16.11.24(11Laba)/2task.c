//
//  main.c
//  2task(11Laba)
//
//  Created by Никита Башлыков on 16.11.2024.
//

#include <stdio.h>

int main() {
    FILE *file;
    char line[256];
    int line_count = 0;

    file = fopen("input.txt", "r");
    if (file == NULL) {
        printf("Ошибка открытия файла.\n");
        return 1;
    }

    while (fgets(line, sizeof(line), file)) {
        line_count++;
    }

    fclose(file);

    printf("Количество строк в файле: %d\n", line_count);
    return 0;
}
