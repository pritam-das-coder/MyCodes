#include <stdio.h>
int main(){
    // int arr[2][4]={{2,3,7,9},{1,4,7,1}};
    // int arr[4][3]={{1,2,3},{4,5,6},{7,8,9},{10,11,12}};
    // int a[][2]={1,2,3,5,7,8};
    int arr[][2];
    for(int i=0;i<1;i++){
        for(int j=0;j<2;j++)
            printf("%d",&arr[i][j]);
    }
    // int r,c;
    // printf("Enter the number of rows : ");
    // scanf("%d",&r);
    // printf("Enter the number of columns : ");
    // scanf("%d",&c);
    // int arr[r][c];
    // for(int i=0;i<r;i++){
    //     printf("Enter row %d :\n",i+1);
    //     for(int j=0;j<c;j++)
    //         scanf("%d",&arr[i][j]);
    // }
    // printf("Your Array :\n");
    // for(int i=0;i<r;i++){
    //     for(int j=0;j<c;j++){
    //         printf("%d ",arr[i][j]);
    //     }
    //     printf("\n");
    // }
    return 0;
}