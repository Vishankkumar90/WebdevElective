#include <stdio.h>

int main() {
    int a[50][50], b[50][50], c[50][50] = {0}; 
    int i, j, r1, c1, r2, c2, k;

    printf("Enter number of rows and columns for matrix A: ");
    scanf("%d %d", &r1, &c1);

    printf("Enter number of rows and columns for matrix B: ");
    scanf("%d %d", &r2, &c2);

    if (c1 != r2) {
        printf("Matrix multiplication is invalid. The number of columns of A must be equal to the number of rows of B.\n");
        return 0;  
    }

    printf("Enter values for matrix A:\n");
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c1; j++) {
            printf("Enter value for A[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter values for matrix B:\n");
    for (i = 0; i < r2; i++) {
        for (j = 0; j < c2; j++) {
            printf("Enter value for B[%d][%d]: ", i, j);
            scanf("%d", &b[i][j]);
        }
    }

    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            c[i][j] = 0;
        }
    }

    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            for (k = 0; k < c1; k++) {  
                c[i][j] += a[i][k] * b[k][j];  
            }
        }
    }

    printf("Resultant matrix C (A * B):\n");
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}
