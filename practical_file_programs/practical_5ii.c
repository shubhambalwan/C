#include <stdio.h>

void multiplyMatrix(int a[3][3], int b[3][3]);

int main() {
    int a[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int b[3][3] = {
        {9, 8, 7},
        {6, 5, 4},
        {3, 2, 1}
    };

    multiplyMatrix(a, b);

    return 0;
}

void multiplyMatrix(int a[3][3], int b[3][3]) {
    int product[3][3] = {0};

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 3; k++) {
                product[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    printf("Product of two matrices:\n");

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d\t", product[i][j]);
        }
        printf("\n");
    }
}