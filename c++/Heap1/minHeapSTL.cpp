#include <queue>
#include <iostream>
using namespace std;
int main(){
    priority_queue<int,vector<int>,greater<int>> pq;
    pq.push(20);
    pq.push(7);
    pq.push(91);
    pq.pop();
    cout<<pq.top()<<endl;
    cout<<pq.size()<<endl;
}