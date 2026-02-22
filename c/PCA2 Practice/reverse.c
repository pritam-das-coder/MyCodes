#include <stdio.h>
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    int rev=0;
    for(int i=n;i>0;i/=10){
        int d=i%10;
        rev=rev*10+d;
    }
    printf("The reverse of %d is %d\n",n,rev);
    if(rev==n)
        printf("%d is palindrome",n);
    else
        printf("%d is not palindrome",n);
    return 0;
}