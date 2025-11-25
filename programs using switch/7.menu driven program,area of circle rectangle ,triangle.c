# include<stdio.h>

int main(){
    int choice;
    float rad;
    float length,breadth;
    float base, height;


    printf("Enter 1 to calculate Area of circle : \n");
    printf("Enter 2 to calculate Area of Rectangle : \n");
    printf("Enter 3 to calculate Area of Triangle : \n");
    scanf("%d",&choice);

    switch(choice){

        case 1 :

        printf("enter radius of circle : ");
        scanf("%f",&rad);

        printf("area of circle is %.4f sq unit",6.28*rad);
        break;

        case 2:

        
        printf("Enter length of Rectangle : ");
        scanf("%f", &length);
    
        printf("Enter Breadth of Rectangle : ");
        scanf("%f", &breadth);

        printf("Area of Ractangle is %.4f sq unit", length*breadth);
        break;

        case 3:

        printf("Enter Base of Triangle : ");
        scanf(" %f",&base);
        printf("Enter height of Triangle : ");
        scanf(" %f", &height);

        printf("Area of Triangle is %.4f sq unit",base*height/2);
        break; 

        default :
        printf("Please Enter Valid Choice");
    }
    return 0;
}