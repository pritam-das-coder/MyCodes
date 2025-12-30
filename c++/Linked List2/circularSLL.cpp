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
    b->next=c;
    c->next=d;
    d->next=a;
    
    Node* head=a;
    display(head);

    Node* ptr=new Node(50);
    
    display(head);
}