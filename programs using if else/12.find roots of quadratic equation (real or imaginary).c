#include<stdio.h>

int main(){

int a,b,c,d;

printf("enter coeficient of x^2 : ");
scanf("%d", &a);
printf("enter coeficient of x : ");
scanf("%d", &b);
printf("enter constent term : ");
scanf("%d", &c);

d=b*b-4*a*c; //formula

if(d>0){
    printf("Real and diffrent roots\n");

    }else if(d==0){
        printf("real and equal roots\n");

    }else {
        printf("imaginary roots\n");
    }

    return 0;
}