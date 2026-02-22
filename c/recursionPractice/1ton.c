// Print 1 to n using recursion
#include <stdio.h>
// void increase(int n){
//     if(n==0) return;
//     increase(n-1);
//     printf("%d\n",n);
//     return;
// }
void increase(int x,int n){
    if(x>n) return;
    printf("%d\n",x);
    increase(x+1,n);
    return;
}
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    // increase(n);
    increase(1,n);
    return 0;
}