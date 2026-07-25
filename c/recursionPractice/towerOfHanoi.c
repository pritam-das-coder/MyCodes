#include <stdio.h>
void path(int n,char s,char h,char d){
    if(n==0) return;
    path(n-1,s,d,h);
    printf("%c -> %c\n",s,d);
    path(n-1,h,s,d);
    return;
}
int main(){
    int n;
    printf("Enter number of discs : ");
    scanf("%d",&n);
    path(n,'A','B','C');
    return 0;
}