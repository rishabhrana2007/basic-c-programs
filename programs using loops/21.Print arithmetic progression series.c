#include<stdio.h>

int main(){

    int a,d,n,i;

    printf("Enterr first term of A.P.: ");
    scanf("%d", &a);
    printf("Enter commen diffrence : ");
    scanf("%d", &d);
    printf("Enter number of turms you want to print : ");
    scanf("%d", &n);

    printf("%d ,",a);
    for(i=1;i<n;i++){

        printf(",%d",a+d);
        a=a+d;
    }



    return 0;
}