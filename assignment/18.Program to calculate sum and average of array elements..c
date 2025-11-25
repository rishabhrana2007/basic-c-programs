#include<stdio.h>

int sum(int arr[], int len){
int s=0;
for(int i=0 ; i<len; i++){
 s=s+arr[i];
}
return s;
}

float avg(int arr[], int len){
int s=0;
for(int i=0 ; i<len; i++){
 s=s+arr[i];
}
return s/len;
}

int main(){
int arr[5];
int length=5;
printf("Enter elements in array :\n");
for(int i =0;i<length;i++){
    scanf("%d",&arr[i]);
}
printf("sum of elements = %d\n",sum(arr,length));
printf("avarage of elements = %.2f",avg(arr,length));
    return 0;
}