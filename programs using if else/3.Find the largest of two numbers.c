#include<stdio.h>
int main(){

int num1,num2;

printf("Enter 1st Number : ");
scanf("%d", &num1);

printf("Enter 2nd Number : ");
scanf("%d", &num2);

if(num1>num2){
    printf("%d is larger", num1);
}else{
    printf("%d is larger", num2);
}
    return 0;
}