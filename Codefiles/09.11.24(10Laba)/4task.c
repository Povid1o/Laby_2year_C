//
//  main.c
//  4task(10Laba)
//
//  Created by Никита Башлыков on 09.11.2024.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char name[50];
    int id;
    int age;
    enum { MANAGER, ENGINEER, SALES } role;
    union {
        struct {
            int subordinates;
            int access_level;
        } manager;
        struct {
            char specialization[50];
            int projects_completed;
        } engineer;
        struct {
            float total_sales;
            float sales_target;
        } sales;
    } role_data;
} Employee;

void add_employee(Employee *e) {
    printf("\nВведите имя сотрудника: ");
    getchar();
    fgets(e->name, sizeof(e->name), stdin);
    e->name[strcspn(e->name, "\n")] = '\0';

    printf("Введите ID сотрудника: ");
    scanf("%d", &e->id);

    printf("Введите возраст сотрудника: ");
    scanf("%d", &e->age);

    printf("Выберите роль сотрудника (0 - Менеджер, 1 - Инженер, 2 - Специалист по продажам): ");
    scanf("%d", &e->role);

    switch (e->role) {
        case MANAGER:
            printf("Введите количество подчинённых: ");
            scanf("%d", &e->role_data.manager.subordinates);
            printf("Введите уровень доступа: ");
            scanf("%d", &e->role_data.manager.access_level);
            break;
        case ENGINEER:
            printf("Введите специализацию: ");
            getchar();
            fgets(e->role_data.engineer.specialization, sizeof(e->role_data.engineer.specialization), stdin);
            e->role_data.engineer.specialization[strcspn(e->role_data.engineer.specialization, "\n")] = '\0';
            printf("Введите количество завершённых проектов: ");
            scanf("%d", &e->role_data.engineer.projects_completed);
            break;
        case SALES:
            printf("Введите общий объём продаж: ");
            scanf("%f", &e->role_data.sales.total_sales);
            printf("Введите процент выполнения плана: ");
            scanf("%f", &e->role_data.sales.sales_target);
            break;
        default:
            printf("Некорректная роль.\n");
            break;
    }
}

void display_employee(const Employee *e) {
    printf("\nСотрудник ID: %d\n", e->id);
    printf("Имя: %s\n", e->name);
    printf("Возраст: %d\n", e->age);

    switch (e->role) {
        case MANAGER:
            printf("Роль: Менеджер\n");
            printf("Подчинённые: %d\n", e->role_data.manager.subordinates);
            printf("Уровень доступа: %d\n", e->role_data.manager.access_level);
            break;
        case ENGINEER:
            printf("Роль: Инженер\n");
            printf("Специализация: %s\n", e->role_data.engineer.specialization);
            printf("Завершённые проекты: %d\n", e->role_data.engineer.projects_completed);
            break;
        case SALES:
            printf("Роль: Специалист по продажам\n");
            printf("Общий объём продаж: %.2f\n", e->role_data.sales.total_sales);
            printf("Процент выполнения плана: %.2f\n", e->role_data.sales.sales_target);
            break;
        default:
            printf("Некорректная роль.\n");
            break;
    }
}

void search_employee(const Employee *employees, int count, int id) {
    for (int i = 0; i < count; i++) {
        if (employees[i].id == id) {
            display_employee(&employees[i]);
            return;
        }
    }
    printf("Сотрудник с ID %d не найден.\n", id);
}

void modify_role(Employee *e) {
    printf("\nИзменение роли сотрудника ID: %d\n", e->id);
    printf("Текущая роль: ");
    switch (e->role) {
        case MANAGER:
            printf("Менеджер\n");
            break;
        case ENGINEER:
            printf("Инженер\n");
            break;
        case SALES:
            printf("Специалист по продажам\n");
            break;
    }

    printf("Выберите новую роль (0 - Менеджер, 1 - Инженер, 2 - Специалист по продажам): ");
    scanf("%d", &e->role);
    add_employee(e); 
}

int main() {
    int count;
    printf("Введите количество сотрудников: ");
    scanf("%d", &count);

    Employee *employees = (Employee *)malloc(count * sizeof(Employee));
    if (employees == NULL) {
        printf("Ошибка выделения памяти.\n");
        return 1;
    }

    for (int i = 0; i < count; i++) {
        printf("\nДобавление сотрудника %d:\n", i + 1);
        add_employee(&employees[i]);
    }

    printf("\nСписок сотрудников:\n");
    for (int i = 0; i < count; i++) {
        display_employee(&employees[i]);
    }

    int search_id;
    printf("\nВведите ID для поиска сотрудника: ");
    scanf("%d", &search_id);
    search_employee(employees, count, search_id);

    int modify_id;
    printf("\nВведите ID сотрудника для изменения роли: ");
    scanf("%d", &modify_id);
    for (int i = 0; i < count; i++) {
        if (employees[i].id == modify_id) {
            modify_role(&employees[i]);
            break;
        }
    }

    free(employees);
    return 0;
}
