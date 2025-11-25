# include<stdio.h>
int main(){

float num1,num2;
char op;

printf("Enter first number : ");
scanf("%f", &num1);

printf("Enter second number : ");
scanf("%f", &num2);

printf("Enter operator (+,-,*,/) : ");
scanf(" %c", &op);

switch(op){

    case '+':
    printf("%f + %f = %f \n",num1, num2, num1+num2);
    break;
    case '-' :
    printf("%f - %f = %f \n",num1, num2, num1-num2);
    break;
    case '*' :
    printf("%f * %f = %f \n",num1, num2, num1*num2);
    break;
    case '/' :
    printf("%f / %f = %f \n",num1, num2, num1/num2);
    default :

    printf("enter valid operator !!");
}

    return 0;
}