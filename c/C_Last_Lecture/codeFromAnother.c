#include <stdio.h>
int main(){
    FILE* ptr=fopen("me.txt","a");
    char str[100]="I am Pritam from KGEC.";
    fputs(str,ptr);
    fclose(ptr);
    return 0;
}