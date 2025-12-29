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

Node* build123(){
    Node* a=new Node(1);
    Node* b=new Node(2);
    Node* c=new Node(3);
    a->next=b;
    b->next=c;
    b->prev=a;
    c->prev=b;
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
    Node* dll=build123();
    display(dll);
}