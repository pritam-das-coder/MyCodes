// Make a function which calculates ‘a’ raised to the power ‘b’ using recursion.
#include <stdio.h>
int power(int a,int b){
    if(b==0) return 1;
    return a*power(a,b-1);
}
int main(){
    int a,b;
    printf("Enter base : ");
    scanf("%d",&a);
    printf("Enter exponent : ");
    scanf("%d",&b);
    float res=0;
    if(b<0){
        res=1.0/power(a,-b);
    }
    else{
        res=power(a,b);
    }
    printf("%d raised to power %d is %f",a,b,res);
    return 0;
}