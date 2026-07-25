#include <stdio.h>
#include <stdbool.h>
int main(){
    int n;
    printf("Enter the no. of lines : ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int s=1;s<=(n-1-i);s++){
            printf(" ");
        }
        int x=1;
        for(int j=0;j<=i;j++){
            printf("%d ",x);
            x=(1.0*(i-j)/(j+1))*x;
        }
        printf("\n");
    }
    return 0;
}