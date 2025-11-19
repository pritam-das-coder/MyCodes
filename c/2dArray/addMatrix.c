//  Write a program to add two matrices
#include <stdio.h>
int main(){
    int a[2][3]={1,2,4,6,9,5};
    int b[2][3]={3,5,9,0,1,5};
    // int add[2][3];
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            //add[i][j]=a[i][j]+b[i][j];
            int x=a[i][j]+b[i][j];
            printf("%d ",x);
        }
        printf("\n");
    }
    // for(int i=0;i<2;i++){
    //     for(int j=0;j<3;j++){
    //         printf("%d ",add[i][j]);
    //     }
    //     printf("\n");
    // }
    return 0;
}