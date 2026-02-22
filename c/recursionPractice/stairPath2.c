#include <stdio.h>
int ways(int n){
    if(n<=2) return n;
    if(n==3) return 4;
    return ways(n-1)+ways(n-2)+ways(n-3);
}
int main(){
    int n;
    printf("Enter number of stairs : ");
    scanf("%d",&n);
    printf("%d",ways(n));
    return 0;
}