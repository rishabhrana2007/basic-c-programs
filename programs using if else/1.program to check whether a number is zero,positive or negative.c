#include<stdio.h>
int main(){
int num;

printf("Enter Number : ");
scanf("%d", &num);
if(num==0){
    printf("ZERO !!");
}else if(num>0){
    printf("Positive");
}else{
    printf("Negative");
}
return 0;
}
