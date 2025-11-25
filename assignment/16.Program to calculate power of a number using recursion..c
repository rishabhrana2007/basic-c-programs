//Program to calculate power of a number using recursion.
#include<stdio.h>

int expo(int num,int n){
if (n==1){
return num;
}else{ 
return num*expo(num,n-1);
}
}
int main(){
    int num,power;

    printf("Enter a number : ");
    scanf("%d",&num);
    printf("Enter power : ");
    scanf("%d",&power);

    printf("%d^%d = %d",num,power,expo(num,power));
    return 0;
    }