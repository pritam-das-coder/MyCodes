// Reverse last k elements of a queue.
#include <iostream>
#include <queue>
#include <stack>
using namespace std;
void display(queue<int>& q){
    for(int i=1;i<=q.size();i++){
        int x=q.front();
        cout<<x<<" ";
        q.pop();
        q.push(x);
    }
    cout<<endl;
}
int main(){
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);
    q.push(7);
    q.push(8);
    display(q);
    int k=5;
    int n=q.size();
    for(int i=1;i<=(n-k);i++){
        q.push(q.front());
        q.pop();
    }
    stack<int> st;
    for(int i=1;i<=k;i++){
        st.push(q.front());
        q.pop();
    }
    while(st.size()){
        q.push(st.top());
        st.pop();
    }
    display(q);
}