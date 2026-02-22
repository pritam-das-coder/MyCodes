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
    void insertAtHead(int val){
        Node* ptr=new Node(val);
        ptr->next=head;
        head=ptr;
    }
    void insertAtTail(int val){
        Node* ptr=new Node(val);
        if(head==NULL){
            head=ptr;
            return;
        }
        Node* t=head;
        while(t->next!=NULL){
            t=t->next;
        }
        t->next=ptr;
    }
    void insertAtIdx(int idx,int val){
        if(idx<0){
            cout<<"Invalid Index"<<endl;
            return;
        }
        else if(idx==0) insertAtHead(val);
        else{
            Node* ptr=new Node(val);
            Node* t=head;
            for(int i=1;i<=idx-1;i++){
                if(t==NULL){
                    cout<<"Invalid Index"<<endl;
                    return;
                }
                t=t->next;
            }
            if(t==NULL){
                cout<<"Invalid Index"<<endl;
                return;
            }
            ptr->next=t->next;
            t->next=ptr;
        }
    }
    void deleteHead(){
        if(head==NULL) return;
        head=head->next;
    }
    void deleteTail(){
        if(head==NULL || head->next==NULL){
            head=NULL;
            return;
        }
        Node* t=head;
        while(t->next->next!=NULL){
            t=t->next;
        }
        t->next=NULL;
    }
    void deleteAtIdx(int idx){
        if(idx<0){
            cout<<"Invalid Input"<<endl;
            return;
        }
        else if(idx==0) deleteHead();
        else{
            Node* t=head;
            for(int i=1;i<=idx-1;i++){
                if(t==NULL || t->next==NULL || t->next->next==NULL){
                    cout<<"Invalid Input"<<endl;
                    return;
                }
                t=t->next;
            }
            t->next=t->next->next;
        }
    }
    Node* get(int idx){
        if(idx<0){
            cout<<"Invalid Input"<<endl;
            return NULL;
        }
        Node* t=head;
        for(int i=1;i<=idx;i++){
            if(t==NULL){
                cout<<"Invalid Input"<<endl;
                return NULL;
            }
            t=t->next;
        }
        return t;
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
    // l.deleteHead();
    // l.deleteTail();
    //l.deleteAtIdx(9);
    //l.insertAtIdx(8,11);
    Node* ele=l.get(6);
    if(ele){
        cout<<ele->val<<endl;
    }
    else{
        cout<<"Invalid Input"<<endl;
    }

    l.display();
}