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
        return head;
    }
    Node* insertAtTail(int val){
        Node* ptr=new Node(val);
        if(head==NULL) return ptr;
        Node* t=head;
        while(t->next!=NULL){
            t=t->next;
        }
        t->next=ptr;
        return head;
    }
    Node* insertAtIdx(int idx,int val){
        if(idx==0) insertAtHead(val);
        else{
            Node* ptr=new Node(val);
            Node* t=head;
            for(int i=1;i<=idx-1;i++){
                if(t==NULL){
                    cout<<"Invalid Index"<<endl;
                    return head;
                }
                t=t->next;
            }
            ptr->next=t->next;
            t->next=ptr;
            return head;
        }
    }
    Node* deleteHead(){
        if(head==NULL) return head;
        return head->next;
    }
    Node* deleteTail(){
        if(head==NULL || head->next==NULL) return NULL;
        Node* t=head;
        while(t->next->next!=NULL){
            t=t->next;
        }
        t->next=NULL;
        return head;
    }
    void display(){
        Node* t=head;
        while(t!=NULL){
            cout<<t->val<<" ";
            t=t->next;
        }
        cout<<endl;
    }
};
int main(){
    LL l;
    l.insertAtHead(3);
    l.insertAtHead(9);
    l.insertAtTail(12);
    l.insertAtIdx(1,34);
    l.insertAtIdx(3,44);
    l.insertAtIdx(0,21);
    l.insertAtIdx(8,11);
    l.display();
}