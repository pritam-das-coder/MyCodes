// Given an array with N distinct elements,
// convert the given array to a form where all
// elements are in the range from 0 to N-1. The order
// of elements is the same, i.e., 0 is placed in the
// place of the smallest element, 1 is placed for the
// second smallest element, ... N-1 is placed for the
// largest element.
#include <iostream>
#include <vector>
#include <climits>
using namespace std;
int main(){
    int arr[]={91,12,23,8,16};
    int n=sizeof(arr)/sizeof(arr[0]);
    // vector<int> visited(n);
    // int value=0;
    // for(int i=0;i<n;i++){
    //     int min=INT_MAX;
    //     int minidx=-1;
    //     for(int j=0;j<n;j++){
    //         if(visited[j]==0 && min>arr[j]){
    //             min=arr[j];
    //             minidx=j;
    //         }
    //     }
    //     arr[minidx]=value;
    //     value++;
    //     visited[minidx]=1;
    // }
    // if all nos +ve->O(n^2)
    int val=0;
    for(int i=0;i<n;i++){
        int min=INT_MAX;
        int minidx=-1;
        for(int j=0;j<n;j++){
            if(arr[j]>0 && min>arr[j]){
                min=arr[j];
                minidx=j;
            }
        }
        arr[minidx]=-val;
        val++;
    }
    for(int i=0;i<n;i++) arr[i]=-arr[i];
    for(int x:arr){
        cout<<x<<" ";
    }
}