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

class DLL{
public:
    Node* head;
    Node* tail;
    int size;
    DLL(){
        head=tail=NULL;
        size=0;
    }
    void insertAtHead(int val){
        Node* temp=new Node(val);
        if(size==0) head=tail=temp;
        else{
            temp->next=head;
            head->prev=temp;
            head=temp;
        }
        size++;
    }
    void insertAtTail(int val){
        Node* temp=new Node(val);
        if(size==0) head=tail=temp;
        else{
            tail->next=temp;
            temp->prev=tail;
            tail=temp;
        }
        size++;
    }
    void insertAtIdx(int idx,int val){
        if(idx<0 || idx>size) cout<<"Invalid Index"<<endl;
        else if(idx==0) insertAtHead(val);
        else if(idx==size) insertAtTail(val);
        else{
            Node* ptr=new Node(val);
            Node* temp=head;
            for(int i=1;i<idx;i++){
                temp=temp->next;
            }
            temp->next->prev=ptr;
            ptr->next=temp->next;
            temp->next=ptr;
            ptr->prev=temp;
            size++;
        }
    }
    void deleteAtHead(){
        if(size==0) cout<<"Empty LL"<<endl;
        else if(size==1){
            delete head;
            head=tail=NULL; 
        } 
        else{
            head->next->prev=NULL;
            head=head->next;
        }
        size--;
    }
    void deleteAtTail(){
        if(size==0) cout<<"Empty LL"<<endl;
        else if(size==1) head=tail=NULL;
        else{
            tail=tail->prev;
            tail->next=NULL;
        }
        size--;
    }
    void deleteAtIdx(int idx){
        if(idx<0 || idx>=size) cout<<"Invalid Index"<<endl;
        else if(idx==0) deleteAtHead();
        else if(idx==size-1) deleteAtTail();
        else{
            Node* temp=head;
            for(int i=1;i<idx;i++){
                temp=temp->next;
            }
            temp->next=temp->next->next;
            temp->next->prev=temp;
            size--;
        }
    }
    Node* getAtIdx(int idx){
        if(idx<0 || idx>=size){
            cout<<"Invalid Index"<<endl;
            return NULL;
        } 
        Node* temp=tail;
        for(int i=1;i<size-idx;i++){
            temp=temp->prev;
        }
        return temp;
    }
    void display(){
        Node* temp=head;
        while(temp){
            cout<<temp->val<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
};

int main(){
    DLL list;
    list.insertAtHead(3);
    list.insertAtHead(8);
    list.insertAtTail(9);
    list.insertAtIdx(1,4);
    list.insertAtIdx(3,12);
    // list.deleteAtHead();
    // list.deleteAtTail();
    // list.deleteAtIdx(2);
    // cout<<list.size<<endl;
    list.display();
    Node* ele=list.getAtIdx(3);
    if(ele) cout<<ele->val<<endl;
    // list.display();
}