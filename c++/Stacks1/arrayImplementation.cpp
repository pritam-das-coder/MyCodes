#include <iostream>
#include <climits>
using namespace std;
class Stack{
private:
    int arr[5];
    int idx;
public:
    Stack(){
        idx=-1;
    }
    void push(int val){
        int maxSize=sizeof(arr)/sizeof(arr[0]);
        if(idx==maxSize-1){
            cout<<"Stack is Full!"<<endl;
            return;
        }
        idx++;
        arr[idx]=val;
    }
    void pop(){
        if(idx==-1){
            cout<<"Stack is Empty!"<<endl;
            return;
        }
        idx--;
    }
    int top(){
        if(idx==-1){
            cout<<"Stack is Empty!"<<endl;
            return INT_MIN;
        }
        return arr[idx];
    }
    int size(){
        return idx+1;
    }
    void print(){
        
    }
};
int main(){
    Stack st;
    st.push(4);
    st.push(40);
    cout<<st.top()<<endl;
    cout<<st.size()<<endl;
    st.push(67);
    st.push(9);
    st.push(45);
    st.push(12);
    st.pop();
    st.pop();
    st.pop();
    cout<<st.size()<<endl;
    return 0;
}