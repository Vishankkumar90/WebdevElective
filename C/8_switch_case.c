#include <stdio.h>

int main() {
    int a,b;
    printf("enter number");
    scanf("%d",&a);
    scanf("%d",&b);
    switch(a){
        case 1:
        printf("number is 1");
        break;

        case 20:
        printf("number is 20");
        switch(b){                // nested switch (switch inside switch)
         case 2:
         printf("number is 2");
         break;
         default:
         printf("marks are not 2");
        }
        break;

        case 31:
        printf("number is 31");
        break;

        case 41:
        printf("number is 41");
        break;

        default:
        printf("number is is not 1,20,31,41");
        break;



    }
    
    
    return 0;
}