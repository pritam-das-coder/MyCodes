// Write a program to print the row 
// number having the maximum sum in a given 
// matrix & the max sum.
#include <stdio.h>
#include <limits.h>
int main(){
    int n,m;
    printf("Enter number of rows : ");
    scanf("%d",&n);
    printf("Enter number of columns : ");
    scanf("%d",&m);
    int arr[n][m];
    for(int i=0;i<n;i++){
        printf("Enter elements of row %d : ",i);
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
    int max=INT_MIN,idx=INT_MIN;
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=0;j<m;j++){
            sum+=arr[i][j];
        }
        if(max<sum){
            max=sum;
            idx=i;
        }
    }
    printf("Row number having max sum is %d and max sum is %d",idx,max);
    return 0;
}