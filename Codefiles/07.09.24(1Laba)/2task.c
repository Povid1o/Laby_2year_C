#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int first;
    int second;
    int third;
    scanf("%d", &first);
    scanf("%d", &second);
    scanf("%d", &third);
    int summ = first+second+third;
    
    printf("Average: %d", summ/3);
    puts("");
    return 0;
}
