//  Print hello world ‘n’ times. Take ‘n’ as input from user.
#include <stdio.h>
int main(){
    int n;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        printf("Hello World\n");
    }
    return 0;
}