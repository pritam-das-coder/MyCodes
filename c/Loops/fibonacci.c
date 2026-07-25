// Print the nth fibonacci number.
#include <stdio.h>
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    int a=1,b=1,c=0;
    for(int i=1;i<=(n-1);i++){
        c=a+b;
        a=b;
        b=c;
    }
    printf("%dth fibonacci number is %d",n,a);
    return 0;
}