// Given a matrix ‘a’ of dimension n x m and 2 
// coordinates (l1, r1) and (l2, r2). Return the sum of 
// the rectangle from (l1,r1) to (l2, r2).
#include <stdio.h>
int main(){
    int a[2][3]={1,2,3,4,5,6};
    int l1,r1,l2,r2,sum=0;
    printf("Enter l1 : ");
    scanf("%d",&l1);
    printf("Enter r1 : ");
    scanf("%d",&r1);
    printf("Enter l2 : ");
    scanf("%d",&l2);
    printf("Enter r2 : ");
    scanf("%d",&r2);
    for(int i=l1;i<=l2;i++){
        for(int j=r1;j<=r2;j++){
            sum+=a[i][j];
        }
    }
    printf("%d",sum);
    return 0;
}