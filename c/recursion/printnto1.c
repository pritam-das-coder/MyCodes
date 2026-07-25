// Print n to 1
#include <stdio.h>
void printNos(int n){
    if(n==0) return;
    printf("%d\n",n);
    printNos(n-1);
    return;
}
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    printNos(n);
    return 0;
}