// A positive integer is entered through the keyboard. Write a function to obtain the prime 
// factors of this number.
#include <stdio.h>
#include <stdbool.h>
bool prime(int n){
    int c=0;
    for(int i=1;i<=n;i++){
        if(n%i==0) c++;
    }
    if(c==2) return true;
    else return false;
}
void primeFactor(int n){
    for(int i=1;i<=n;i++){
        if(n%i==0 && prime(i)==true){
            printf("%d ",i);
        }
    }
}
int main(){
    int n;
    printf("Enter a number : ");
    input:
    scanf("%d",&n);
    if(n<0){
        printf("Enter a positive integer : ");
        goto input;
    }
    printf("Prime Factors are :\n");
    primeFactor(n);
    return 0;
}