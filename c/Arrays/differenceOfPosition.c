// Find the difference between the sum of elements at even indices to the sum of elements at odd indices.
#include <stdio.h>
#include <math.h>
int main(){
    int arr[5]={2,3,13,7,1};
    int se=0,so=0;
    for(int i=0;i<5;i++){
        if(i%2==0) se+=arr[i];
        else so+=arr[i];
    }
    printf("%d",abs(se-so));
    return 0;
}