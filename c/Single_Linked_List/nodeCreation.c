#include <stdio.h>
#include <stdlib.h>
typedef struct Node{
    int val;
    struct Node* next;
}Node;
Node* HP;
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
void display_R(Node* head){
    if(head!=NULL){
        printf("%d ",head->val);
        display_R(head->next);
    }
}
void print(Node* s){
    while(s!=NULL){
        printf("%d ",s->val);
        s=s->next;
    }
}
void addBegin(Node* s,int x){
    Node* p=getNode(x);
    p->next=s;
    HP=p;
}
void addEnd(Node* s,int x){
    Node* p=getNode(x);
    if(s){
        while(s->next!=NULL){
            s=s->next;
        }
        s->next=p;
    }
    else{
        HP=p;
    }
}
int main(){
    HP=build123();
    addBegin(HP,0);
    addEnd(HP,7);
    //print(HP);
    display_R(HP);
    // Node* p=NULL;
    // printf("%d",p->val);
}