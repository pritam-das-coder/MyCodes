#include <stdio.h>
int main(){
    int n;
    printf("Enter size of string : ");
    scanf("%d",&n);
    char ch;
    scanf("%c",&ch);
    char str[n+1];
    printf("Enter a string : ");
    gets(str);
    for(int i=n;i>=0;i--){
        printf("%c",str[i]);
    }
    return 0;
}