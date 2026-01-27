#include <iostream>
#include <climits>
using namespace std;
class Node{
public:
    int val;
    Node* next;
    Node(int val){
        this->val=val;
        this->next=NULL;
    }
};
class Stack{
private:
    Node* head;
    int size;
public:
    Stack(){
        head=NULL;
        size=0;
    }
    void push(int val){
        Node* temp=new Node(val);
        temp->next=head;
        head=temp;
        size++;
    }
    void pop(){
        if(size==0){
            cout<<"Stack is Empty"<<endl;
            return;
        }
        head=head->next;
        size--;
    }
    int top(){
        if(size==0){
            cout<<"Stack is Empty"<<endl;
            return INT_MIN;
        }
        return head->val;
    }
    int size(){
        return size;
    }
    
};
int main(){

}