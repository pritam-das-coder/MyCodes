// Given an array of integers and a number k, write a function that returns true if the given array can be divided into pairs such that the sum of every pair is divisible by k.
#include <iostream>
#include <vector>
using namespace std;
bool canPair(vector<int> &arr, int k) { // TC=O(n^2) SC=O(n)
    int n=arr.size();
    if(n%2!=0) return false;
    vector<int> v(n,-1); // -1 -> not present in any group
    int c=0; // count of pairs
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if((arr[i]+arr[j])%k==0 && v[i]==-1 && v[j]==-1){
                c++;
                v[i]=0;
                v[j]=0;
            }
        }
    }
    return (c==(n/2));
}
int main(){
    vector<int> arr={91,74,66,48};
    int k=10;
    cout<<canPair(arr,k)<<endl;
}