#include <stdio.h>
int main(){
    char str[]="WXYZ";
    for(int i=0;i<=3;i++){
        for(int j=i;j<=2;j++)
        printf(" ");
        for(int k=0;k<=i;k++)
        printf("%c ",str[k]);
        printf("\n");
    }
    for(int i=0;i<=2;i++){
        for(int j=i;j>=0;j--)
        printf(" ");
        for(int k=2;k>=i;k--)
        printf("%c ",str[2-k]);
        printf("\n");
    }
    return 0;
}