#include <iostream>
#include <climits>
using namespace std;
int main(){
    int arr[]={7,1,2,5,8,4,9,3,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=4;
    //int maxSum=INT_MIN;
    // for(int i=0;i<=n-k;i++){ // O(n-k)
    //     int sum=0;
    //     for(int j=i;j<i+k;j++){ // O(k)
    //         sum+=arr[j];
    //     }
    //     maxSum=max(maxSum,sum);
    // }
    // O(nk)
    // sliding window
    int prevSum=0;
    for(int i=0;i<k;i++){
        prevSum+=arr[i];
    }
    int i=1,j=k;
    int maxSum=prevSum;
    int maxIdx=0;
    while(j<n){
        int currSum=prevSum+arr[j]-arr[i-1];
        if(maxSum<currSum){
            maxSum=currSum;
            maxIdx=i;
        }
        prevSum=currSum;
        i++,j++;
    }
    // O(n)
    cout<<maxSum<<" "<<maxIdx;
}