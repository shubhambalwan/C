#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

struct Node *front = NULL, *rear = NULL;

int main() {
    int choice, value;
    struct Node *newNode, *temp;

    while (1) {
        printf("\n1.Enqueue  2.Dequeue  3.Display  4.Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                newNode = malloc(sizeof(struct Node));
                printf("Enter value: ");
                scanf("%d", &value);

                newNode->data = value;
                newNode->next = NULL;

                if (rear == NULL)
                    front = rear = newNode;
                else {
                    rear->next = newNode;
                    rear = newNode;
                }
                break;

            case 2:
                if (front == NULL)
                    printf("Queue is empty\n");
                else {
                    temp = front;
                    printf("Deleted: %d\n", temp->data);
                    front = front->next;
                    if (front == NULL) rear = NULL;
                    free(temp);
                }
                break;

            case 3:
                temp = front;
                if (temp == NULL)
                    printf("Queue is empty\n");
                while (temp != NULL) {
                    printf("%d ", temp->data);
                    temp = temp->next;
                }
                printf("\n");
                break;

            case 4:
                return 0;

            default:
                printf("Invalid choice\n");
        }
    }
}