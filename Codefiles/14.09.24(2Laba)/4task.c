//
//  main.c
//  4task
//
//  Created by Никита Башлыков on 20.09.2024.
//

#include <stdio.h>

int main() {
  double number;

  printf("Введите значение с плавающей запятой: ");
  scanf("%lf", &number);

  printf("Запись с фиксированной запятой: %.6f\n", number);
  printf("Экспоненциальная форма записи: %e\n", number);

  // Проверка поддержки двоично-экспоненциального представления
  #ifdef __STDC_IEC_559__
    printf("Двоично-экспоненциальное представление: %a\n", number);
  #else
    printf("Двоично-экспоненциальное представление не поддерживается\n");
  #endif

  return 0;
}
