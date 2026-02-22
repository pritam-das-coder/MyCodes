#include <iostream>
#include <deque>
using namespace std;
void display(deque<int>& dq){
    int n=dq.size();
    for(int i=1;i<=n;i++){
        int x=dq.front();
        cout<<x<<" ";
        dq.pop_front();
        dq.push_back(x);
    }
    cout<<endl;
}
int main(){
    deque<int> dq;
    dq.push_front(1);
    dq.push_back(3);
    dq.push_back(9);
    dq.push_front(0);
    // cout<<dq.back()<<endl;
    display(dq);
    cout<<dq.back()<<endl;

}