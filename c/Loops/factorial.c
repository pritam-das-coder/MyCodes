// Print the factorial of a given number ‘n’.
#include <stdio.h>
int main(){
    int n,fact=1;
    printf("Enter a number : ");
    scanf("%d",&n);
    if(n<0){
        printf("Enter a non-negative number");
        return 0;
    }
    for(int i=1;i<=n;i++){
        fact*=i;
    }
    printf("The factorial of %d is %d",n,fact);
    return 0;
}