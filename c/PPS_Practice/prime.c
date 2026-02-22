#include <stdio.h>
int main(){
    int n=10,c=0;
    for(int i=1;i<=n;i++){
        if(n%i==0) c++;
    }
    if(c==2)
        printf("%d is prime",n);
    else if(c==1)
        printf("%d is neither prime nor composite",n);
    else
        printf("%d is composite",n);
    return 0;
}