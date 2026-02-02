// And opearator && : needs both values to be true (1 and ony 1)
// Or operator   || : needs any one value to be true (1 or 0)
// Not operator  !  : it will make true to false and fase to true

#include <stdio.h>

int main()
{
    int a, b;
    a = 34;
    b = 6;
    printf("ab= %d\n", a&&b);   // checks if both value are 1 and 1
    printf("ab= %d\n", a||b);   
    printf("ab= %d\n", !b);   
    return 0;
}