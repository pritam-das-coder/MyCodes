#include <stdio.h>
#include <string.h>
int main(){
    char str[20]="College";
    int p=0;
    char ch='A';
    for(int i=strlen(str)-1;i>=p;i--){
        str[i+1]=str[i];
    }
    str[p]=ch;
    puts(str);
    return 0;
}