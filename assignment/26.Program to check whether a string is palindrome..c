#include <stdio.h>

int main() {
    char str[200];
    int length = 0, i = 0, isPal = 1;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == '\n') {
            str[i] = '\0';
            break;
        }
    }
    while (str[length] != '\0') {
        length++;
    }

    for (i = 0; i < length / 2; i++) {
        if (str[i] != str[length - i - 1]) {
            isPal = 0;
            break;
        }
    }

    if (isPal)
        printf("string is palindrome\n");
    else
        printf("string is not palindrome\n");

    return 0;
}
