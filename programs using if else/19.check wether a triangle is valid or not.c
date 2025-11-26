#include<stdio.h>

int main(){
float a1, a2,a3;

printf("enter first angle");
scanf("%f" , &a1);

printf("enter second angle");
scanf("%f" , &a2);

printf("enter third angle");
scanf("%f" , &a3);

if (a1+a2+a3==180){
    printf("Triangle is possible");
}else {
    printf("Triangle is not possible");
}
    
    return 0;
}
