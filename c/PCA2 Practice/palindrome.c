#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>
int main(){
    char str[50];
    puts("Enter a string : ");
    gets(str);
    int l=strlen(str);
    int i=0,j=l-1;
    bool flag=true;
    while(i<j){
        if(str[i]!=str[j]){
            flag=false;
            printf("%s is not palindrome",str);
            break;
        }
        i++;
        j--;
    }
    if(flag)
        printf("%s is palindrome",str);
    return 0;
}