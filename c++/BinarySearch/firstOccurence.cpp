// Given a sorted array of n elements and a target ‘x’. Find the first 
// occurrence of ‘x’ in the array. If ‘x’ does not exist return -1.
#include <iostream>
using namespace std;
int main(){
    int arr[]={1,2,2,3,3,3,3,3,4,4,5,8,9};
    int n=15;
    int x=3;
    int lo=0,hi=n-1,mid=0;
    while(lo<=hi){
        mid=(lo+hi)/2;
        if(arr[mid]==x){
            //min_idx=min(min_idx,mid);
            if(arr[mid-1]==x) hi=mid-1;
            else break;
        }
        else if(arr[mid]>x) hi=mid-1;
        else lo=mid+1;
    }
    cout<<mid;
}