#include<stdio.h>

int main (){

    int num,digit,rev=0;

    printf("enter number : ");
    scanf("%d", &num);

    for(int i=1 ; num!=0;i++){
    digit=num%10;
    rev=rev*10+digit;
    num=num/10;
    }
    printf("reverse :  %d",rev);

    return 0;
}