// + : addition
// - : subtraction
// * : Multiplication
// / : Division
// % : modulus (gives remainder of two functions)

#include <stdio.h>

int main()
{
    int a, b;
    a = 34;
    b = 6;
    printf("a+b= %d\n", a + b);   // addition operator
    printf("a-b= %d\n", a - b);   // subtraction operator
    printf("a*b= %d\n", a * b);   // multiplication operator
    printf("a/b= %d\n", a / b);   // division operator
    printf("a mod b= %d", a % b); // modulus operator
    return 0;
}