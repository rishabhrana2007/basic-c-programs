#include<stdio.h>
int main(){

    int num,remain;;

    printf("enter number : ");
    scanf("%d", &num);

    for(int i=2; i<=num/2 ; i++){

        remain = num%i;
       if(remain==0){
            break;
        }
    }
     if(remain==0){
            printf("%d is not a prime number", num);
     }else{
        printf("%d is a prime number",num);
     }
    return 0;
}