#include <stdio.h>
#include <math.h>
int fact(int n){
    if(n==1) return 1;
    return n*fact(n-1);
}
int main(){
    int n;
    printf("Enter number of terms : ");
    scanf("%d",&n);
    float x;
    printf("Enter angle in radian : ");
    scanf("%f",&x);
    int c=1;
    float sum=0;
    for(int i=1;i<=n;i++){
        sum+=pow(-1,i+1)*pow(x,c)/fact(c);
        c+=2;
    }
    printf("sin(%f) = %f",x,sum);
    return 0;
}