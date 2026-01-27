#include <iostream>
#include <climits>
#include <vector>
using namespace std;
class Stack{
private:
    vector<int> v;
public:
    void push(int val){
        v.push_back(val);
    }
    void pop(){
        // if(v.size()==0){
        //     cout<<"Stack is Empty!"<<endl;
        //     return;
        // }
        v.pop_back();
    }
    int top(){
        if(v.size()==0){
            cout<<"Stack is Empty!"<<endl;
            return INT_MIN;
        }
        return v[v.size()-1];
    }
    int size(){
        return v.size();
    }
};
int main(){
    Stack st;
    st.push(4);
    st.push(40);
    cout<<st.top()<<endl;
    cout<<st.size()<<endl;
    // st.push(67);
    // st.push(9);
    // st.push(45);
    // st.push(12);
    st.pop();
    st.pop();
    st.pop();
    cout<<st.size()<<endl;
    return 0;
}