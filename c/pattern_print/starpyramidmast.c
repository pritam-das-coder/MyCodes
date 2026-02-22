#include <stdio.h>
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    for(int i=1;i<=2*n-1;i++){
        printf("*");
    }
    printf("\n");
    int m=n-1;
    int nst=m,nsp=1;
    for(int i=1;i<=m;i++){
        for(int j=1;j<=nst;j++){
            printf("*");
        }
        for(int k=1;k<=nsp;k++){
            printf(" ");
        }
        for(int l=1;l<=nst;l++){
            printf("*");
        }
        nst--;
        nsp+=2;
        printf("\n");
    }
    return 0;
}