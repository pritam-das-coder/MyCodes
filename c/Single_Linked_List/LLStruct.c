#include <stdio.h>
#include <stdlib.h>
typedef struct Node{
    int val;
    struct Node* next;
}Node;
Node* HP;
typedef struct LinkedList{
    Node* head;
    Node* tail;
    int size;
}LinkedList;
Node* getNode(int x){
    Node* ptr=malloc(sizeof(Node));
    ptr->val=x;
    ptr->next=NULL;
    return ptr;
}
Node* build123(){
    Node* a=getNode(1);
    Node* b=getNode(2);
    Node* c=getNode(3);
    a->next=b;
    b->next=c;
    return a;
}
Node* init(LinkedList ll){
    ll.head=ll.tail=NULL;
    ll.size=0;
}
void insertAtEnd(LinkedList ll,Node* n){
    if(ll.size==0) ll.head=ll.tail=n;
    else{
        ll.tail->next=n;
        ll.tail=ll.tail->next;
    }
}
void print(LinkedList ll){
    Node* temp=ll.head;
    while(temp!=NULL){
        printf("%d ",temp->val);
        temp=temp->next;
    }
}
int main(){
    // HP=build123();
    // print(HP);
    LinkedList ll;
    init(ll);
    Node* a=getNode(1);
    insertAtEnd(ll,a);
    print(ll);
}