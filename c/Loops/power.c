// Two numbers are entered through the 
// keyboard. Write a program to find the value of one 
// number raised to the power of another.
#include <stdio.h>
int main(){
    int a,b,result=1;
    printf("Enter the exponent : ");
    scanf("%d",&a);
    printf("Enter the base : ");
    scanf("%d",&b);
    for(int i=1;i<=a;i++){
        result*=b;
    }
    printf("%d raised to the power of %d is %d",a,b,result);
    return 0;
}