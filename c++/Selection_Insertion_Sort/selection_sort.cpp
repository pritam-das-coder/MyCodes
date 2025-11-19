#include <iostream>
using namespace std;
int main(){
    int arr[]={6,3,9,2,1,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<=n-2;i++){
        int idx=i;
        for(int j=i+1;j<=n-1;j++){
            if(arr[idx]>arr[j]){
                idx=j;
            }
        }
        swap(arr[i],arr[idx]);
    }
    // for(int i=0;i<n;i++){
    //     cout<<arr[i]<<" ";
    // }
    for(int x:arr){
        cout<<x<<" ";
    }
}
