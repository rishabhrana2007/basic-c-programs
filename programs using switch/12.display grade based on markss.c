#include<stdio.h>

int main(){

    int a,b,c;
    int max1,maxf;
    printf("enter first number : ");
    scanf("%d",&a);

    printf("Enter second Number : ");
    scanf("%d", &b);

    printf("Enter third number : ");
    scanf("%d",&c);

    switch(a>b){

        case 1:
        max1=a;
        break;
        case 0:
        max1=b;
        break;
    }

    switch(max1>c){
        case 1:
        maxf=max1;
        break;

        case 0:
        maxf=c;
        break;

    }
    printf("Maximum number is %d",maxf);

}