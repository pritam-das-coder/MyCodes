#include <iostream>
#include <vector>
using namespace std;
int main(){
    //int arr[]={1,2,4,5,9,15,18,21,24};
    vector<int> arr;
    arr.push_back(1);
    arr.push_back(2);
    arr.push_back(4);
    arr.push_back(5);
    arr.push_back(9);
    arr.push_back(15);
    arr.push_back(18);
    arr.push_back(21);
    arr.push_back(24);
    int n=15;
    int x=15;
    cout<<*lower_bound(arr.begin(),arr.end(),x);
    // for(int i=0;i<n;i++){
    //     if(arr[i]>x){
    //         res=arr[i-1];
    //         break;
    //     }
    // }
    // cout<<res;
    // int lo=0,hi=n-1;
    // bool flag=false;
    // while(lo<=hi){
    //     int mid=lo+(hi-lo)/2;
    //     if(arr[mid]==x){
    //         flag=true;
    //         cout<<arr[mid+1];
    //         break;
    //     }
    //     else if(arr[mid]<x) lo=mid+1;
    //     else hi=mid-1;
    // }
    // if(flag==false) cout<<arr[lo];
}