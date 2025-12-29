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

Node* buildDLL(){
    // 10 20 30 40 50
    Node* a=new Node(10);
    Node* b=new Node(20);
    Node* c=new Node(30);
    Node* d=new Node(40);
    Node* e=new Node(50);
    a->next=b;
    b->next=c;
    b->prev=a;
    c->prev=b;
    c->next=d;
    d->next=e;
    d->prev=c;
    e->prev=d;
    return a;
}

void display(Node* head){
    while(head){
        cout<<head->val<<" ";
        head=head->next;
    }
    cout<<endl;
}
int main(){
    Node* dll=buildDLL();
    display(dll);
}