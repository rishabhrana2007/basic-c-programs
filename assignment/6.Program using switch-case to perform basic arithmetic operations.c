#include<stdio.h>

int main (){

int num1,num2;
char op;

printf("Enter first number : ");
scanf("%d",&num1);
printf("Enter operation (+,-,*,/) : ");
scanf(" %c",&op);
printf("Enter second number : ");
scanf("%d",&num2);

switch(op){

case '+' :
printf("%d + %d = %d",num1, num2, num1+num2);
break;
case '-':
printf("%d - %d = %d",num1, num2, num1-num2);
break;
case '*' :
printf("%d * %d = %d",num1, num2, num1*num2);
break;
case '/':
printf("%d / %d = %d",num1, num2, num1/num2);
break;
default :
printf("Enter valid operation ! ");

}
    return 0;
}