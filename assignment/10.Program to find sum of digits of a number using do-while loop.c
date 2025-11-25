//program to find sum of digits of a number
#include<stdio.h>

int main(){

    int num;
    int digit,sum=0;
    
    printf("Enter a Number : ");
    scanf("%d", &num);

    do{
        digit=num%10;
        sum=sum+digit;
        num=num/10;
    }while(num>0);

    printf("sum of digits ==%d",sum);

    return 0;
}