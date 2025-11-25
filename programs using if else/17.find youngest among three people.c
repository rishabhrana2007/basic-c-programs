# include <stdio.h>

int main(){
int age1, age2, age3;

printf("Enter age of first person : ");
scanf("%d", &age1);

printf("Enter age of second person : ");
scanf("%d", &age2);

printf("Enter age of third person : ");
scanf("%d", &age3);
if (age1<0 && age2<0 && age3<0){
if( age1>age2 && age1>age3){
    printf("first person is oldest");
}else if(age2>age3){
    printf("second person is oldest");
}else {
    printf("Third person is oldest");
}
}else if (age1 == age2 && age2==age3){
    printf("equally old");
}else{
    printf("enter valid age !!");
}

    return 0;
}