#include <stdio.h>
int main(){
    int a=8,b=6;
    switch(a>b){
        case 1:
            printf("%d is greater",a);
            break;
        case 0:
            printf("%d is greater",b);
            break;
    }
    return 0;
}