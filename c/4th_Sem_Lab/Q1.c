// Tower of Hanoi
#include <stdio.h>
void toh(int n,char s,char h,char d){
    if(n==1){
        printf("%c -> %c\n",s,d);
        return;
    }
    toh(n-1,s,d,h);
    printf("%c -> %c\n",s,d);
    toh(n-1,h,s,d);
}
int main(){
    int n;
    printf("Enter no. of discs : ");
    scanf("%d",&n);
    toh(n,'A','B','C');
}