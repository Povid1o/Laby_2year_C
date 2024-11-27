//
//  main.c
//  6task(11Laba)
//
//  Created by Никита Башлыков on 16.11.2024.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    FILE *students_file, *attendance_file;
    char student_name[100];
    char attendance_status;

    students_file = fopen("students.txt", "r");
    if (students_file == NULL) {
        printf("Ошибка открытия файла students.txt.\n");
        return 1;
    }

    attendance_file = fopen("attendance.txt", "w");
    if (attendance_file == NULL) {
        printf("Ошибка открытия файла attendance.txt.\n");
        fclose(students_file);
        return 1;
    }

    while (fgets(student_name, sizeof(student_name), students_file)) {
        // Удаляем символ новой строки
        student_name[strcspn(student_name, "\n")] = '\0';

        printf("Присутствует ли студент %s? (y/n): ", student_name);
        scanf(" %c", &attendance_status);

        fprintf(attendance_file, "%s: %s\n", student_name,
                (attendance_status == 'y' || attendance_status == 'Y') ? "Присутствует" : "Отсутствует");
    }

    fclose(students_file);
    fclose(attendance_file);

    printf("Учёт посещаемости записан в файл attendance.txt.\n");
    return 0;
}
