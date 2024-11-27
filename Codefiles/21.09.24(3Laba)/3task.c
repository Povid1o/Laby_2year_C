//
//  main.c
//  3task
//
//  Created by Никита Башлыков on 21.09.2024.
//

#include <stdio.h>

int main() {
  double num;

  printf("Введите число с плавающей запятой: ");
  scanf("%lf", &num);

  printf("Десятичный формат: %.17g\n", num);
  printf("Экспоненциальный формат: %.17e\n", num);

  return 0;
}
