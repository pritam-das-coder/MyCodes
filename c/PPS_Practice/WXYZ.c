#include <stdio.h>
int main(){
    int n=7;//odd number only
    for(int i=1;i<=(n/2+1);i++){
        for(int j=(n/2);j>=i;j--){
            printf(" ");
        }
        char ch='W';
        for(int k=1;k<=i;k++){
            printf("%c ",ch++);
        }
        printf("\n");
    }
    for(int i=1;i<=(n/2);i++){
        for(int j=1;j<=i;j++){
            printf(" ");
        }
        char ch='W';
        for(int k=(n/2);k>=i;k--){
            printf("%c ",ch++);
        }
        printf("\n");
    }
    return 0;
}