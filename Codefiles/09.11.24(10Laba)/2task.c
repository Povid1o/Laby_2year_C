//
//  main.c
//  2task(10Laba)
//
//  Created by Никита Башлыков on 09.11.2024.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char title[100];
    char author[50];
    int year;
    int is_available;
} Book;

void search_book(Book *books, int count) {
    char search_title[100];
    printf("Введите название книги для поиска: ");
    getchar(); // Очистка буфера
    fgets(search_title, sizeof(search_title), stdin);
    search_title[strcspn(search_title, "\n")] = '\0';

    for (int i = 0; i < count; i++) {
        if (strcmp(books[i].title, search_title) == 0) {
            printf("Книга найдена:\n");
            printf("Название: %s\n", books[i].title);
            printf("Автор: %s\n", books[i].author);
            printf("Год издания: %d\n", books[i].year);
            printf("Статус: %s\n", books[i].is_available ? "Доступна" : "Занята");
            return;
        }
    }
    printf("Книга не найдена.\n");
}

int main() {
    int count;

    printf("Введите количество книг: ");
    scanf("%d", &count);

    Book *books = (Book *)malloc(count * sizeof(Book));
    if (books == NULL) {
        printf("Ошибка выделения памяти.\n");
        return 1;
    }

    for (int i = 0; i < count; i++) {
        printf("\nВведите информацию о книге %d:\n", i + 1);
        printf("Название: ");
        getchar(); // Очистка буфера
        fgets(books[i].title, sizeof(books[i].title), stdin);
        books[i].title[strcspn(books[i].title, "\n")] = '\0';

        printf("Автор: ");
        fgets(books[i].author, sizeof(books[i].author), stdin);
        books[i].author[strcspn(books[i].author, "\n")] = '\0';

        printf("Год издания: ");
        scanf("%d", &books[i].year);

        printf("Статус доступности (1 - доступна, 0 - занята): ");
        scanf("%d", &books[i].is_available);
    }

    search_book(books, count);

    free(books);

    return 0;
}
