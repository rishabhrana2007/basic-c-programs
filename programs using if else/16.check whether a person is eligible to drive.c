# include <stdio.h>

int main(){
    
    int age;
    printf("Enter your Age : ");
    scanf("%d", &age);

    if (age > 18){
        printf("You Are Eligible To Drive");
    }else if (age <0){
        printf("Enter valid Age");
    }else {
        printf("You Are Not Eligible To Drive");
    }
    
    return 0;
}