//
//  main.c
//  5task(6Laba)
//
//  Created by Никита Башлыков on 12.10.2024.
//

#include <stdio.h>
#include <stdlib.h>

int main() {
    int num_candidates, *votes, choice;

    printf("Введите количество кандидатов: ");
    scanf("%d", &num_candidates);

    votes = (int *)calloc(num_candidates, sizeof(int));
    if (votes == NULL) {
        printf("Ошибка выделения памяти.\n");
        return 1;
    }

    printf("Голосование началось! Введите номер кандидата (1-%d) для голосования.\n", num_candidates);
    printf("Для завершения голосования введите отрицательное число.\n");

    while (1) {
        printf("Ваш голос: ");
        scanf("%d", &choice);

        if (choice < 0) break;

        if (choice >= 1 && choice <= num_candidates) {
            votes[choice - 1]++;
        } else {
            printf("Неверный номер кандидата.\n");
        }
    }

    printf("\nРезультаты голосования:\n");
    for (int i = 0; i < num_candidates; i++) {
        printf("Кандидат %d: %d голос(ов)\n", i + 1, votes[i]);
    }

    free(votes);
    return 0;
}
