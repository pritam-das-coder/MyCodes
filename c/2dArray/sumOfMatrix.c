// Find the sum of a given matrix of n x m.
#include <stdio.h>
int main(){
    int n,m;
    printf("Enter number of rows : ");
    scanf("%d",&n);
    printf("Enter number of columns : ");
    scanf("%d",&m);
    int arr[n][m];
    for(int i=0;i<n;i++){
        printf("Enter elements of row %d : ",i+1);
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
    int sum=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            sum+=arr[i][j];
        }
    }
    printf("The required sum is %d.",sum);
    return 0;
}