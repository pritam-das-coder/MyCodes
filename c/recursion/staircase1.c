#include <stdio.h>
int stepCount(int n){
    if(n==1) return 1;
    if(n==2) return 2;
    return stepCount(n-1)+stepCount(n-2);
}
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    printf("%d",stepCount(n));
    return 0;
}