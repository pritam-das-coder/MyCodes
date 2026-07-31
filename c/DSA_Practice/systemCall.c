#include <stdio.h>
// #include <unistd.h>
// #include <sys/wait.h>
int main(){
    int x=3;
    while(x>0){
        CreateProcess();
        printf("Hello\n");
        WaitForSingleObject(NULL);
        x--;
    }
    return 0;
}