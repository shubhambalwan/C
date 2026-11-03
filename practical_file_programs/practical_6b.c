#include <stdio.h>
#include <string.h>

int stringLength(char str[]) {
    int len = 0;
    while (str[len] != '\0') {
        len++;
    }
    return len;
}

void palindrome(char str[]) {
    int len = stringLength(str);
    int flag = 1;
    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - i - 1]) {
            flag = 0;
            break;
        }
    }
    if (flag == 1) {
        printf("String is a palindrome.\n");
     } else {printf("String is not a palindrome.\n");}
}

void reverse(char str[]) {
    int len = stringLength(str);
    char temp;
    for (int i = 0; i < len / 2; i++) {
        temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }
}

int main() {
    char str[100], rev[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    printf("Length of string = %d\n", stringLength(str));

    palindrome(str);

    strcpy(rev, str);
    reverse(rev);

    printf("Reversed string: %s\n", rev);

    return 0;
}