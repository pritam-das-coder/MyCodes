#include <stdio.h>
#include <stdbool.h>
int main(){
    int n;
    printf("Enter no. of rows or columns : ");
    scanf("%d",&n);
    int arr[n][n];
    puts("Enter all elements of matrix : ");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    bool flag=true;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[i][j]!=arr[j][i]){
                flag=false;
                break;
            }
        }
    }
    if(flag)
        printf("Symmetrical Matrix");
    else
        printf("Not Symmetrical Matrix");
    return 0;
}