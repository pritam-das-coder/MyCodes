#include <stdio.h>
#include <string.h>
int main(){
    printf("START\n");
    char s1[15];
    gets(s1);
    int size=0;
    int i=0;
    while(s1[i]!='\0'){
        size++;
        i++;
    }
    char s2[size];
    for(int k=0;k<size;k++){
        s2[k]=s1[k];
    }
    printf("%s\n",s1);
    printf("%s\n",s2);
    s1[0]='J';
    printf("%s\n",s1);
    printf("%s\n",s2);
    return 0;
}