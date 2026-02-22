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
    Node* tail;
    int size;
    LinkedList(){
        head=tail=NULL;
        size=0;
    }
    void insertAtEnd(int val){
        Node* temp=new Node(val);
        if(size==0) head=tail=temp;
        else{
            tail->next=temp;
            tail=temp;
        }
        size++;
    }
    void insertAtBeginning(int val){
        Node* temp=new Node(val);
        if(size==0) head=tail=temp;
        else{
            temp->next=head;
            head=temp;
        }
        size++;
    }
    void insertAtIdx(int idx,int val){
        if(idx<0 || idx>size) cout<<"Invalid Input"<<endl;
        else if(idx==0) insertAtBeginning(val);
        else if(idx==size) insertAtEnd(val);
        else{
            Node* temp=new Node(val);
            Node* t=head;
            for(int i=1;i<=idx-1;i++){
                t=t->next;
            }
            temp->next=t->next;
            t->next=temp;
            size++;
        }
    }
    int getElement(int idx){
        if(idx<0 || idx>size-1){
            cout<<"Invalid Input"<<endl;
            return INT_MIN;
        }
        else if(idx==0) return head->val;
        else if(idx==size-1) return tail->val;
        else{
            Node* temp=head;
            for(int i=1;i<=idx;i++){
                temp=temp->next;
            }
            return temp->val;
        }
    }
    void deleteAtHead(){
        if(size==0) cout<<"List is empty"<<endl;
        else if(size==1){
            head=tail=NULL;
            size--;
        }
        else{
            head=head->next;
            size--;
        }
    }
    void deleteAtTail(){
        if(size==0) cout<<"List is empty"<<endl;
        else{
            Node* temp=head;
            while(temp->next!=tail){
                temp=temp->next;
            }
            temp->next=NULL;
            tail=temp;
            size--;
        }
    }
    void deleteAtIdx(int idx){
        if(size==0) cout<<"List is empty"<<endl;
        else if(idx==0) deleteAtHead();
        else if(idx==size-1) deleteAtTail();
        else{
            Node* temp=head;
            for(int i=1;i<=idx-1;i++){
                temp=temp->next;
            }
            temp->next=temp->next->next;
            size--;
        }
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
    ll.insertAtEnd(10);
    ll.display();
    ll.insertAtEnd(20);
    ll.insertAtEnd(30);
    ll.display();
    ll.insertAtBeginning(5);
    ll.insertAtBeginning(0);
    ll.display();
    ll.insertAtIdx(3,78);
    ll.display();
    ll.deleteAtHead();
    ll.display();
    ll.deleteAtTail();
    ll.display();
    ll.deleteAtIdx(1);
    ll.display();
    // cout<<ll.getElement(4)<<endl;
    //cout<<ll.size<<endl;
}