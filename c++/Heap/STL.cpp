#include <iostream>
#include <queue>
using namespace std;
int main(){
    priority_queue<int> pq; // max heap
    pq.push(10);
    pq.push(2);
    pq.push(18);
    // cout<<pq.top()<<endl;
    pq.pop();
    // cout<<pq.top()<<endl;
    pq.push(30);
    pq.push(15);
    pq.pop();
    // cout<<pq.top()<<endl;
    pq.push(60);
    pq.pop();
    cout<<pq.size()<<endl;
}