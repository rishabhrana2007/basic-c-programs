# include<stdio.h>
int main(){
int choice;
float num,result;

    printf("Unit Conversion Menu\n");
    printf("1. Kilometers to Meters\n");
    printf("2. Meters to Centimeters\n");
    printf("3. Centimeters to Millimeters\n");
    printf("4. Meters to Kilometers\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);

    printf("Enter value to convert : ");
    scanf("%f", &num);
if(num>0){
    switch (choice){
        case 1:
        result=num*1000;
        printf("%.4f Km = %.4f m",num,result);
        break;
        case 2:
        result=num*100;
        printf("%.4f m = %.4f cm",num,result);
        break;
        case 3:
        result=num*10;
        printf("%.4f cm = %.4f mm",num,result);
        break;
        case 4:
        result=num/1000;
        printf("%.4f m = %.4f Km",num,result);
        break;
        default :
        printf("Please enter valid option (1-4)");
        }
    } else{
    printf("Please enter positive values\n");
    }

    return 0;
}