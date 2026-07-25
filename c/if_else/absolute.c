#include <stdio.h>
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    if(n<0){
        n=-n;
    }
    printf("Absolute value = %d",n);
    return 0;
}