#include <iostream>
#include <queue>
#include <stack>
using namespace std;
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
void reverse(queue<int>& q){
    stack<int> st;
    while(q.size()){
        int x=q.front();
        q.pop();
        st.push(x);
    }
    while(st.size()){
        q.push(st.top());
        st.pop();
    }
}
int main(){
    queue<int> q;
    // cout<<q.size()<<endl;
    // cout<<q.empty()<<endl;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);
    display(q);
    reverse(q);
    display(q);
    // q.pop();
    // q.pop();
    // cout<<q.size()<<endl;
    // cout<<q.front()<<endl;
    // cout<<q.back()<<endl;
    // cout<<q.empty()<<endl;
}