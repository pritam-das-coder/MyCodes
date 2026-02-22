// Print the sum of this series : 1 - 2 + 3 - 4 + 5 - 6… upto ‘n’.
#include <stdio.h>
#include <math.h>
int main(){
    int n,sum=0;
    printf("Enter a number : ");
    scanf("%d",&n);
    // for(int i=1;i<=n;i++){
    //     sum+=pow(-1,i+1)*i;
    // }
    if(n%2==0)
        sum=(-1)*(n/2);
    else
        sum=(-1)*(n/2)+n;
    printf("The reqd. sum = %d",sum);
    return 0;
}