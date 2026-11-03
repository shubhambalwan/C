#include <stdio.h>
#define MAX 5

int main() {
    int stack[MAX], top = -1, choice, value;

    while (1) {
        printf("\n1.Push  2.Pop  3.Display  4.Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                if (top == MAX - 1)
                    printf("Stack Overflow\n");
                else {
                    printf("Enter value: ");
                    scanf("%d", &value);
                    stack[++top] = value;
                }
                break;

            case 2:
                if (top == -1)
                    printf("Stack Underflow\n");
                else
                    printf("Deleted: %d\n", stack[top--]);
                break;

            case 3:
                if (top == -1)
                    printf("Stack is empty\n");
                else {
                    for (int i = top; i >= 0; i--)
                        printf("%d\n", stack[i]);
                }
                break;

            case 4:
                return 0;

            default:
                printf("Invalid choice\n");
        }
    }

    return 0;
}