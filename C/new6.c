#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int stack[n], top = -1;
    stack[++top] = 0;
    stack[++top] = n - 1;

    while (top >= 0) {
        int right = stack[top--];
        int left = stack[top--];

        int pivot = arr[right], i = left - 1;
        for (int j = left; j < right; j++) {
            if (arr[j] < pivot) {
                i++;
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }

        int temp = arr[i + 1];
        arr[i + 1] = arr[right];
        arr[right] = temp;

        int pivotIndex = i + 1;
        if (pivotIndex - 1 > left) {
            stack[++top] = left;
            stack[++top] = pivotIndex - 1;
        }
        if (pivotIndex + 1 < right) {
            stack[++top] = pivotIndex + 1;
            stack[++top] = right;
        }
    }

    printf("Sorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
