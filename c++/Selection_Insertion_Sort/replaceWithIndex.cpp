// Given an array, arr[] containing ‘n’ integers, the
// task is to find an integer (say K) such that after
// replacing each and every index of the array by |ai-K|
// where ( i ∈ [1, n]), results in a sorted array. If no such
// integer exists that satisfies the above condition then
// return -1. Find the range of K.
#include <iostream>
#include <climits>
using namespace std;
int main(){
    int arr[]={5,3,8};
    int n=sizeof(arr)/sizeof(arr[0]);
    float kmin=INT_MIN,kmax=INT_MAX;
    for(int i=1;i<n;i++){
        if(arr[i-1]-arr[i]>=0) kmin=max(kmin,(arr[i-1]+arr[i])/(float)2);
        else kmax=min(kmax,(arr[i-1]+arr[i])/(float)2);
    }

    if((int)kmin!=kmin) kmin=(int)kmin+1;
    if((int)kmax!=kmax) kmax=(int)kmax;

    if(kmin>kmax) cout<<-1;
    else if(kmin==kmax) cout<<"k="<<kmin;
    else
        cout<<"Range of k is ["<<kmin<<","<<kmax<<"]";
}