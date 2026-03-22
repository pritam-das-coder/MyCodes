#include <iostream>
using namespace std;
void heapify(int arr[],int n,int i){
    while(true){
        int left=2*i,right=2*i+1;
        int minimum=min(arr[left],arr[right]);
        if(left>=n) break;
        else if(right>=n){
            if(arr[i]>arr[left]){
                swap(arr[i],arr[left]);
                i=left;
            }
            break;
        }
        else if(minimum<arr[i]){
            if(arr[left]<arr[right]){
                swap(arr[i],arr[left]);
                i=left;
            }
            else{
                swap(arr[i],arr[right]);
                i=right;
            }
        }
        else break;
    }
}
int main(){
    int arr[]={-1,10,2,14,11,1,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i = n/2; i>=1 ;i--){ // works on internal nodes
        heapify(arr,n,i);
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}