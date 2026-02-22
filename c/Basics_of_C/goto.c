#include <stdio.h>
int main(){
    int n;
    printf("Enter a number : ");
    input:
    scanf("%d",&n);
    if(n<0){
        printf("Enter a non-negative number : ");
        goto input;
    }
    int f=1;
    for(int i=1;i<=n;i++){
        f*=i;
    }
    printf("%d\n",f);
    return 0;
}