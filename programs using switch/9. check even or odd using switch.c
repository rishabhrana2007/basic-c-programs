#include<stdio.h>
int main(){
    int num,rem;

    printf("Enter a Number : ");
    scanf("%d", &num);
    rem=num%2;

    switch (rem)
    {
    case 1:
        printf("%d is an odd number", num);
        break;
    
    default:
        printf("%d is an even number ", num);
        break;
    }
    return 0;
}