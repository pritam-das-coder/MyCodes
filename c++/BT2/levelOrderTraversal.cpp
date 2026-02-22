#include <iostream>
#include <climits>
using namespace std;
class Node{
public:
    int val;
    Node* left;
    Node* right;
    Node(int val){
        this->val=val;
        left=right=NULL;
    }
};
Node* build(){
    Node* a=new Node(1);
    Node* b=new Node(7);
    Node* c=new Node(9);
    Node* d=new Node(2);
    Node* e=new Node(6);
    Node* f=new Node(9);
    Node* g=new Node(5);
    Node* h=new Node(11);
    Node* i=new Node(5);
    a->left=b;
    a->right=c;
    b->left=d;
    b->right=e;
    c->right=f;
    e->left=g;
    e->right=h;
    f->left=i;
    return a;
}
int levels(Node* root){
    if(root==NULL) return 0;
    return 1+max(levels(root->left),levels(root->right));
}
void levelPrintRev(Node* root,int i,int n){
    if(root==NULL) return;
    if(i==n){
        cout<<root->val<<" ";
        return;
    }
    levelPrintRev(root->right,i+1,n);
    levelPrintRev(root->left,i+1,n);
}
void levelPrint(Node* root,int n){
    if(root==NULL) return;
    if(n==1){
        cout<<root->val<<" ";
        return;
    }
    levelPrint(root->right,n-1);
    levelPrint(root->left,n-1);
}
void levelOrderTraversal(Node* root){
    int n=levels(root);
    for(int i=1;i<=n;i++){
        levelPrintRev(root,1,i);
        // cout<<endl;
    }
}
int main(){
    Node* root=build();
    levelOrderTraversal(root);
    cout<<endl;
}