#include<stdio.h>
int max(int arr[],int length){
int m=arr[0];
for(int i= 0; i< length;i++){
    if(arr[i] > m)
        m = arr[i];
}
return m;
}
int main(){
int arr[5];
int length=5;
printf("Enter elements in array :\n");
for(int i =0;i<length;i++){
    scanf("%d",&arr[i]);
}
printf("greatest element = %d",max(arr,length));

    return 0;
}