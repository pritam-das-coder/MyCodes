#include <stdio.h>
int main(){
    int n=14541,rev=0;
    for(int i=n;i>0;i/=10){
        int d=i%10;
        rev=rev*10+d;
    }
    if(n==rev)
        printf("%d is palindrome",n);
    else
        printf("%d is not palindrome",n);
    return 0;
}