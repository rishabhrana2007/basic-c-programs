#include<stdio.h>

int main (){

    int num,digit,n;

    printf("enter number : ");
    scanf("%d", &num);

    for(int i=1 ; num!=0;i++){
    digit=num%10;
    num=num/10;
    n=i;
    }
    printf("tatal digits = %d", n);


    return 0;
}