//program to find greater number
#include<stdio.h>

int findMax(int a , int b){
if (a>b)
return a;
return b;
}

int main(){
int a,b;

printf("Enter a : ");
scanf("%d",&a);
printf("Enter b : ");
scanf("%d",&b);

printf("%d is greater",findMax(a,b));

    return 0;
}
