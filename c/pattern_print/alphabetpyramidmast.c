#include <stdio.h>
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    for(int i=1;i<=2*n-1;i++){
        printf("%c",i+64);
    }
    printf("\n");
    int m=n-1;
    int nst=m,nsp=1;
    for(int i=1;i<=m;i++){
        int c=1;
        for(int j=1;j<=nst;j++){
            printf("%c",c+64);
            c++;
        }
        for(int k=1;k<=nsp;k++){
            printf(" ");
            c++;
        }
        for(int j=1;j<=nst;j++){
            printf("%c",c+64);
            c++;
        }
        nst--;
        nsp+=2;
        printf("\n");
    }
    return 0;
}