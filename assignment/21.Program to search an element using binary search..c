#include<stdio.h>

void BSort(int arr[], int n){
    int temp;
        for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < n - 1 - i; j++) {
            if(arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main(){

    int arr[100],n,i,index,search,found=0,start,end,mid;

    printf("Enter number of elements :");
    scanf("%d",&n);

    start=0;
    end=n-1;

    printf("Enter elements \n");
    for (i = 0 ; i < n ; i++){
        scanf("%d",&arr[i]);
    }

    BSort(arr,n);

    printf("Enter element to search : ");
    scanf("%d",&search);

    for (i = 0 ; i < n ; i++){
        mid = (start + end) / 2;
        if(arr[mid] == search){
            found=1;
            index=i;
            break;
        }
        if(arr[mid] > search){
            end = mid - 1;
        }else{
            start = mid + 1;
        } 
    }
    
    if(found){
        printf("Element found at index %d",i);
    }else{
        printf("Element not found !");
    }
    
    return 0;
}