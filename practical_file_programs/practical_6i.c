#include <stdio.h>
#include <string.h>

void insert(char str[], char sub[], int pos);

int main() {
    char str[100], sub[50];
    int pos;

    printf("Enter the main string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    printf("Enter the substring: ");
    fgets(sub, sizeof(sub), stdin);
    sub[strcspn(sub, "\n")] = '\0';

    printf("Enter the position: ");
    scanf("%d", &pos);

    insert(str, sub, pos - 1);

    printf("String after insertion: %s\n", str);

    return 0;
}

void insert(char str[], char sub[], int pos) {
    int len = strlen(str);
    int sublen = strlen(sub);

    for (int i = len; i >= pos; i--) {
        str[i + sublen] = str[i];
    }

    for (int i = 0; i < sublen; i++) {
        str[pos + i] = sub[i];
    }
}
