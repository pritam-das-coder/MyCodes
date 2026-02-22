#include <iostream>
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
void display(Node* head){
    Node* temp=head;
    do{
        cout<<temp->val<<" ";
        temp=temp->next;
    }while(temp!=head);
    cout<<endl;
}
int main(){
    // 10 20 30 40
    // a  b  c  d
    Node* a=new Node(10);
    Node* b=new Node(20);
    Node* c=new Node(30);
    Node* d=new Node(40);
    a->next=b;
    a->prev=d;
    b->next=c;
    b->prev=a;
    c->prev=b;
    c->next=d;
    d->next=a;
    d->prev=c;
    
    Node* head=a;
    Node* tail=d;
    display(head);

    Node* ptr=new Node(50);
    tail->next=ptr;
    head->prev=ptr;
    ptr->prev=tail;
    ptr->next=head;
    display(head);
}