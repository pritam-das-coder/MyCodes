#include <stdio.h>
void pip(int n){
    if(n==0) return;
    printf("%d",n); // pre
    pip(n-1);
    printf("%d",n); // in
    pip(n-1);
    printf("%d",n); // post
    return;
}
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    pip(n);
    return 0;
}