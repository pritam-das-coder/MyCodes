#include<stdio.h>
int main(){
    int i=1;
    switch(++i){
        default:
        printf("Error");
        break;
        case 1:
        i++;
        printf("%d",i);
        break;
        case 0:
        i--;
        printf("%d",i);
        break;
        // default:
        // printf("Error");
    }
}