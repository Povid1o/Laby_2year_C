//
//  main.c
//  6task
//
//  Created by Никита Башлыков on 21.09.2024.
//

#include <stdio.h>
#include <string.h>

int main(int argc, const char * argv[]) {
    char name[50], surname[50];
    
    printf("Введите ваше имя: ");
    scanf("%s", name);
    
    printf("Введите вашу фамилию: ");
    scanf("%s", surname);
    
    printf("%s, %s \n", name, surname);
    printf("\%*d\ \%*d\ \n", strlen(name), strlen(name), strlen(surname)+1, strlen(surname));
    
}
