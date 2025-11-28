#include <stdio.h>
#include <stdlib.h>
typedef struct Node{
    int val;
    struct Node* next;
}Node;
int h(int k){
    return ((12*k*k)%10);
}
Node* getNode(int data){
    Node* n=malloc(sizeof(Node));
    n->val=data;
    n->next=NULL;
    return n;
}
Node* insertAtEnd(int data,Node* head){
    Node* x=getNode(data);
    if(head==NULL) return x;
    Node* ptr=head;
    while(ptr->next!=NULL){
        ptr=ptr->next;
    }
    ptr->next=x;
    return head;
}
void printLL(Node* head){
    if(head){
        while(head->next!=NULL){
            printf("%d ",head->val);
            head=head->next;
        }
        printf("%d ",head->val);
    }
}
int main(){
    Node* hash_table[10];
    for(int i=0;i<10;i++) hash_table[i]=NULL;
    for(int i=1;i<=10;i++){
        int idx=h(i);
        hash_table[idx]=insertAtEnd(i,hash_table[idx]);
    }
    for(int i=0;i<10;i++){
        printLL(hash_table[i]);
        printf("\n");
    }
    return 0;
}