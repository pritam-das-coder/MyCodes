#include <stdio.h>
int main(){
    int arr[3][3];
    printf("Enter all elements of array : ");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(i==j) printf("%d ",arr[i][j]);
            else printf("0 ");
        }
        printf("\n");
    }
    return 0;
}