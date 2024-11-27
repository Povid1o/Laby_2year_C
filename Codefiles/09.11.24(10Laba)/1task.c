//
//  main.c
//  1task(10Laba)
//
//  Created by Никита Башлыков on 09.11.2024.
//

#include <stdio.h>
#include <string.h>

typedef struct {
    char name[50];
    int age;
    float average_grade;
} Student;

int main() {
    Student student;

    printf("Введите имя студента: ");
    fgets(student.name, sizeof(student.name), stdin);
    student.name[strcspn(student.name, "\n")] = '\0'; 

    printf("Введите возраст студента: ");
    scanf("%d", &student.age);

    printf("Введите средний балл студента: ");
    scanf("%f", &student.average_grade);

    printf("\nИнформация о студенте:\n");
    printf("Имя: %s\n", student.name);
    printf("Возраст: %d\n", student.age);
    printf("Средний балл: %.2f\n", student.average_grade);

    return 0;
}
