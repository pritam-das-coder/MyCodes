// 1 2 3    
// 4 5 6 -> 1 2 3 6 5 4 7 8 9
// 7 8 9    
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
    printf("Wave Matrix :\n");
    for(int i=0;i<n;i++){
        if(i%2==0){
            for(int j=0;j<m;j++)
                printf("%d ",arr[i][j]);
        }
        else{
            for(int j=m-1;j>=0;j--)
                printf("%d ",arr[i][j]);
        }
        // printf("\n");
    }
    return 0;
}