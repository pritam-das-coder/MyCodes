// Write a program to rotate a matrix 90° clockwise.
#include <stdio.h>
int main(){
    int n,m;
    printf("Enter number of rows : ");
    scanf("%d",&n);
    printf("Enter number of columns : ");
    scanf("%d",&m);
    int arr[n][m];
    printf("Enter all elements of array : \n");
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("Your Matrix : \n");
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    int transpose[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            transpose[i][j]=arr[j][i];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n/2;j++){
            int temp=transpose[i][j];
            transpose[i][j]=transpose[i][n-1-j];
            transpose[i][n-1-j]=temp;
        }
    }
    printf("Rotated Matrix : \n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("%d ",transpose[i][j]);
        }
        printf("\n");
    }
    return 0;
}