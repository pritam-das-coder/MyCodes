#include <stdio.h>
#include <stdlib.h>
int main(){
    printf("Enter name of file to be opened : ");
    char str[50];
    gets(str);
    FILE* ptr=fopen(str,"r");
    if(ptr==NULL){
        printf("Couldn't open given file.");
        exit(EXIT_FAILURE);
    }
    int words=0,characters=0;
    char ch;
    while((ch=fgetc(ptr))!=EOF){
        characters++;
        if(ch==' ' || ch=='\n') words++;
    }
    words=words+1;
    printf("Number of words : %d\n",words);
    printf("Number of characters : %d\n",characters);
    fclose(ptr);
    return 0;
}