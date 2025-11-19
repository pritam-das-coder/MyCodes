#include <iostream>
using namespace std;
class Node{
public:
    int val;
    Node* next;
    Node(int val){
        this->val=val;
        next=NULL;
    }
};
void print(Node* head){
    while(head!=NULL){
        cout<<head->val<<" ";
        head=head->next;
    }
    cout<<endl;
}
void printRec(Node* head){
    if(head==NULL) return;
    printRec(head->next);
    cout<<head->val<<" ";
}
int size(Node* head){
    int s=0;
    while(head!=NULL){
        s++;
        head=head->next;
    }
    return s;
}
void insertAtEnd(Node* head,int val){
    Node* temp=new Node(val);
    while(head->next!=NULL){
        head=head->next;
    }
    head->next=temp;
}
int main(){
    Node* a=new Node(10);
    Node* b=new Node(20);
    Node* c=new Node(30);
    Node* d=new Node(40);
    Node* e=new Node(50);
    a->next=b;
    b->next=c;
    c->next=d;
    d->next=e;
    // cout<<a<<endl;
    // print(a); // call by value
    // cout<<a<<endl;
    // cout<<size(a);
    //printRec(a);
    insertAtEnd(a,34);
    print(a);
}