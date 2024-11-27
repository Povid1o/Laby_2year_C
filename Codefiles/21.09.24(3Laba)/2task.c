//
//  main.c
//  2task
//
//  Created by Никита Башлыков on 21.09.2024.
//

#include <stdio.h>
#include <string.h>

int main() {
  char name[100];
  
  printf("Введите имя: ");
  scanf("%s", name);
  
  printf("\"%s\"\n", name);

  printf("\"%20s\"\n", name);

  printf("\"%-20s\"\n", name);

  printf("\"%*s\"\n", strlen(name) + 3, name);

  return 0;
}
