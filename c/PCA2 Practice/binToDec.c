// Q18
#include <stdio.h>
int main(){
    int n;
    printf("Enter a binary number : ");
    scanf("%d",&n);
    int f=1,dec=0;
    for(int i=n;i>0;i/=10){
        int d=i%10;
        dec+=d*f;
        f*=2;
    }
    printf("The equivalent decimal no. of %d is %d",n,dec);
    return 0;
}