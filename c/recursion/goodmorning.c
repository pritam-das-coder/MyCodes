// Print "Good Morning" n times
#include <stdio.h>
void greetings(int n){
    if(n==0) return;
    printf("Good Morning\n");
    greetings(n-1);
    return;
}
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    greetings(n);
    return 0;
}