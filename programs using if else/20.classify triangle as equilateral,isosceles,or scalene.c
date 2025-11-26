#include<stdio.h>

int main(){
float a1, a2,a3;

printf("enter first side : ");
scanf("%f" , &a1);

printf("enter second side : ");
scanf("%f" , &a2);

printf("enter third side : ");
scanf("%f" , &a3);

if(a1+a2>a3 && a2+a3>a1 && a3+a1>a2){
if(a1==a2 && a2==a3){
    printf("Equilaterl triangle");
}else if(a1 == a2 || a2==a3 || a3==a1){
    printf("isosceles triangle");
}else if( a1!=a2 && a2!=a3 && a3!=a1){
    printf("scalene triangle");
}
}else{
    printf("Triangle is not possible !!");
}
    
    return 0;
}
