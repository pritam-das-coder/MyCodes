#include <iostream>
#include <climits>
using namespace std;
class Stack{
public:
    int arr[10];
    int idx;
    Stack(){
        idx=-1;
    }
    void push(int val){
        if(idx==10-1){
            cout<<"Stack is Full!"<<endl;
            return;
        }
        idx++;
        arr[idx]=val;
    }
    void pop(){
        if(idx==-1){
            cout<<"Stack is Empty"<<endl;
            return;
        }
        idx--;
    }
    int top(){
        if(idx==-1){
            cout<<"Stack is Empty"<<endl;
            return INT_MIN;
        }
        return arr[idx];
    }
    int size(){
        return idx+1;
    }
};
int main(){
    Stack st;
    st.push(4);
    st.push(40);
    cout<<st.top()<<endl;
    cout<<st.size()<<endl;
    st.pop();
    st.pop();
    st.pop();
    cout<<st.size()<<endl;
    return 0;
}