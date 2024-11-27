//
//  main.c
//  2task
//
//  Created by Никита Башлыков on 20.09.2024.
//

#include <stdio.h>

int main() {
  int ascii_code;

  printf("Введите код ASCII: ");
  scanf("%d", &ascii_code);

  printf("Символ с кодом %d: %c\n", ascii_code, ascii_code);

  return 0;
}
