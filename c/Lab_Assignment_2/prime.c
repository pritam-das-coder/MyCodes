// 6. Write a Program in C to check whether a number is Prime or not. 
#include <stdio.h>
#include <stdbool.h>
int main(){
    int n;
    bool flag=true;
    printf("Enter a number : ");
    scanf("%d",&n);
    for(int i=2;i<n;i++){
        if(n%i==0){
            flag=false;
            break;
        }
    }
    if(n==1)
        printf("1 is neither prime nor composite");
    else if(flag==true)
        printf("%d is prime",n);
    else
        printf("%d is composite",n);
    return 0;
}