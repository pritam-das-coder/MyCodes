// Find the kth smallest element in a given array.
#include <iostream>
#include <queue>
using namespace std;
int main(){
    int arr[]={10,20,-4,6,18,2,105,118};
    int k=5;
    int n=sizeof(arr)/sizeof(arr[0]);
    priority_queue<int> pq; // max heap
    for(int i=0;i<n;i++){
        pq.push(arr[i]);
        if(pq.size()>k) pq.pop();
    }
    cout<<pq.top()<<endl;
}