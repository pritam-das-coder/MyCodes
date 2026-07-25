// Print the factorials of first ‘n’ numbers
#include <stdio.h>
int fact(int n){
    int f=1;
    for(int i=1;i<=n;i++){
        f*=i;
    }
    return f;
}
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        printf("%d! = %d\n",i,fact(i));
    }
    return 0;
}