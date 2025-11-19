// Given an integer array nums, in which exactly two elements 
// appear only once and all the other elements appear exactly 
// twice. Find the two elements that appear only once
#include <iostream>
using namespace std;
int main(){
    int arr[]={1,2,1,3,2,5,5,9,8,8};
    int n=sizeof(arr)/sizeof(arr[0]);
    int res1=0;
    for(int i=0;i<n;i++){
        res1=res1^arr[i];
    }
    int k=0;
    int temp=res1;
    while(true){
        int val = res1 & 1;
        if(val==1) break;
        k++;
        res1 = res1 >> 1;
    }
    int res2=0;
    for(int i=0;i<n;i++){
        int temp=arr[i];
        if((temp>>k)&1) res2=res2^arr[i];
    }
    int num1=res2,num2=temp^res2;
    cout<<num1<<endl;
    cout<<num2<<endl;
}