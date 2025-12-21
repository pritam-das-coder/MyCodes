#include <iostream>
#include <climits>
using namespace std;
class Node{ // user defined data type
public:
    int val;
    Node* next;
    Node(int val){
        this->val=val;
        next=NULL;
    } 
};
class LinkedList{ // user defined data structure
public:
    Node* head;
    LinkedList(){
        head=NULL;
    }
    Node* middleNode(Node* head){
        Node* slow=head;
        Node* fast=head;
        while(fast!=NULL && fast->next!=NULL && fast->next->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow;
    }
    void build(){
        Node* a=new Node(1);
        Node* b=new Node(2);
        Node* c=new Node(32);
        Node* d=new Node(4);
        Node* e=new Node(5);
        //Node* f=new Node(6);
        a->next=b;
        b->next=c;
        c->next=d;
        d->next=e;
        //e->next=f;
        head=a;
    }
    void display(){
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
};
int main(){
    LinkedList ll;
    ll.build();
    Node* mid=ll.middleNode(ll.head);
    cout<<mid->val<<endl;
}