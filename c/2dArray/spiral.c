// 1 2 3
// 4 5 6 -> 1 2 3 6 9 8 7 4 5
// 7 8 9
#include <stdio.h>
int main(){
    int r,c;
    printf("Enter number of rows : ");
    scanf("%d",&r);
    printf("Enter number of columns : ");
    scanf("%d",&c);
    int arr[r][c];
    printf("Enter all elements of array : \n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("Your Matrix : \n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    // spiral print
    int minr=0;
    int maxr=r-1;
    int minc=0;
    int maxc=c-1;
    int tne=r*c,count=0;
    printf("SPIRAL PRINT : \n");
    while(1){
        // minimum row forward print
        for(int j=minc;j<=maxc && tne>count;j++){
            printf("%d ",arr[minr][j]);
            count++;
        }
        minr++;
        // maximum column forward print
        for(int i=minr;i<=maxr && tne>count;i++){
            printf("%d ",arr[i][maxc]);
            count++;
        }
        maxc--;
        // maximum row backward print
        for(int j=maxc;j>=minc && tne>count;j--){
            printf("%d ",arr[maxr][j]);
            count++;
        }
        maxr--;
        // minimum column backward print
        for(int i=maxr;i>=minr && tne>count;i--){
            printf("%d ",arr[i][minc]);
            count++;
        }
        minc++;
    }
    return 0;
}