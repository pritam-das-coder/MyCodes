#include <stdio.h>
#include <string.h>
int main(){
    char s1[50],s2[50];
    puts("Enter first string : ");
    gets(s1);
    int l1=strlen(s1);
    puts("Enter second string : ");
    gets(s2);
    int l2=strlen(s2);
    char str[100];
    for(int i=0;i<100;i++){
        str[i]='\0';
    }
    int c=0;
    for(int i=0;i<l1;i++){
        str[c]=s1[i];
        c++;
    }
    for(int i=0;i<l2;i++){
        str[c]=s2[i];
        c++;
    }
    printf("Required String : %s",str);
    return 0;
}