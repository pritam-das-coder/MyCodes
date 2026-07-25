#include <stdio.h>
int main(){
    printf("Enter a number : ");
    int n;
    scanf("%d",&n);
    if(n%5==0){
        printf("Divisible by 5");
    }
    else{
        printf("Not divisible by 5");
    }
    return 0;
}