//
//  main.c
//  4task(7Laba)
//
//  Created by Никита Башлыков on 19.10.2024.
//

#include <stdio.h>

// Функции для управления климат-контролем
void heater() {
    printf("Обогреватель включен.\n");
}

void air_conditioner() {
    printf("Кондиционер включен.\n");
}

void maintain_temperature() {
    printf("Поддержание текущей температуры.\n");
}

void turn_off() {
    printf("Система климат-контроля выключена.\n");
}

int main() {
    // Массив указателей на функции
    void (*modes[])() = {heater, air_conditioner, maintain_temperature, turn_off};
    int choice;

    do {
        printf("\nВыберите режим:\n");
        printf("1. Включить обогреватель\n");
        printf("2. Включить кондиционер\n");
        printf("3. Поддерживать текущую температуру\n");
        printf("4. Выключить систему\n");
        printf("Ваш выбор: ");
        scanf("%d", &choice);

        if (choice >= 1 && choice <= 4) {
            modes[choice - 1](); // Вызов функции через указатель
        } else {
            printf("Некорректный выбор. Попробуйте снова.\n");
        }
    } while (choice != 4);

    return 0;
}
