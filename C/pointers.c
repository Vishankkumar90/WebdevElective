#include <stdio.h>

int main() {
    int a=40;
    int *ptra=&a;
    int *ptr2= NULL;
    printf("%p\n", ptra);
    printf("%p\n", ptra);
    printf("%p\n", ptr2);
    return 0;
}