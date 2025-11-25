#include <stdio.h>

int main() {
    int n;

start:
    printf("Enter a positive number: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid input. Please try again.\n");
        goto start;
    }

    printf("You entered a positive number: %d\n", n);
    return 0;
}

