//
//  main.c
//  6task
//
//  Created by Никита Башлыков on 28.09.2024.
//

#include <stdio.h>

void reverse_array(int arr[], int n) {
    
}
int main() {
    int arr[]={1,2,3,4,5};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Исходный массив: "); 
    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    reverse_array(arr, n);
    printf("Инвертированный массив: "); 
    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
