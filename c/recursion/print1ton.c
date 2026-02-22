// Print 1 to n
#include <stdio.h>
void printNos(int n){
    if(n==0) return;
    printNos(n-1);
    printf("%d\n",n);
    return;
}
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    printNos(n);
    return 0;
}