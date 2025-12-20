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

class LinkedList{
public:
    Node* head;
    Node* tail;
    int size;
    LinkedList(){
        head=tail=NULL;
        size=0;
    }

    void insertAtEnd(int val){
        Node* ptr=new Node(val);
        if(size==0) head=tail=ptr;
        else {
            tail->next=ptr;
            tail=ptr;
        }
        size++;
    }

    void insertAtBeg(int val){
        Node* ptr=new Node(val);
        if(size==0) head=tail=ptr;
        else{
            ptr->next=head;
            head=ptr;
        }
        size++;
    }

    void insertAtIdx(int idx,int val){
        if(idx<0 || idx>size){
            cout<<"Invalid Input"<<endl;
            return;
        }
        if(idx==0) insertAtBeg(val);
        else if(idx==size) insertAtEnd(val);
        else{
            Node* temp=head;
            Node* ptr=new Node(val);
            for(int i=1;i<=idx-1;i++){
                temp=temp->next;
            }
            ptr->next=temp->next;
            temp->next=ptr;
            size++;
        }
    }

    void print(){
        Node* t=head;
        while(t!=NULL){
            cout<<t->val<<" ";
            t=t->next;
        }
        cout<<endl;
    }

    int getElement(int idx){
        if(idx<0 || idx>=size){
            cout<<"Invalid Input"<<" ";
            return INT_MIN;
        }
        Node* temp=head;
        for(int i=1;i<=idx;i++){
            temp=temp->next;
        }
        return temp->val;
    }
};

int main(){
    LinkedList ll;
    ll.insertAtBeg(1);
    ll.insertAtBeg(5);
    ll.insertAtBeg(12);
    ll.insertAtEnd(56);
    ll.insertAtIdx(4,76);
    ll.print();
    cout<<ll.getElement(7)<<endl;
}