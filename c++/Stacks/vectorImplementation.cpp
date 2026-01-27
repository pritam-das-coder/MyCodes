#include <iostream>
#include <climits>
#include <vector>
using namespace std;
class Stack{
private:
    vector<int> v;
public:
    Stack(){
        
    }
    void push(int val){
        v.push_back(val);
    }
    void pop(){
        v.pop_back();
    }
    int top(){
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