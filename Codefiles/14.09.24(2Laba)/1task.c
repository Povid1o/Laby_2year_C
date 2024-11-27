//
//  main.c
//  1task
//
//  Created by Никита Башлыков on 20.09.2024.
//

#include <stdio.h>
#include <limits.h>
#include <float.h>

int main() {
  // Целочисленное переполнение
  int a = INT_MAX;
  printf("Максимальное значение int: %d\n", a);
  printf("Максимальное значение int + 1: %d\n", a + 1); // переполнение

  // Переполнение с плавающей точкой
  float b = FLT_MAX;
  printf("Максимальное значение float: %f\n", b);
  printf("Максимальное значение float * 2: %f\n", b * 2); // бесконечность

  // Потеря значимости
  float c = 1.0f;
  float d = 1e-7f;
  printf("c: %f\n", c);
  printf("d: %f\n", d);
  printf("c + d: %f\n", c + d); // d теряется

  return 0;
}
