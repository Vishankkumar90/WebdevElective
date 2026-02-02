#include <stdio.h>
int sum(int a, int b) // creating a function 
{
return a+b;
}


int main() {
    int a,b,c;
    a=91;
    b=87;
    c=sum(a,b);
    printf("%d\n",c); // calling a function
    
    return 0;
}