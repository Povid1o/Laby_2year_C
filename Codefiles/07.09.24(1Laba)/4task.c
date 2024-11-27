//
//  main.c
//  4task
//
//  Created by Никита Башлыков on 07.09.2024.
//

#include <stdio.h>

int main() {
    double radius, diameter, circumference, area;
    const double pi = 3.14159;

    printf("Введите радиус: ");
    scanf("%lf", &radius);

    diameter = 2 * radius;
    circumference = 2 * pi * radius;
    area = pi * radius * radius;

    printf("Диаметр: %f\n", diameter);
    printf("Длина окружности: %f\n", circumference);
    printf("Площадь: %f\n", area);

    return 0;
}
