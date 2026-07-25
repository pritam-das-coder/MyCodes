// Find the unique number in a given Array where all the elements are being repeated 
// twice with one value being unique.
#include <stdio.h>
#include <stdbool.h>
int main(){
    int n;
    printf("Enter the size of array : ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of array : ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int ds=n/2;
    int dup[ds],c=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                dup[c++]=arr[i];
            }
        }
    }
    for(int i=0;i<n;i++){
        bool flag=false;
        for(int j=0;j<ds;j++){
            if(arr[i]==dup[j]){
                flag=true;
            }
        }
        if(flag==false){
            printf("%d is unique",arr[i]);
            break;
        }
    }
    // for(int i=0;i<ds;i++){
    //     printf("%d ",dup[i]);
    // }
    return 0;
}