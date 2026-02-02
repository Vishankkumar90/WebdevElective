#include <stdio.h>

// Function to reverse a number using tail recursion
int reverse_tail(int num, int rev) {
    if (num == 0) 
        return rev; // Base case: return the reversed number
    return reverse_tail(num / 10, rev * 10 + num % 10); // Tail recursive call
}

int main() {
    int num, reversed;
    printf("Enter a number to reverse: ");
    scanf("%d", &num);

    reversed = reverse_tail(num, 0); // Call the tail-recursive function
    printf("Reversed number: %d\n", reversed);

    return 0;
}
