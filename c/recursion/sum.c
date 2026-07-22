// Print sum from 1 to n (Return Type)
#include <stdio.h>
int add(int n){
    if(n==0) return 0;
    return n+add(n-1);
}
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    printf("%d",add(n));
    return 0;
}