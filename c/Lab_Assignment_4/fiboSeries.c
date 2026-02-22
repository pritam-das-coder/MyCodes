#include <stdio.h>
int fibo(int n){ // function to find nth term of fibonacci series
    if(n<=2) return 1;
    int x=fibo(n-1)+fibo(n-2);
    return x;
}
int main(){
    int n;
    printf("Enter the number of terms : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        printf("%d ",fibo(i));
    }
    return 0;
}