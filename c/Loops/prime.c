// WAP to check if a number is prime or not.
#include <stdio.h>
#include <stdbool.h>
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    // int c=0;
    // for(int i=1;i<=n;i++){
    //     if(n%i==0)
    //     c++;
    // }
    // if(c==2)
    // printf("%d is a prime number ",n);
    // else
    // printf("%d is not a prime number ",n);
    bool flag=true; // prime
    for(int i=2;i<=(n-1);i++){
        if(n%i==0){
            flag=false; // composite
            break;
        }
    }
    if(n==1)
    printf("%d is neither prime nor composite number",n);
    else if(flag==true)
    printf("%d is a prime number",n);
    else
    printf("%d is a composite number",n);
    return 0;
}