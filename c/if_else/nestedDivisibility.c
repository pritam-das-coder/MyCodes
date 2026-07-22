// Take positive integer input and tell if it is divisible by 5 or 3 but not divisible by 15.
#include<stdio.h>
int main(){
    int n;
    printf("Enter +ve integer : ");
    scanf("%d",&n);
    if(n%5==0 || n%3==0){
        if(n%15==0){
            printf("Divisible by 5 or 3 and divisible by 15");
        }
        else{
            printf("Divisible by 5 or 3 but not divisible by 15");
        }
    }
    else{
        printf("Not divisible by 5 or 3");
    }
    return 0;
}