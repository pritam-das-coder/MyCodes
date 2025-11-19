#include <stdio.h>
#include <stdlib.h>
typedef struct dnode{
    int data;
    struct dnode* next;
    struct dnode* prev;
}dnode;
dnode* getNode(int x){
    dnode* p=malloc(sizeof(dnode));
    p->data=x;
    p->next=NULL;
    p->prev=NULL;
    return p;
}
dnode* build123(){
    dnode* a=getNode(1);
    dnode* b=getNode(2);
    dnode* c=getNode(3);
    a->next=b;
    b->prev=a;
    b->next=c;
    c->prev=b;
    return a;
}
void display(dnode* head){
    while(head!=NULL){
        printf("%d ",head->data);
        head=head->next;
    }
    printf("\n");
}
dnode* addBegin(int x,dnode* head){ // O(1)
    dnode* p=getNode(x);
    p->next=head;
    if(head) head->prev=p;
    return p;
}
dnode* addEnd(int x,dnode* head){
    dnode* p=getNode(x);
    if(head==NULL) return p;
    dnode* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=p;
    p->prev=temp;
    return head;

}
dnode* insertxBeforey(dnode* head,int x,int y){
    dnode* p=getNode(x);
    if(head==NULL){
        printf("List is empty\n");
        free(p);
        return head;
    }
    else if(head->data==y){
        p->next=head;
        head->prev=p;
        return p;
    }
    else{
        dnode* temp=head;
        while(temp->next!=NULL && temp->data!=y){
            temp=temp->next;
        }
        if(temp->data==y){
            p->next=temp;
            p->prev=temp->prev;
            temp->prev->next=p;
            temp->prev=p;
        }
        else{
            printf("%d not found\n",y);
            free(p);
        }
        return head;
    }
}
dnode* deletey(int y,dnode* head){
    dnode* temp=head;
    if(head->data==y){ // if 1st node to be deleted
        head=head->next;
        head->prev=NULL;
        free(temp);
        return head;
    }
    while(head->next!=NULL && head->next->data!=y){
        head=head->next;
    }
    if(head->next!=NULL && head->next->data==y){ // if y found
        dnode* p=head->next;
        head->next=p->next;
        if(p->next) p->next->prev=head;
        free(p);
    }
    else{
        printf("%d not found\n",y);
    }
    return temp;
}
int main(){
    dnode* HP=NULL;
    // HP=build123();
    // display(HP);
    // HP=addBegin(4,HP);
    // display(HP);
    // for(int i=5;i>=1;i--){
    //     HP=addBegin(i,HP);
    // }
    //HP=addEnd(4,HP);
    for(int i=1;i<=5;i++){
        HP=addEnd(i,HP);
    }
    display(HP);
    //HP=insertxBeforey(HP,7,4);
    HP=deletey(2,HP);
    display(HP);
}