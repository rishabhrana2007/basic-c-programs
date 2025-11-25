#include <stdio.h>

int main() {
    int old_read,new_read;
    int con_units;
    float cost,bill;
    printf("Enter old reading of metre : ");
    scanf("%d",&old_read);

    printf("Enter current reading of metre : ");
    scanf("%d",&new_read);

    printf("Enter cost of one unit : $");
    scanf("%f", &cost);
    con_units= new_read-old_read;

    bill= con_units*cost;
    printf("Totel unit consumed = %d \n",con_units);
    printf("Tatal bill = $%f" ,bill);


    return 0;
}