//
//  main.c
//  5task
//
//  Created by Никита Башлыков on 28.09.2024.
//

#include <stdio.h>

int find_min(int arr[], int n) {
    int minimum = 100000;
    for (int i=0; i<n; i++) {
        minimum = minimum > arr[i] ? arr[i] : minimum;
    }
    return minimum;
}
int find_max(int arr[], int n) {
    int maximum = 0;
    for (int i=0; i<n; i++) {
        maximum = maximum < arr[i] ? arr[i] : maximum;
    }
    return maximum;
}
double find_average(int arr[], int n) {
    int sum = 0;
    for (int i=0; i<n; i++) {
        sum += arr[i];
    }
    return sum/n;
}

double find_median(int arr[], int n) {
    
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    if (n % 2 == 0) 
    {
        int mid1 = arr[n / 2 - 1];
        int mid2 = arr[n / 2];
        return (mid1 + mid2) / 2.0; //ну а чё
    } else {
        return arr[n / 2];
        
    }
}

int main() { 
    int arr[]={5,2,8,3,1,4};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    printf("Исходный массив: ");
    
    for(int i=0; i<n; i++)
    {
        printf("%d ", arr[i]);
    } 
    printf("\n");
    printf("Минимальное значение: %d\n", find_min(arr, n));
    printf("Максимальное значение: %d\n", find_max(arr, n));
    printf("Среднее арифметическое: %.2f\n", find_average(arr, n));
    printf("Медиана: %.2f\n", find_median(arr, n));
    return 0;
}
