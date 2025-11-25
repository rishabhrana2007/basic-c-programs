#include<stdio.h>

int main(){

    int num,choice;
    int fact=1;
    printf("1. to calculate factorial : \n");
    printf("2. to print fabonacci series : \n");
    printf("3. to check taht number is prime or not : \n");
    printf("Enter your choice : ");
    scanf("%d",&choice);
    
    switch(choice){
        case 1:
        printf("to calculate factorial \n");
        printf("enter number : ");
        scanf("%d", &num);

        for(int i=1;i<=num;i++){
        fact=fact*i;
        }
        printf("%d! = %d",num,fact);
    break;
    case 2:

    printf("Enter limit of fabonacci series");
    scanf("%d",num);
    int a=1,b=1;
    int sum=a+b;

        for(int i=1;i<=num;i++){
       
    


    }




        }
    return 0;
}