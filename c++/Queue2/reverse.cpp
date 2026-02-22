// Reverse first K elements of a Queue
#include <iostream>
#include <queue>
#include <stack>
using namespace std;
void reverse(queue<int>& q,int k){
    stack<int> st;
    for(int i=1;i<=k;i++){
        st.push(q.front());
        q.pop();
    }
    while(st.size()){
        q.push(st.top());
        st.pop();
    }
    for(int i=1;i<=(q.size()-k);i++){
        int x=q.front();
        q.pop();
        q.push(x);
    }
}
void display(queue<int>& q){
    int n=q.size();
    while(n){
        int x=q.front();
        cout<<x<<" ";
        q.pop();
        q.push(x);
        n--;
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
    display(q);
    reverse(q,4);
    display(q);
}