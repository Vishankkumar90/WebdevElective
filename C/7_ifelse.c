#include <stdio.h>

int main() {
    int a;
    printf("enter your age \n");
    scanf ("%d",& a);
    printf("your age is %d \n", a);
    if (a>18)
    {
        printf("You can drive\n");
   
    }
    else if (a==18)
    {
        printf("you can drive\n");
    }
    else{
    printf("you cannot drive\n");
    }
    return 0;
}