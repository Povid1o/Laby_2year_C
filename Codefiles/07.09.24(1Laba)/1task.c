//
//  main.c
//  C
//
//  Created by Никита Башлыков on 07.09.2024.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int first;
    int second;
    scanf("%d", &first);
    scanf("%d", &second);
    
    printf("Summ: %d", first+second);
    puts("");
    printf("Diff: %d", first-second);
    puts("");
    printf("Mult: %d", first*second);
    puts("");
    printf("Delit: %d", first/second);
    puts("");
    printf("Ost: %d", first%second);
    return 0;
}
