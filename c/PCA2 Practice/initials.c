#include <stdio.h>
#include <string.h>
int main(){
    char str[50];
    puts("Enter a string : ");
    gets(str);
    strcat(str," ");
    int l=strlen(str);
    // str[l]=' ';
    // str[l+1]='\0';
    // l++;
    
    int k=0;
    for(int i=0;i<l;i++){
        if(str[i]==' '){
            printf("%c",str[k]);
            k=i+1;
        }
    }
    return 0;
}