//  Given an integer array. Find the length of longest subarray which has maximum possible bitwise AND value.
#include <iostream>
#include <climits>
using namespace std;
int main(){
    int arr[]={12,13,1,6,1,6,6,6,6,4,3,8,13,13,13,8};
    int n=sizeof(arr)/sizeof(arr[0]);
    int max_ele=INT_MIN;
    int len=0,max_len=0;
    for(int i=0;i<n;i++){
        if(arr[i]>max_ele) max_ele=arr[i];
    }
    for(int i=0;i<n;i++){
        if(arr[i]==max_ele){
            len++;
            max_len=max(max_len,len);
        }
        else{
            len=0;
        }
    }
    cout<<max_len;
}