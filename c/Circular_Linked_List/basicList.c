#include <stdio.h>
#include <stdlib.h>
typedef struct Node{
    int val;
    struct Node* next;
}Node;
Node* getNode(int x){
    Node* p=malloc(sizeof(Node));
    p->val=x;
    p->next=NULL;
    return p;
}
Node* build1234(){
    Node* a=getNode(1);
    Node* b=getNode(2);
    Node* c=getNode(3);
    Node* d=getNode(4);
    a->next=b;
    b->next=c;
    c->next=d;
    d->next=a;
    return a;
}
void display(Node* head){
    if(head==NULL) return;
    Node* temp=head;
    // while(temp->next!=head){
    //     printf("%d ",temp->val);
    //     temp=temp->next;
    // }
    // printf("%d\n",temp->val);
    do{
        printf("%d ",temp->val);
        temp=temp->next;
    }while(temp!=head);
    printf("\n");
}
Node* addBegin(int x,Node* head){
    Node* temp=head;
    Node* p=getNode(x);
    if(head==NULL){
        p->next=p;
        return p;
    }
    p->next=head;
    while(temp->next!=head){
        temp=temp->next;
    }
    temp->next=p;
    return p;
}
Node* addEnd(int x,Node* head){
    Node* temp=head;
    Node* p=getNode(x);
    if(head==NULL){
        p->next=p;
        return p;
    }
    p->next=head;
    while(temp->next!=head){
        temp=temp->next;
    }
    temp->next=p;
    return head;
}
// HW
// delete a node
// insert x after y
int main(){
    Node* HP=NULL;
    HP=build1234();
    display(HP);
    //HP=addBegin(5,HP);
    HP=addEnd(7,HP);
    display(HP);
}