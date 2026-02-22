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
class Queue{
private:
    Node* head;
    Node* tail;
    int size;
public:
    Queue(){
        head=tail=NULL;
        size=0;
    }
    void push(int val){
        Node* t=new Node(val);
        if(size==0) head=tail=t;
        else{
            tail->next=t;
            tail=t;
        }
        size++;
    }
    void pop(){
        if(size==0){
            cout<<"Queue is Empty!"<<endl;
            return;
        }
        Node* t=head;
        head=head->next;
        delete t;
        // delete(t);
        size--;
    }
    bool empty(){
        return (size==0);
    }
    int front(){
        if(size==0){
            cout<<"Queue is Empty!"<<endl;
            return INT_MIN;
        }
        return head->val;
    }
    int back(){
        if(size==0){
            cout<<"Queue is Empty!"<<endl;
            return INT_MIN;
        }
        return tail->val;
    }
    int sizeOfQueue(){
        return size;
    }
    void display(){
        Node* t=head;
        while(t!=NULL){
            cout<<t->val<<" ";
            t=t->next;
        }
        cout<<endl;
    }
};
int main(){
    Queue q;
    // cout<<q.empty();
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);
    // cout<<q.sizeOfQueue()<<endl;
    // cout<<q.empty()<<endl;
    q.display();
    q.pop();
    q.pop();
    // q.push(60);
    q.display();
    cout<<q.front()<<endl;
}