#include <stdio.h>
#include <stdlib.h>
typedef struct Node{
    int deg;
    int coeff;
    struct Node *next;
}Node;
Node* createPoly(int d[],int c[],int n){
    Node* temp=(Node*)malloc(sizeof(Node));
    Node* t;
    t=temp;
    for(int i=0;i<n;i++){
        Node* a=(Node*)malloc(sizeof(Node));
        a->deg=d[i];
        a->coeff=c[i];
        temp->next=a;
        temp=temp->next;
    }
    temp->next=NULL;
    return t->next;
}
void display(Node* h){
    while(h!=NULL){
        printf("%d %d\n",h->deg,h->coeff);
        h=h->next;
    }
}
Node* addPoly(Node* p1,Node* p2){
    Node* p3=(Node*)malloc(sizeof(Node));
    Node* p=p3;
    while(p1 && p2){
        Node* n=(Node*)malloc(sizeof(Node));
        if(p1->deg==p2->deg){
            int final_coeff=p1->coeff+p2->coeff;
            int final_deg=p1->deg;
            n->coeff=final_coeff;
            n->deg=final_deg;
            p1=p1->next;
            p2=p2->next;
        }
        else if(p1->deg>p2->deg){
            int final_coeff=p1->coeff;
            int final_deg=p1->deg;
            n->coeff=final_coeff;
            n->deg=final_deg;
            p1=p1->next;
        }
        else{
            int final_coeff=p2->coeff;
            int final_deg=p2->deg;
            n->coeff=final_coeff;
            n->deg=final_deg;
            p2=p2->next;
        }
        p3->next=n;
        p3=p3->next;
    }
    while(p1){
        Node* n=(Node*)malloc(sizeof(Node));
        n->coeff=p1->coeff;
        n->deg=p1->deg;
        p1=p1->next;
        p3->next=n;
        p3=p3->next;
    }
    while(p2){
        Node* n=(Node*)malloc(sizeof(Node));
        n->coeff=p2->coeff;
        n->deg=p2->deg;
        p2=p2->next;
        p3->next=n;
        p3=p3->next;
    }
    p3->next=NULL;
    return p->next;
}
int main(){
    int d1[]={4,3,2};
    int c1[]={5,5,10};
    int n1=sizeof(d1)/sizeof(d1[0]);
    Node* p1=createPoly(d1,c1,n1);
    // display(p1);
    int d2[]={3,2,1,0};
    int c2[]={-5,2,7,8};
    int n2=sizeof(d2)/sizeof(d2[0]);
    Node* p2=createPoly(d2,c2,n2);
    // display(p2);
    Node* p3=addPoly(p1,p2);
    display(p3);
}