#include <stdio.h>

int main() {
    int a, i=0; // i is the point where the values will start
    printf("enter a number\n");
    scanf("%d", & a);

    do
    {
        printf("%d\n", i+1); // +1 is added to remove zeros as 1st number
        i=i+1;
    } while (i<a);
    
    return 0;
}