#include <stdio.h>
#include <string.h>
int main(){
    char s1[100],s2[50];
    printf("Enter the first string : ");
    gets(s1);
    printf("Enter the second string : ");
    gets(s2);
    int l=strlen(s1);
    for(int i=0;i<strlen(s2);i++){
        s1[l+i]=s2[i];
    }
    s1[l+strlen(s2)]='\0';
    printf("Required string is %s",s1);
    return 0;
}