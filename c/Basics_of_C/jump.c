// Infinite loop in while/ do while but finite loop in for loop
#include<stdio.h>
int main(){
    int i=1;
    // while (i<=10)
    // {
    //     printf("Name");
    //     if(i>4) continue;
    //     //printf("Name");
    //     i=i+2;
    // }
    // for(;i<=10;i+=2){
    //     printf("Name\n");// 1 3 5 7 9
    //     if(i>4) continue;
    //     printf("Box\n");// 1 3
    // }
    do{
        printf("Name");
        if(i>4) continue;
        i=i+2;
    }while(i<=10);
}