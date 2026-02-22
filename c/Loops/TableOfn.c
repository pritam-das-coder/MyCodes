// Print the table of ‘n’. Here ‘n’ is a integer which user will input.
#include <stdio.h>
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);// don't give space
    for(int i=1;i<=10;i++){
        printf("%d ",(i*n));
    }
    // for(int i=n;i<=(n*10);i+=n){
    //     printf("%d ",i);
    // }
    return 0;
}