#include <iostream>
using namespace std;
class Stack{
public:
    int arr[10];
    int idx;
    void push(int val){
        if(idx>=9){
            cout<<"Stack is Full!"<<endl;
            return;
        }
        idx++;
        arr[idx]=val;
    }
    void pop(){
        if(idx<0){
            cout<<"Stack is Empty"<<endl;
            return;
        }
        idx--;
    }
    int top(){
        return arr[idx];
    }
};
int main(){
    
    return 0;
}