#include <stdio.h>
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    int a=1,s=n-1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=s;j++){
            printf("  ");
        }
        s--;
        for(int k=1;k<=a;k++){
            printf("* ");
        }
        a+=2;
        printf("\n");
    }
    return 0;
}