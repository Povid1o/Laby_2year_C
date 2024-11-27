#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int minutes;
    scanf("%d", &minutes);
    int hours = minutes/60;
    int newMinutes = minutes%60;
    
    printf("Hours: %d ", hours);
    printf("Minutes: %d", newMinutes);
    puts("");
    return 0;
}
