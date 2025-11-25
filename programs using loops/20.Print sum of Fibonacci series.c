#include <stdio.h>

int main() {
    int n, i;
    int t1 = 0, t2 = 1, nextTerm,sum=0;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");

    for (i = 1; i < n; i++) {
        
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
        sum=sum+t1;
    }
    printf("SUM=%d",sum);

    return 0;
}
