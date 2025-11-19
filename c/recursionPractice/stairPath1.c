#include <stdio.h>
int ways(int n){
    if(n==1 || n==2) return n;
    return ways(n-1)+ways(n-2);
}
int main(){
    int n;
    printf("Enter number of stairs : ");
    scanf("%d",&n);
    printf("%d",ways(n));
    return 0;
}