#include <stdio.h>
int main(){
    // float me=2.1;
    // double you=2.1;
    // if(me==you) printf("Hello");
    // else printf("Hi");
    int a[5]={1,2,3,4,5};
    int i;
    for(i=0;i<5;i++)
    if((char)a[i]=='5')
    printf("%d\n",a[i]);
    else
    printf("FAIL\n");
    return 0;
}