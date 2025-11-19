// Take positive integer input and tell if it 
// is a three digit number or not.
#include <stdio.h>
int main(){
    printf("Enter a positive integer : ");
    int n;
    scanf("%d",&n);
    // if(n>=100 && n<=999){
    //     printf("%d is a three digit number ",n);
    // }
    // else{
    //     printf("%d is not a three digit number",n);
    // }
    printf((n>=100 && n<=999) ? "%d is a three digit number" : 
    "%d is not a three digit number",n);
    return 0;
}