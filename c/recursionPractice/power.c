// Make a function which calculates ‘a’ 
// raised to the power ‘b’ using recursion.
#include <stdio.h>
int power(int a,int b){
    if(b==0) return 1;
    int x=power(a,b/2);
    if(b%2==0)
        return x*x;
    else
        return x*x*a;
}
int main(){
    int a;
    printf("Enter base : ");
    scanf("%d",&a);
    int b;
    printf("Enter exponent : ");
    scanf("%d",&b);
    printf("%d",power(a,b));
    return 0;
}