#include <stdio.h>
int main(){
    printf("Enter a positive integer : ");
    int n;
    scanf("%d",&n);
    // if(n%2==0)
    // printf("%d is an even number",n);
    // else
    // printf("%d is an odd number",n);
    //n%2==0 ? printf("%d is an even number",n) : printf("%d is an odd number",n) ;
    printf(n%2==0 ? "%d is an even number" : "%d is an odd number",n);
    return 0;
}