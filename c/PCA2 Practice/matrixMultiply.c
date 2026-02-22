#include <stdio.h>
#include <stdlib.h>
int main(){
    int r1,c1;
    printf("Enter number of rows of matrix 1 : ");
    scanf("%d",&r1);
    printf("Enter number of columns of matrix 1 : ");
    scanf("%d",&c1);
    int r2,c2;
    printf("Enter number of rows of matrix 2 : ");
    scanf("%d",&r2);
    printf("Enter number of columns of matrix 2 : ");
    scanf("%d",&c2);
    if(c1!=r2){
        printf("No. of columns of matrix 1 must be equal to no. of rows of matrix 2.");
        exit(EXIT_FAILURE);
    }
    int a[r1][c1];
    puts("Enter all the elements of matrix 1 :");
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            scanf("%d",&a[i][j]);
        }
    }
    int b[r2][c2];
    puts("Enter all the elements of matrix 2 :");
    for(int i=0;i<r2;i++){
        for(int j=0;j<c2;j++){
            scanf("%d",&b[i][j]);
        }
    }
    int c[r1][c2];
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            c[i][j]=0;
            for(int k=0;k<r2;k++){
                c[i][j]+=a[i][k]*b[k][j];
            }
        }
    }
    puts("Required Matrix : ");
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
    return 0;
}