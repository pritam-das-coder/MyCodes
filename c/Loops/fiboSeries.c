//  Print first ‘n’ fibonacci numbers
#include <stdio.h>
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    int a=1,b=1,c=0;
    for(int i=1;i<=n;i++){
        c=a+b;
        printf("%d ",a);
        a=b;
        b=c;
    }
    return 0;
}