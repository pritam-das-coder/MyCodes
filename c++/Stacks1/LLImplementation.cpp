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
    int length(){
        return size;
    }
    void printRev(){
        Node* t=head;
        while(t){
            cout<<t->val<<" ";
            t=t->next;
        }
    }
    void print(Node* h){
        if(h==NULL) return;
        print(h->next);
        cout<<h->val<<" ";
    }
    void display(){
        Node* temp=head;
        print(temp);
    }
};
int main(){
    Stack st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    // cout<<st.length()<<endl;
    // st.pop();
    // cout<<st.top()<<endl;
    st.display();
}