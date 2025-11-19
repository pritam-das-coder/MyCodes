#include <stdio.h>
#include <stdlib.h>
typedef struct Node{
    int data;
    struct Node* next;
}Node;
Node* HP;
Node* getNode(int x){
    Node* p=malloc(sizeof(Node));
    p->data=x;
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
    return a;
}
void print(Node* head){
    while(head!=NULL){
        printf("%d ",head->data);
        head=head->next;
    }
    printf("\n");
}
void addxAftery(Node* head,int x,int y){
    if(head==NULL){
        printf("List is empty");
        return;
    }
    Node* p=getNode(x);
    while(head!=NULL && head->data!=y){
        head=head->next;
    }
    if(head->data==y){
        p->next=head->next;
        head->next=p;
    }
    else{
        printf("%d not found in list",y);
        free(p);
    }

}
void addxAftery2(Node* head,Node* x,Node* y){
    if(head==NULL){
        printf("List is empty");
        return;
    }
    x->next=y->next;
    y->next=x;
}
void deletey(Node* head,int y){
    Node* p=NULL;
    if(head==NULL){
        printf("List is empty\n");
    }
    else if(head->data==y){
        HP=head->next;
        free(head);
    }
    else{
        while(head->next!=NULL && head->data!=y){
            p=head;
            head=head->next;
        }
        if(head->data==y){
            p->next=head->next;
            free(head);
        }
        else{
            printf("%d is not present\n",y);
        }
    }
}
// void deletey2(Node* head,int y){
//     if(head==NULL){
//         printf("List is empty\n");
//     }
//     else if(head->data==y){
//         HP=head->next;
//         free(head);
//     }
//     else{
//         while(head->next!=NULL && head->next->data!=y){
//             head=head->next;
//         }
//         if(head->next!=NULL && head->next->data==y){
//             Node* p=head->next;
//             head->next=head->next->next;
//             free(p);
//         }
//         else{
//             printf("%d is not present\n",y);
//         }
//     }
// }
int main(){
    HP=build1234();
    print(HP);
    //addxAftery(HP,5,1);
    // Node* x=getNode(7);
    // addxAftery2(HP,x,HP->next);
    deletey2(HP,3);
    print(HP);
    return 0;
}