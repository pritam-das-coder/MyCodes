// Implement a Linked List class.
// The user defined LL should have insert (head,tail,idx) , delete(head,tail,idx) , get(idx) and display
// functions.
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
class LL{
public:
    Node* head;
    LL(){
        head=NULL;
    }
    Node* insertAtHead(int val){
        Node* ptr=new Node(val);
        ptr->next=head;
        head=ptr;
    }
    Node* insertAtTail(int val){
        Node* ptr=new Node(val);
        Node* t=head;
        while(t->next!=NULL){
            t=t->next;
        }
        t->next=ptr;
        
    }
};