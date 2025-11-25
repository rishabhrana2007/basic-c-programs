#include<stdio.h>

int main (){

    int num,digit,sum=0;
    int original;

    printf("enter number : ");
    scanf("%d", &num);
    original=num;

    for(int i=1 ; num!=0;i++){
    digit=num%10;
    sum=sum+digit*digit*digit;
    num=num/10;
    }
    if(sum==original){
        printf("%d is a armstrong number",original);
    }else{
        printf("%d is not a armstrong number",original);   
    }
    return 0;
}