//
//  main.c
//  4task(6Laba)
//
//  Created by Никита Башлыков on 12.10.2024.
//

#include <stdio.h>
#include <stdlib.h>

int main() {
    int *list = NULL, size = 0, choice, index, value;

    while (1) {
        printf("\nМеню:\n");
        printf("1. Добавить элемент\n");
        printf("2. Удалить элемент\n");
        printf("3. Показать список\n");
        printf("4. Выход\n");
        printf("Ваш выбор: ");
        scanf("%d", &choice);

        if (choice == 4) break;

        switch (choice) {
            case 1:
                printf("Введите значение для добавления: ");
                scanf("%d", &value);
                list = (int *)realloc(list, (size + 1) * sizeof(int));
                if (list == NULL) {
                    printf("Ошибка выделения памяти.\n");
                    return 1;
                }
                list[size++] = value;
                break;

            case 2:
                if (size == 0) {
                    printf("Список пуст.\n");
                    break;
                }
                printf("Введите индекс элемента для удаления (0-%d): ", size - 1);
                scanf("%d", &index);
                if (index < 0 || index >= size) {
                    printf("Некорректный индекс.\n");
                    break;
                }
                for (int i = index; i < size - 1; i++) {
                    list[i] = list[i + 1];
                }
                size--;
                list = (int *)realloc(list, size * sizeof(int));
                break;

            case 3:
                if (size == 0) {
                    printf("Список пуст.\n");
                } else {
                    printf("Список: ");
                    for (int i = 0; i < size; i++) {
                        printf("%d ", list[i]);
                    }
                    printf("\n");
                }
                break;

            default:
                printf("Некорректный выбор.\n");
        }
    }

    free(list);
    return 0;
}
