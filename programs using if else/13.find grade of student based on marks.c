#include <stdio.h>

int main (){

    int marks;
    printf("Enter Marks : ");
    scanf("%d", &marks);

if(marks>100 || marks <0){
    printf("Enter valid marks ! \n");
    }else if(marks>=90){
        printf("Grade = A+");
    }else if (marks >=80){
        printf("Grade = A");
    }else if    (marks>=70){
        printf("Grade = B+ ");
    }else if (marks>=60){
        printf("Grade = B");
    }else if(marks>=50){
        printf("Grade = c");
    }else if(marks>=40){
        printf("Grade = D");
    }else {
        printf("FAIL :(");
    }
    return 0;
}