#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
int main(){
    // int x=3;
    // while(x>0){
    //     fork();
    //     printf("Hello\n");
    //     wait(NULL);
    //     x--;
    // }
    if(fork()){
        fork();
    }
    printf("*\n");
    return 0;
}