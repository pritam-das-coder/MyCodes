#include <stdio.h>
int fact(int n){ // finding factorial of n
    if(n==0) return 1;
    return n*fact(n-1);
}
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    printf("%d! = %d",n,fact(n));
    return 0;
}