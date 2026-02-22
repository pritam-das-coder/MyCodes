// Write a program to rotate a matrix 90° clockwise.
#include <stdio.h>
int main(){
    int n;
    printf("Enter number of rows/columns : ");
    scanf("%d",&n);
    int arr[n][n];
    printf("Enter all elements of array : \n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("Your Matrix : \n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int temp=arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=temp;
        }
    }
    printf("Transpose Matrix : \n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n/2;j++){
            int temp=arr[i][j];
            arr[i][j]=arr[i][n-1-j];
            arr[i][n-1-j]=temp;
        }
    }
    printf("Rotated Matrix : \n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}