// Given an array where all its elements are sorted in increasing order except two swapped elements, sort it in 
// linear time. Assume there are no duplicates in the array
#include <iostream>
#include <vector>
using namespace std;
int main(){
    //int arr[]={10,20,60,40,50,30};
    // int arr[]={10,20,40,30,50,60};
    int arr[]={1,5,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    int idx1=-1,idx2=-1;
    for(int i=0;i<n;i++){
        if((i==0 && arr[i]>arr[i+1]) || (i!=0 && arr[i]>arr[i+1] && arr[i]>arr[i-1])){
            idx1=i;
            break;
        }
    }
    for(int i=n-1;i>=0;i--){
        if((i!=n-1 && arr[i]<arr[i+1] && arr[i]<arr[i-1]) || (i==n-1 && arr[i]<arr[i-1])){
            idx2=i;
            break;
        }
    }
    swap(arr[idx1],arr[idx2]);
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
    //cout<<idx2;
} 