// Sort a ‘k’ sorted array (sort a nearly sorted array).
#include <iostream>
#include <queue>
using namespace std;
void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int arr[]={10,9,8,7,4,70,60,50};
    int k=4;
    int n=sizeof(arr)/sizeof(arr[0]);
    print(arr,n);
    priority_queue<int,vector<int>,greater<int>> pq; // min heap
    int j=0;
    for(int i=0;i<n;i++){
        pq.push(arr[i]);
        if(pq.size()>k){
            arr[j]=pq.top();
            pq.pop();
            j++;
        }
    }
    while(pq.size()){
        arr[j]=pq.top();
        pq.pop();
        j++;
    }
    print(arr,n);
}