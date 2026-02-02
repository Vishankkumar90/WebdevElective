#include <stdio.h>

int main() {
    int limit;

    printf("Enter the upper limit to find prime numbers: ");
    scanf("%d", &limit);

    printf("Prime numbers up to %d:\n", limit);
    for (int num = 2; num <= limit; num++) {
        int isPrime = 1; // Assume it's prime

        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                isPrime = 0; // Not prime
                break;
            }
        }

        if (isPrime) {
            printf("%d ", num);
        }
    } 
    printf("\n");

    return 0;
}