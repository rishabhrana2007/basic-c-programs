#include<stdio.h>

int main (){

    int num,digit,prod=1;

    printf("enter number : ");
    scanf("%d", &num);

    for(int i=1 ; num!=0;i++){
    digit=num%10;
    prod=prod*digit;
    num=num/10;
    }
    printf("product of digits :  %d",prod);

    return 0;
}