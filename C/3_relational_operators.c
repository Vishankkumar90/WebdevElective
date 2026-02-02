// ==  is equal to 
// !=  is not equal to
// >   greater than
// <   less than
// >=  greater than equal to
// <=  less tan equal to

#include <stdio.h>

int main()
{
    int a, b;
    a = 34;
    b = 6;
    printf("ab= %d\n", a==b);   // returns 1 if value is true and 0 if false 
    printf("ab= %d\n", a!=b);  
    printf("ab= %d\n", a >= b);   
    printf("ab= %d\n", a <= b);   
    printf("a b= %d", a % b); 
    return 0;
}