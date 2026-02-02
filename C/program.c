#include <stdio.h>

int main() {
    int i,n;
    printf("enter number\n");
    scanf("%d",&n);
    if(n<=1){
        printf("not prime");
        return 0;

    }

    for(i=2;i<n;i++){
    if(n%i==0){
        printf("not prime");
    
    return 0;
    }
    }
    printf("%d is a prime number\n", n);

    return 0;
}