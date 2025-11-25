#include<stdio.h>

int main(){

   float C,F;
   int choice;
    printf("Enter 1 to convert celcius into ferenhite \n");
    printf("Enter 2 to convert ferenhite into celcius \n");
    scanf("%d", &choice);

   

    switch(choice){

        case 1:
        printf("Enter temprature (*C) : ");
        scanf("%f",&C);
        F=9*C/5+32;
        printf("%.2f *C = %.2f *F",C,F);
        break;
        case 2:
        printf("Enter temprature (*F) : ");
        scanf("%f",&F);
        C=5*(F-32)/9;
        printf("%.2f *F = %.2f *C",F,C);
        break;
        default:
        printf("Enter valid oprion !!");
    }
    return 0;
}