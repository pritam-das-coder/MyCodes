#include <stdio.h>
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    int c=1;
    for(int i=1;i<=2*n-1;i++){
        printf("%d",c);
        if(i<n) c++;
        else c--;
    }
    printf("\n");
    int m=n-1;
    int nst=m,nsp=1;
    for(int i=1;i<=m;i++){
        c=1;
        for(int j=1;j<=nst;j++){
            printf("%d",c);
            c++;
        }
        for(int k=1;k<=nsp;k++){
            printf(" ");
        }
        for(int j=1;j<=nst;j++){
            c--;
            printf("%d",c);
        }
        nst--;
        nsp+=2;
        printf("\n");
    }
    return 0;
}