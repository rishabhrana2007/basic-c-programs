//Menu-driven program for simple interest & compound interest

#include<stdio.h>


int main(){

int choice;
float p,r,t,tA,ci;
int n;

printf("Intrest calculating Menu\n");
printf("1. To calculate Simple Intrest\n");
printf("2. To calculate compound intrest");
scanf("%d", &choice); 


switch(choice){
    case 1:
printf("Enter Principal Amount : ");
scanf("%f", &p);
printf("Enter Rate of Intrest (%%): ");
scanf("%f",&r);
printf("Enter Time period (years) : ");
scanf("%f",&t);
    printf("Total simple intrest = %.2f",p*r*t/100);
    printf("Toatal Amount = %.2f",p+(p*r*t/100)  );
    break;
    case 2:
printf("Enter Principal Amount : ");
scanf("%f", &p);
printf("Enter Rate of Intrest (%%): ");
scanf("%f",&r);
printf("Enter Time period (years) : ");
scanf("%f",&t);
Printf("Enter Number of compunding year per year : ");
scanf("%d",&n);





    return 0;
}
