#include <iostream>
#include <queue>
using namespace std;
int main(){
    int arr[]={10,20,-4,6,18,2,105,118};
    int k=3;
    int n=sizeof(arr)/sizeof(arr[0]);
    priority_queue<int> pq;
    int s=0,i=0;
    while(i<n){
        pq.push(arr[i]);
        if(s>k) pq.pop();
        i++;
        s=pq.size();
    }
    cout<<pq.top()<<endl;
}