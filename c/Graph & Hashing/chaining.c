#include <stdio.h>
#include <stdlib.h>
typedef struct Node{
    int val;
    struct Node* next;
}Node;
int h(int k){
    return (k%7);
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
    int keys[]={15,47,23,34,85,97,65,89,70};
    Node* hash_table[7];
    for(int i=0;i<7;i++) hash_table[i]=NULL;
    for(int i=0;i<9;i++){
        int idx=h(keys[i]);
        hash_table[idx]=insertAtEnd(keys[i],hash_table[idx]);
    }
    for(int i=0;i<7;i++){
        printLL(hash_table[i]);
        printf("\n");
    }
    return 0;
}