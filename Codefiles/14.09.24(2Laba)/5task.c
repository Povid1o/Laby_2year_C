//
//  main.c
//  5task
//
//  Created by Никита Башлыков on 20.09.2024.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int age;
    double secondsInYear = 3.156e7;
    printf("Введите ваш возраст в годах: ");
    scanf("%d", &age);
    printf("Ваш возраст в секундах: %.2f\n", age * secondsInYear);
    
    return 0;
    };
