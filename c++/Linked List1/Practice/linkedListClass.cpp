#include <iostream>
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
        Node* temp=head;
        Node* ptr=new Node(val);
        for(int i=1;i<=idx-1;i++){
            temp=temp->next;
        }
        temp->next=ptr;
        ptr->next=temp->next;
    }

};