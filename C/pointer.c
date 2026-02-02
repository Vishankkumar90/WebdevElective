#include <stdio.h>

int main() {
    int a=8;
    int *ptra = &a;

    printf("%x", *ptra);
    return 0;
}