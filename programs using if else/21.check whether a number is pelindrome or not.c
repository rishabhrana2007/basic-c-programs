#include<stdio.h>

int main(){

int num,orig,digit,rev=0;

printf("Enter number : ");
scanf("%d", &num);
orig=num;
for(int i=1;num!=0;i++){

digit= num%10;
rev=rev*10+digit;
num=num/10;
}

if (orig==rev){
    printf("%d is a palindrome number", orig);
}else{
    printf("%d is not a palindrome number", orig);
}
    return 0;
}