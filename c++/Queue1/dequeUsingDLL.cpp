#include <iostream>
#include <climits>
using namespace std;
class Node{
public:
    int val;
    Node* next;
    Node* prev;
    Node(int val){
        this->val=val;
        this->next=NULL;
        this->prev=NULL;
    }
};
class Deque{
private:
    Node* head;
    Node* tail;
    int s;
public:
    Deque(){
        head=tail=NULL;
        s=0;
    }
    void push_front(int val){
        Node* temp=new Node(val);
        if(s==0) head=tail=temp;
        else{
            temp->next=head;
            head->prev=temp;
            head=head->prev;
        }
        s++;
    }
    void pop_front(){
        if(s==0){
            cout<<"Deque is Empty!"<<endl;
            return;
        }
        if(s==1) head=tail=NULL;
        else{
            head=head->next;
            head->prev=NULL;
        }
        s--;
    }
    void push_back(int val){
        Node* temp=new Node(val);
        if(s==0) head=tail=temp;
        else{
            tail->next=temp;
            temp->prev=tail;
            tail=tail->next;
        }
        s++;
    }
    void pop_back(){
        if(s==0){
            cout<<"Deque is Empty!"<<endl;
            return;
        }
        if(s==1) head=tail=NULL;
        else{
            tail=tail->prev;
            tail->next=NULL;
        } 
        s--;
    }
    int size(){
        return s;
    }
    int front(){
        if(s==0){
            cout<<"Deque is Empty!"<<endl;
            return INT_MIN;
        }
        return head->val;
    }
    int back(){
        if(s==0){
            cout<<"Deque is Empty!"<<endl;
            return INT_MIN;
        }
        return tail->val;
    }
    void display(){
        Node* t=head;
        while(t){
            cout<<t->val<<" ";
            t=t->next;
        }
        cout<<endl;
    }
};
int main(){
    Deque dq;
    dq.pop_front();
    dq.push_back(2);
    dq.push_front(1);
    dq.push_front(3);
    dq.push_back(4);
    // cout<<dq.back()<<endl;
    dq.pop_back();
    dq.display();
}