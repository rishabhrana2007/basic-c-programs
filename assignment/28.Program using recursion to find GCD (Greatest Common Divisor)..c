#include <stdio.h>

int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int main() {
    int x, y;
    printf("Enter two numbers: ");
    scanf(" %d", &x);
    scanf(" %d", &y);
    

    printf("GCD = %d\n", gcd(x, y));
    return 0;
}
