//
//  main.c
//  6task
//
//  Created by Никита Башлыков on 20.09.2024.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int quart, weightOfWater;
    double molecules;
    
    scanf("Введите количество воды в квартах: %d", &quart);
    weightOfWater = quart * 950;
    molecules = weightOfWater / 3.0e-23;
    
    printf("Кол-во молекул: %.2e", molecules);
    
    

    return 0;
    };
