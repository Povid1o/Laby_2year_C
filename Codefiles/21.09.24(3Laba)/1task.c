//
//  main.c
//  1task
//
//  Created by Никита Башлыков on 21.09.2024.
//

#include <stdio.h>
#include <string.h>

int main() {
    
    char name[100];
    char surname[100];
  
    printf("Введите имя: ");
    scanf("%s", name);
    printf("Введите фамилию: ");
    scanf("%s", surname);
  
    printf("%s %s\n", name, surname);
    return 0;
}
