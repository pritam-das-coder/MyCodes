// Check if array can be partitioned into 2 continuous arrays of equal sum.
#include <iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,5,1,10};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=1;i<n;i++){
        arr[i]+=arr[i-1];
    }
    int lo=0,hi=n-1;
    bool flag=false;
    while(lo<=hi){
        int mid=lo+(hi-lo)/2;
        int leftSum=arr[mid],rightSum=arr[n-1]-arr[mid];
        if(leftSum==rightSum){
            flag=true;
            break;
        }
        else if(leftSum<rightSum) lo=mid+1;
        else hi=mid-1;
    }
    if(flag) cout<<"Array can be partitioned";
    else cout<<"Array can't be partitioned";
}