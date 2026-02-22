// Given a positive integer n, generate a n x n 
// matrix filled with elements from 1 to n2 in spiral order.
#include <stdio.h>
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    int arr[n][n];
    int minr=0,maxr=n-1,minc=0,maxc=n-1;
    int tne=n*n,count=0;
    int k=1;
    while(tne>count){
        for(int j=minc;j<=maxc && tne>count;j++){
            arr[minr][j]=k++;
            count++;
        }
        minr++;
        for(int i=minr;i<=maxr && tne>count;i++){
            arr[i][maxc]=k++;
            count++;
        }
        maxc--;
        for(int j=maxc;j>=minc && tne>count;j--){
            arr[maxr][j]=k++;
            count++;
        }
        maxr--;
        for(int i=maxr;i>=minr && tne>count;i--){
            arr[i][minc]=k++;
            count++;
        }
        minc++;
    }
    printf("Resultant Matrix :\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}