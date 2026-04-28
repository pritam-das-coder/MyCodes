// Heap Sort: TC=O(nlog n) SC=O(n)
#include <iostream>
#include <queue>
using namespace std;
void print(int arr[],int n){
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
    cout<<endl;
}
int main(){
    int arr[]={5,1,9,-1,4,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"Before Sorting : "<<endl;
    print(arr,n);
    priority_queue<int,vector<int>,greater<int>> pq; // min heap
    for(int i=0;i<n;i++){
        pq.push(arr[i]);
    }
    for(int i=0;i<n;i++){
        arr[i]=pq.top();
        pq.pop();
    }
    cout<<"After Sorting : "<<endl;
    print(arr,n);
}