// Write a function to compute the greatest common divisor of two given numbers
#include <stdio.h>
int minimum(int a,int b){
    if(a<b) return a;
    else return b;
}
int hcf(int a,int b){
    int ans;
    for(int i=1;i<=minimum(a,b);i++){
        if(a%i==0 && b%i==0)
            ans=i;
    }
    return ans;
}
int main(){
    int a,b;
    printf("Enter 1st number : ");
    scanf("%d",&a);
    printf("Enter 2nd number : ");
    scanf("%d",&b);
    int gcd=hcf(a,b);
    printf("%d",gcd);
    return 0;
}