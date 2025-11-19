#include <stdio.h>
int power(int a,int b){
    int r=1;
    for(int i=1;i<=b;i++){
        r*=a;
    }
    return r;
}
int isArmstrong(int n){
    int c=0;
    for(int i=n;i>0;i/=10){
        c++;
    }
    int s=0;
    for(int i=n;i>0;i/=10){
        int d=i%10;
        s+=power(d,c);
    }
    return (s==n);
}
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    if(isArmstrong(n))
        printf("%d is Armstrong Number",n);
    else
        printf("%d is not Armstrong Number",n);
    return 0;
}