#include<stdio.h>

int main(){

    int num,i=1;
    long long fact=1;

    printf("Enter number :");
    scanf("%d",&num);

    if(num>=0){

        while(i<=num){
            fact = fact * i;
            i++;
        }
    }else{
        printf("Enter positive integer ! ");
    }
        printf("%d! = %d",num,fact);
    return 0;
}