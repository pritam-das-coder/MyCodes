#include <stdio.h>
int main(){
    int n;
    printf("Enter the number of data points : ");
    scanf("%d",&n);
    float arr[n+1][n];
    printf("Enter the values of x : ");
    for(int i=0;i<n;i++){
        scanf("%f",&arr[0][i]);
    }
    printf("Enter the values of y : ");
    for(int i=0;i<n;i++){
        scanf("%f",&arr[1][i]);
    }
    for(int i=2;i<=(n+1-1);i++){
        for(int j=0;j<n-1;j++){
            arr[i][j]=arr[i-1][j+1]-arr[i-1][j];
        }
    }
    // apply the formula
    float x;
    printf("Enter at which x you want value of the function : ");
    scanf("%f",&x);
    float h=arr[0][1]-arr[0][0],u=(x-arr[0][0])/h;
    float p=1,q=0,sum=0;
    for(int i=0;i<n;i++){
        q=arr[i+1][0];
        sum+=p*q;
        p*=(u-i)/(i+1);
    }
    printf("f(%f) = %f",x,sum);
    return 0;
}