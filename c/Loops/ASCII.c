// Write a program to print all the ASCII values 
// and their equivalent characters of 26 alphabets 
// using a while loop. (Capital case)
#include <stdio.h>
int main(){
    int i=65;
    while(i<=90){
        printf("%c -> %d\n",i,i);
        i++;
    }
    return 0;
}