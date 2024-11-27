//
//  main.c
//  4task(9Laba)
//
//  Created by Никита Башлыков on 02.11.2024.
//

#include <stdio.h>

typedef struct {
    float x;
    float y;
} Point;

int main() {
    Point p;

    printf("Введите координаты точки (x и y): ");
    scanf("%f %f", &p.x, &p.y);

    printf("Координаты точки: (%.2f, %.2f)\n", p.x, p.y);

    return 0;
}
