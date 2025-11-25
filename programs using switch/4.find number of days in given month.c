#include <stdio.h>

int main() {

int num,days,year;

printf("Enter month number (1-12) : ");
scanf("%d", &num);

if (num==2){

    printf("enter year : ");
    scanf("%d", &year);
            }

            switch(num){
            case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            days=31; 
            break;
            
            case 4: case 6: case 9: case 11: 
            days=30;
            break;

            case 2:
            if(year % 4 == 0){
                days=29;
            }else{
                days=28;
            }
            break;

            default :
            printf("Invalid month number !!");
        }

        printf("Total Days = %d", days);

    return 0;
            }