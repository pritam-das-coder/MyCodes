#include <stdio.h>
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        char ch='A';
        for(int j=1;j<=n;j++){
            printf("%c ",ch);
            ch++;
        }
        printf("\n");
    }
    return 0;
}