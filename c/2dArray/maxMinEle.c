// Find out max and min element in 2D array. Also find their position.
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
    printf("Your Array : \n");
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    int max=arr[0][0],min=arr[0][0];
    int max_X=0,max_Y=0,min_X=0,min_Y=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(max<arr[i][j]){
                max=arr[i][j];
                max_X=i;
                max_Y=j;
            }
            if(min>arr[i][j]){
                min=arr[i][j];
                min_X=i;
                min_Y=j;
            }
        }
    }
    printf("The max element is %d and its position is (%d,%d).\n",max,max_X,max_Y);
    printf("The min element is %d and its position is (%d,%d).\n",min,min_X,min_Y);
    return 0;
}