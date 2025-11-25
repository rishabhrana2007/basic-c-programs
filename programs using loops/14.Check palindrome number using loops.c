#include<stdio.h>

int main (){

    int num,digit,rev=0;
    int original;

    printf("enter number : ");
    scanf("%d", &num);
    original=num;

    for(int i=1 ; num!=0;i++){
    digit=num%10;
    rev=rev*10+digit;
    num=num/10;
    }
    if(rev==original){
        printf("%d is a palindrome number",original);
    }else{
        printf("%d is not a palindrome number",original);   
    }
    return 0;
}