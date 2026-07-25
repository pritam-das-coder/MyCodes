//  Print first ‘n’ fibonacci numbers.
#include <stdio.h>
void fibo(int n){
    int a=1,b=1,c=0;
    for(int i=1;i<=n;i++){
        printf("%d ",a);
        c=a+b;
        a=b;
        b=c;
    }
}
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    fibo(n);
    return 0;
}