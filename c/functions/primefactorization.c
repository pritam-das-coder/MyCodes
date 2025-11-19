#include <stdio.h>
void primefact(int n){
    for(int i=2;n!=1;){
        if(n%i==0){
            printf("%d ",i);
            n=n/i;
        }
        else{
            i++;
        }
    }
}
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    primefact(n);
    return 0;
}