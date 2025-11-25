// Program to check whether a number is prime using function. 
#include<stdio.h>
int isPrime(int num){
    int result=1;
    for(int i=2;i*i<=num;i++){
        if(num % i == 0)
        result = 0;
    }
    return result;
}

int main(){
int num;

printf("Enter a positive number : ");
scanf("%d",&num);

if ( num <= 0){
    printf("Enter a positive number !");
}else if(isPrime(num)){
    printf("%d is a prime number",num);
}else{ 
    printf("%d is not a prime number",num);
}
    return 0;
}
