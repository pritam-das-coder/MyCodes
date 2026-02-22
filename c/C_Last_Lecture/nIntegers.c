#include <stdio.h>
#include <stdlib.h>
int main(){
    int n;
    printf("Enter number of integers : ");
    scanf("%d",&n);
    int* ptr=(int*) malloc(n*sizeof(int));//
    int* p=ptr;
    printf("%p\n",ptr);
    //printf("%p %p\n",p,ptr);
    for(int i=1;i<=n;i++){
        scanf("%d",&(*p));
        p++;
    }
    p=ptr;
    for(int i=1;i<=n;i++){
        printf("%d ",*p);
        p++;
    }
    printf("\n");
    free(ptr);
    ptr=NULL;
    printf("%p\n",ptr);
    //printf("%d\n",*ptr);
    return 0;
}