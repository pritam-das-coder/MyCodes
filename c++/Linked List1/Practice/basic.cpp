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

Node* build123(){
    Node* a=new Node(1);
    Node* b=new Node(2);
    Node* c=new Node(3);
    a->next=b;
    b->next=c;
    return a;
}

void print(Node* head){
    while(head!=NULL){
        cout<<head->val<<" ";
        head=head->next;
    }
}

int size(Node* head){
    int c=0;
    while(head!=NULL){
        c++;
        head=head->next;
    }
    return c;
}

void printRec(Node* head){
    if(head==NULL) return;
    cout<<head->val<<" ";
    printRec(head->next);
}
int main(){
    Node* HP=build123();
    //print(HP);
    //cout<<size(HP)<<endl;
    printRec(HP);
    return 0;
}