#include <stdio.h>

int gcdRecursive(int a, int b);
int gcdNonRecursive(int a, int b);

int main() {
    int a, b;

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    if (a < 0) {
        a = -a;
    }
    if (b < 0) {
        b = -b;
    }

    printf("GCD using recursion: %d\n", gcdRecursive(a, b));
    printf("GCD using iteration: %d\n", gcdNonRecursive(a, b));

    return 0;
}

// Recursive function
int gcdRecursive(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcdRecursive(b, a % b);
}

// Non-recursive function
int gcdNonRecursive(int a, int b) {
    int temp;

    while (b != 0) {
        temp = b;
        b = a % b;
        a = temp;
    }

    return a;
}