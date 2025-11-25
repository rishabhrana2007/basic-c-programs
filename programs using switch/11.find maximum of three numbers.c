#include<stdio.h>

int main(){

    int a,b;
    
    printf("enter first number : ");
    scanf("%d",&a);

    printf("Enter second Number : ");
    scanf("%d", &b);



    switch(a>b){

        case 1:
        printf("%d is greatest",a);
        break;
        case 0:
        printf("%d is greatest",b);
        break;
    }

}