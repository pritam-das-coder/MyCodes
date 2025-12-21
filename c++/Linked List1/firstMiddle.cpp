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
    LinkedList(){
        head=NULL;
    }
    Node* middleNode(Node* head){
        
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
    
}