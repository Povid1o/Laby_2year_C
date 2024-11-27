//
//  main.c
//  4task
//
//  Created by Никита Башлыков on 21.09.2024.
//

#include <stdio.h>

int main() {
  char name[50];
  float height_inches;
  float height_meters;

  printf("Введите ваше имя: ");
  scanf("%s", name);

  printf("Введите ваш рост в дюймах: ");
  scanf("%f", &height_inches);

  // Перевод дюймов в метры
  height_meters = height_inches * 0.0254;

  printf("%s, ваш рост составляет %.3f метров\n", name, height_meters);

  return 0;
}
