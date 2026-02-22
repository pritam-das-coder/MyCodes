#include <stdio.h>
// int fact(int n){
//     int f=1;
//     for(int i=1;i<=n;i++){
//         f*=i;
//     }
//     return f;
// }
// int combination(int n,int r){
//     return fact(n)/(fact(r)*fact(n-r));
// }
int main(){
    int n;
    printf("Enter number of rows : ");
    scanf("%d",&n);
    int s=n-1;
    for(int i=0;i<n;i++){
        for(int k=1;k<=s;k++){
            printf(" ");
        }
        s--;
        int a=1;
        for(int j=0;j<=i;j++){
            printf("%d ",a);
            a=a*(i-j)/(j+1);
        }
        printf("\n");
    }
    return 0;
}