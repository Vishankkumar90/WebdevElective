#include <stdio.h>

int main() {
    int i;
    for (i=0; i<30;i++){
        if (i==13){
            break; // break statement will terminate the loop
        }
    printf("%d\n", i);
    }
    return 0;
}