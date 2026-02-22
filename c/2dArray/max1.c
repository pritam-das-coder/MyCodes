// Given a matrix having 0-1 only, find the 
// row with the maximum number of 1’s.
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
    int max1=-1,idx=-1;
    for(int i=0;i<n;i++){
        int c=0;
        for(int j=0;j<m;j++){
            if(arr[i][j]==1)
            c++;
        }
        if(max1<c){
            max1=c;
            idx=i;
        }
    }
    printf("Row with maximum no. of 1 is %d",idx);
    return 0;
}