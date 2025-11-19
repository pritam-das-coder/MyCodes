#include <stdio.h>
#include <stdbool.h>
int main(){
    int n;
    printf("Enter size of string : ");
    scanf("%d",&n);
    char ch;
    scanf("%c",&ch);
    char str[n];
    printf("Enter a string : ");
    gets(str);
    bool flag=true;
    for(int i=0;i<n;i++){
        if(str[i]!=str[n-1-i]){
            flag=false;
            break;
        }
    }
    if(flag==true)
        printf("Palindrome");
    else
        printf("Not Palindrome");
    return 0;
}