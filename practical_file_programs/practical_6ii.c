#include <stdio.h>
#include <string.h>
void delete(char str[], int pos, int n);

int main() {
    char str[100];
    int pos, n;

    printf("Enter the string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    printf("Enter the position: ");
    scanf("%d", &pos);

    printf("Enter the number of characters to delete: ");
    scanf("%d", &n);

    delete(str, pos, n);

    printf("String after deletion: %s\n", str);

    return 0;
}

void delete(char str[], int pos, int n) {
    int len = strlen(str);

    for (int i = pos - 1; i <= len - n; i++) {
        str[i] = str[i + n];
    }
}