//
//  main.c
//  7task
//
//  Created by Никита Башлыков on 20.09.2024.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    double inches;
    printf("Введите рост в дюймах: ");
    scanf("%lf", &inches);
    printf("Ваш рост в сантиметрах: %.2f\n", inches * 2.54);

    
    return 0;
};
