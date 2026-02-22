#include <stdio.h>
#include <stdlib.h>
int main(){
    int* ptr=(int*)calloc(10,4);
    printf("%u\n",ptr);
    *ptr=3;
    ptr=(int*)realloc(ptr,100*4);
    //ptr=(int*)calloc(15,4);
    printf("%u\n",ptr);
    printf("%d\n",*ptr);
    free(ptr);
    ptr=NULL;
    return 0;
}