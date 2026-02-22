#include <stdio.h>
#include <stdlib.h>
int main(int argc,char* argv[]){
    printf("Total number of argument passed: %d\n",argc);
    FILE* fptr1=fopen(argv[1],"r");
    FILE* fptr2=fopen(argv[2],"r");
    FILE* fptr3=fopen(argv[3],"w");
    char ch;
    if(fptr1==NULL || fptr2==NULL || fptr3==NULL){
        puts("\nCould not open files");
        exit(EXIT_FAILURE);
    }
    while((ch=fgetc(fptr1))!=EOF){
        fputc(ch,fptr3);
    }
    while((ch=fgetc(fptr2))!=EOF){
        fputc(ch,fptr3);
    }
    puts("Files file1.txt and file2.txt are merged into file3.txt");
    fclose(fptr1);
    fclose(fptr2);
    fclose(fptr3);
    return 0;
}