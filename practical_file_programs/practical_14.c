#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, sum = 0;
    float avg;

    printf("Enter number of integers: ");
    scanf("%d", &n);

    int *ptr = (int *)malloc(n * sizeof(int));

    if (ptr == NULL) {
        printf("Memory allocation failed!");
        return 1;
    }

    printf("Enter %d integers:\n", n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &ptr[i]);
        sum += ptr[i];
    }

    avg = (float)sum / n;

    printf("Sum = %d\n", sum);
    printf("Average = %.2f\n", avg);

    free(ptr);

    return 0;
}