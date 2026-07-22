#include <stdio.h>
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    int nstr=1,nsp=n/2;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=nsp;j++){
            printf("  ");
        }
        for(int k=1;k<=nstr;k++){
            printf("* ");
        }
        if(i<(n/2+1)){
            nsp--;
            nstr+=2;
        }
        else{
            nsp++;
            nstr-=2;
        }
        printf("\n");
    }
    return 0;
}