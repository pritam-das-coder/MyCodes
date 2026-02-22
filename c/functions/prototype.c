#include <stdio.h>
void england(){
    printf("You are in England\n");
}
int main(){
    void india();
    india();
    return 0;
}
void australia();
void india(){
    printf("You are in India\n");
    australia();
}
void australia(){
    printf("You are in Australia\n");
    england();
}