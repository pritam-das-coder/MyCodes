#include <iostream>
using namespace std;
int main(){
    int arr[]={6,5,4,3,2,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=1;i<=n-1;i++){
        int j=i;
        while(j>=1 && arr[j]<arr[j-1]){
            swap(arr[j],arr[j-1]);
            j--;
        }
    }
    for(int x:arr){
        cout<<x<<" ";
    }
}