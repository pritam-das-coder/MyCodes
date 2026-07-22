#include <stdio.h>
#include <string.h>
int main(){
    FILE* ptr=fopen("me.txt","r");
    char str[9];
    while(fgets(str,9,ptr)!=NULL){
        //puts(str);
        printf("%s",str);
    }
    // FILE* ptr=fopen("test.txt","w");
    // char str[50]="I am GOAT\nDon't mess with me";
    // fputs(str,ptr);
    // fclose(ptr);
    return 0;
}