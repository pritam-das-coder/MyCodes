// Given an array of size n+1 consisting of
// integers from 1 to n. One of the elements is
// duplicate in the array. Find that duplicate element.
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    vector<int> arr(n+1);
    cout<<"Enter all elements : "<<endl;
    for(int i=0;i<n+1;i++){
        cin>>arr[i];
    }
    // sort(arr.begin(),arr.end());
    // for(int i=0;i<n;i++){
    //     if(arr[i]==arr[i+1]){
    //         cout<<arr[i];
    //         break;
    //     }
    // }
    int sum=n*(n+1)/2;
    int tsum=0;
    for(int i=0;i<n+1;i++){
        tsum+=arr[i];
    }
    cout<<tsum-sum;
}