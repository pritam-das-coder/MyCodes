#include <stdio.h>
#include <stdlib.h>
int main(){
    // int* ptr=calloc(10,4);
    // int* p=ptr;
    char* ptr=(char*)malloc(10);
    char* p=ptr;
    printf("%u\n",ptr);
    // ptr++;
    // printf("%u\n",ptr);
    for(int i=1;i<=10;i++){
        scanf("%d",&(*p));
        p++;
    }
    p=ptr;
    for(int i=1;i<=10;i++){
        printf("%d\n",*p);
        p++;
    }
    // printf("\n%u\n",p);
    //char* ptr=malloc(50);
    //char* ptr=(char*)calloc(50,1);
    // char* p=ptr;
    // *p='P';
    // printf("%u\n",ptr);
    // ptr++;
    // printf("%u",ptr);
    free(ptr);
    printf("%u\n",ptr);
    return 0;
}