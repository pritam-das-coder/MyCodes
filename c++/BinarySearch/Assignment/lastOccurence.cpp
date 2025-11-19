// Given a sorted array of n elements and a target ‘x’. Find the last occurrence of ‘x’ in the array. If ‘x’ 
// does not exist return -1.
#include <iostream>
#include <vector>
using namespace std;
int findLastOccurence(vector<int>& arr,int x){
    int n=arr.size();
    int lo=0,hi=n-1;
    while(lo<=hi){
        int mid=lo+(hi-lo)/2;
        if(arr[mid]==x){
            if(mid+1<=n-1 && arr[mid+1]==x) lo=mid+1;
            else return mid;
        }
        else if(arr[mid]>x) hi=mid-1;
        else lo=mid+1;
    }
    return -1;
}
int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(3);
    v.push_back(4);
    v.push_back(4);
    v.push_back(4);
    v.push_back(5);
    int x=5;
    cout<<findLastOccurence(v,x);
}