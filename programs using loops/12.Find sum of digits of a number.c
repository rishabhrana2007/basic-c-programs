#include<stdio.h>

int main (){

    int num,digit,sum=0;

    printf("enter number : ");
    scanf("%d", &num);

    for(int i=1 ; num!=0;i++){
    digit=num%10;
    sum=sum+digit;
    num=num/10;
    }
    printf("sum of digits :  %d",sum);

    return 0;
}