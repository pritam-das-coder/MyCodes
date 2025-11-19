// Print sum from 1 to n (Parameterised)
#include <stdio.h>
void add(int n,int s){
    if(n==0){
        printf("%d",s);
        return;
    }
    add(n-1,s+n);
    return;
}
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    add(n,0);
    return 0;
}