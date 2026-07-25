#include <stdio.h>
int main(){
    FILE* ptr1=fopen("test.txt","r"); // function to open test.txt file in read mode
    FILE* ptr2=fopen("testCopy.txt","w"); // function to open test.txt file in write mode
    char ch;
    while((ch=fgetc(ptr1))!=EOF){ // getting each character and putting in new file
        fputc(ch,ptr2);
    }
    // closing the files
    fclose(ptr1);
    fclose(ptr2);
    return 0;
}