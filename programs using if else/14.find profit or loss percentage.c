#include<stdio.h>

int main(){

float cp,sp;
float margin;

printf("Enter Cost Price : ");
scanf("%d", &cp);
printf("Enter Sell Price : ");
scanf("%d", &sp);

margin = sp-cp;
if(margin>=0){
    printf("profit %% = %f%% " ,(margin/cp)*100);
}else{
    printf("loss %% = %f%%" ,(-1*margin/cp)*100);
}

    return 0;
}