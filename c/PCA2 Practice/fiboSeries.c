// Q19
#include <stdio.h>
#include <stdlib.h>
int fibo(int n){
    if(n<=2) return 1;
    return fibo(n-1)+fibo(n-2);
}
int main(){
    int n;
    printf("Enter the number of terms : ");
    scanf("%d",&n);
    if(n<=0){
        printf("Number of terms should be a natural no.");
        exit(EXIT_FAILURE);
    }
    for(int i=1;i<=n;i++){
        printf("%d ",fibo(i));
    }
    return 0;
}