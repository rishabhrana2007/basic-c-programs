# include<stdio.h>

int main(){

    int start,end,i,j,isPrime;

    printf("Enter start of range: ");
    scanf("%d", &start);

    printf("Enter end of range: ");
    scanf("%d", &end);

    if(start<2){
        start=2;
    }else{
        for (i=start; i<=end ; i++){
            isPrime=1;
            for(j=2 ;j*j <= i;j++){
                if(i%j==0){
                    isPrime=0;
                    break;
                }
                
            }if(isPrime){
                printf("%d ",i);
            }
        }


    }

    return 0;
}