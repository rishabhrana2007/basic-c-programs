#include<stdio.h>

int main(){
float num;
float ab_num;
printf("Enter Number : ");
scanf("%f", &num);
if (num<0){
    ab_num = -1*num;
    printf("absolute value = %f", ab_num);
}else{
    printf("absolute value = %f", num);
}

return 0;
}