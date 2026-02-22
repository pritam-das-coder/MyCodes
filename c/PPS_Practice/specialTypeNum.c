#include <stdio.h>
#include <stdbool.h>
int reverse(int n){
    int rev=0;
    for(int i=n;i>0;i/=10){
        int d=i%10;
        rev=rev*10+d;
    }
    return rev;
}
bool check(int n){
    int n1=reverse(n)*reverse(n);
    int n2=n*n;
    if(n2==reverse(n1)||reverse(n2)==n1)
        return true;
    else
        return false;
}
int main(){
    int c=0;
    for(int i=10;i<=100;i++){
        if(check(i)){
            c++;
            printf("%d ",i);
        }
    }
    if(c==0)
        printf("No such type of numbers found");
    else
        printf("are such type of numbers found");
    return 0;
}