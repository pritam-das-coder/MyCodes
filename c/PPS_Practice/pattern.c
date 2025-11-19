#include <stdio.h>
int main(){
    int n;
    printf("Enter the number of rows : ");
    scanf("%d",&n);
    printf("*\n");
    int c=2;
    for(int i=1;i<n;i++){
        for(int j=1;j<=c;j++){
            printf("*");
        }
        c+=2;
        printf("\n");
    }
    return 0;
}