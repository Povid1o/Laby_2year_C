//
//  main.c
//  8task
//
//  Created by Никита Башлыков on 20.09.2024.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
      
    double cups;
    printf("Введите объем в чашках: ");
    scanf("%lf", &cups);

    printf("Пинты: %.2f\n", cups / 2);
    printf("Унции: %.2f\n", cups * 8);
    printf("Столовые ложки: %.2f\n", cups * 8 * 2);
    printf("Чайные ложки: %.2f\n", cups * 8 * 2 * 3);

    return 0;
};
