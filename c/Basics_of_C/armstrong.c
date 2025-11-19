#include<stdio.h>
int power(int b,int e){
    int result=1;
    for(int i=1;i<=e;i++){
        result*=b;
    }
    return result;
}
int main(){
    int n=1741725;
    int c=0;// no. of digits
    for(int i=n;i>0;i/=10){
        c++;
    }
    int sum=0;
    for(int i=n;i>0;i/=10){
        int d=i%10;
        sum+=power(d,c);
    }
    if(sum==n){
        printf("Armstrong Number");
    }
    else{
        printf("Not Armstrong Number");
    }
    return 0;
}