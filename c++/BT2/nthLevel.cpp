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
void levelPrint(Node* root,int n,int i){
    if(root==NULL) return; // base case
    if(i==n){ // kaam
        cout<<root->val<<" ";
        return;
    }
    levelPrint(root->left,n,i+1); // left call  
    levelPrint(root->right,n,i+1); // right call
}
void levelPrint2(Node* root,int n){
    if(root==NULL) return; // base case
    if(n==1){ // kaam
        cout<<root->val<<" ";
        return;
    }
    levelPrint2(root->left,n-1); // left call
    levelPrint2(root->right,n-1); // right call
}
void levelOrderTraversal(Node* root){
    int n=levels(root);
    for(int i=1;i<=n;i++){
        levelPrint(root,i,1);
        // cout<<endl;
    }
}
int main(){
    Node* root=build();
    // levelPrint(root,4,1);
    // levelPrint2(root,2);
    levelOrderTraversal(root);
    cout<<endl;
}