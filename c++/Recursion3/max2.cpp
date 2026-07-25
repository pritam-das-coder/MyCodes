#include <iostream>
#include <vector>
#include <climits>
using namespace std;
int findMax(int arr[],int n,int idx){
    if(idx==n) return INT_MIN;
    return max(arr[idx],findMax(arr,n,idx+1));
}
int main(){
    int a[]={7,8,26,1,9};
    cout<<findMax(a,5,0);
}