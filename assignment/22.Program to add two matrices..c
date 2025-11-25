#include<stdio.h>

int main(){
    int a[10][10],b[10][10],add[10][10];
    int i,j,rows,columns;

    for(i = 0 ; i < 10 ; i++){
        for(j = 0 ; j < 10 ; j++){
            a[i][j]=0;
            b[i][j]=0;
            add[i][j]=0;
        }
    }

    printf("Enter Number of rows in matrices : ");
    scanf("%d",&rows);
    printf("Enter Number of columns in matrices : ");
    scanf("%d",&columns);

    printf("Enter matrix a : \n");
    for (i = 0 ; i < rows ; i++){
        for (j = 0 ; j < columns ; j++){
        scanf("%d",&a[i][j]);
        }
    }

    printf("Enter matrix b : \n");
    for (i = 0 ; i < rows ; i++){
        for (j = 0 ; j < columns ; j++){
        scanf("%d",&b[i][j]);
        }
    }

    for(i = 0 ; i < rows ; i++){
        for(j = 0 ; j < columns ; j++){
            add[i][j] = a[i][j] + b[i][j];
        }
    }

    printf(" A + B = \n");

    for(i = 0 ; i < rows ; i++){
        printf("[");
        for(j = 0 ; j < columns ; j++){
            printf(" %d",add[i][j]);
        }
        printf("]\n");
    }
    return 0;
}