#include <stdio.h>
int len(char[]);
int main(){
    char s[100];
    printf("Enter a string : \n");
    //gets(s);
    scanf("%[^\n]",s);
    printf("The length of given string is %d",len(s));
    return 0;
}
int len(char s[]){
    int i=0;
    while(s[i]!='\0'){
        i++;
    }
    return i;
}