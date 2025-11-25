//program to find reverse of a number
#include<stdio.h>

int main(){

    int num;
    int digit,rev=0;
    
    printf("Enter a Number : ");
    scanf("%d", &num);

    do{
        digit=num%10;
        rev = rev*10 + digit;
        num=num/10;
    }while(num>0);

    printf("reverse = %d",rev);

    return 0;
}