// Write a program to print the multiplication of two matrices given by the user.
#include <stdio.h>
int main(){
    int r1,c1,r2,c2;
    printf("Enter number of rows of 1st matrix : ");
    scanf("%d",&r1);
    printf("Enter number of columns of 1st matrix : ");
    scanf("%d",&c1);
    printf("Enter number of rows of 2nd matrix : ");
    scanf("%d",&r2);
    printf("Enter number of columns of 2nd matrix : ");
    scanf("%d",&c2);
    if(c1!=r2){
        printf("INVALID INPUT! MATRIX CANNOT BE MULTIPLIED");
        return 0;
    }
    int a[r1][c1],b[r2][c2];
    printf("Enter all elements of 1st matrix : \n");
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++)
            scanf("%d",&a[i][j]);
    }
    printf("Enter all elements of 2nd matrix : \n");
    for(int i=0;i<r2;i++){
        for(int j=0;j<c2;j++)
            scanf("%d",&b[i][j]);
    }
    printf("Matrix 1 : \n");
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("Matrix 2 : \n");
    for(int i=0;i<r2;i++){
        for(int j=0;j<c2;j++){
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
    int res[r1][c2];
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            res[i][j]=0;
            for(int k=0;k<c1;k++){
                res[i][j]+=a[i][k]*b[k][j];
            }
        }
    }
    printf("Resultant Matrix : \n");
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            printf("%d ",res[i][j]);
        }
        printf("\n");
    }
    // int a[3][2]={1,0,2,0,3,0};
    // int b[2][4]={1,3,1,0,0,2,3,1};
    // int res[3][4];
    // for(int i=0;i<3;i++){
    //     for(int j=0;j<4;j++){
    //         res[i][j]=0;
    //         for(int k=0;k<2;k++){
    //             res[i][j]+=a[i][k]*b[k][j];
    //         }
    //     }
    // }
    return 0;
}