#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main(){
    char str[100];
    puts("Enter the text : ");
    //fgets(str,sizeof(str),stdin);
    //scanf("%[^\n]",&str);
    gets(str);
    int key;
    puts("Enter the code number : ");
    scanf("%d",&key);
    key=key%26;
    char s[100];
    int i=0;
    for(;i<strlen(str);i++){
        char ch=str[i];
        char x=ch+key;
        if(isupper(ch)){
            if(x>=65 && x<=90)
                s[i]=x;
            else
                s[i]=ch-(26-key);
        }
        else if(islower(ch)){
            if(x>=97 && x<=122)
                s[i]=x;
            else
                s[i]=ch-(26-key);
        }
        else{
            s[i]=ch;
        }
    }
    s[i]='\0';
    puts(s);
    return 0;
}