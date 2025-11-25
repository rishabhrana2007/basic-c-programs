# include<stdio.h>

int main(){
    int choice;
    float length,breadth,height;


    printf("Enter 1 to calculate Volume of Cuboid : \n");
    printf("Enter 2 to calculate Volume of sphare : \n");
    printf("Enter 3 to calculate Volume of cylinder : \n");
    scanf("%d",&choice);

    switch(choice){

        case 1 :

        printf("enter Length of cuboid : ");
        scanf("%f",&length);

        printf("enter Breadth of cuboid : ");
        scanf("%f",&breadth);

        printf("enter height of cuboid : ");
        scanf("%f",&height);
        printf("Volume of cuboid %.4f cube unit",length*breadth*height);
        break;

        case 2:

        
        printf("Enter Radius of sphare : ");
        scanf("%f", &length);
    


        printf("Volume of sphare is  %.4f cube unit", 4*3.14*length*length*length/3 );
        break;

        case 3:

        printf("Enter The radius of Cylinder : ");
        scanf(" %f",&breadth);
        printf("Enter height of Cylinder : ");
        scanf(" %f", &height);
        length=3.14*breadth*breadth*height; // vol=pi*r*r*h
        printf("voume of Cylinder is %.4f cube unit ",length);
        break; 

        default :
        printf("Please Enter Valid Choice");
    }
    return 0;
}