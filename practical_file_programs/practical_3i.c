#include <stdio.h>
int factorialRecursive(int n);
int factorialNonRecursive(int n);

int main() {
    int n;
    printf("Enter an integer: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
        return 0;
    }

    printf("Factorial using recursion: %d\n", factorialRecursive(n));
    printf("Factorial using iteration: %d\n", factorialNonRecursive(n));

    return 0;
}

int factorialRecursive(int n) {
    if (n == 0 || n == 1){
        return 1;}
    return n * factorialRecursive(n - 1);
}
int factorialNonRecursive(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}