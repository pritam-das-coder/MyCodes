#include <stdio.h>
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1,a=1;j<=i;j++,a+=2)
            printf("%d ",a);
        printf("\n");
    }
    return 0;
}