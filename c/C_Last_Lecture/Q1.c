#include <stdio.h>
#include <stdlib.h>
int main(){
    int n;
    printf("Enter a no. : ");
    scanf("%d",&n);
    int* ptr=(int*)calloc(n,4);
    int* p=ptr;
    for(int i=1;i<=n;i++){
        scanf("%d",&(*p));
        p++;
    }
    p=ptr;
    for(int i=1;i<=n;i++){
        printf("%d ",(*p));
        p++;
    }
    free(ptr);
    // p=ptr;
    // for(int i=1;i<=n;i++){
    //     printf("%d ",(*p));
    //     p++;
    // }
    printf("%u\n",ptr);
    ptr=NULL;
    printf("%u\n",ptr);
    return 0;
}