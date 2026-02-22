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
    Node* b=new Node(2);
    Node* c=new Node(3);
    Node* d=new Node(4);
    Node* e=new Node(5);
    Node* f=new Node(6);
    // Node* g=new Node(63);
    a->left=b;
    a->right=c;
    b->left=d;
    b->right=e;
    c->left=f;
    // f->right=g;
    // c->right=g;
    return a;
}
void display(Node* root){ // inorder traversal
    if(root==NULL) return;
    display(root->left);
    cout<<root->val<<" ";
    display(root->right);
}
int sum(Node* root){
    if(root==NULL) return 0;
    return root->val+sum(root->left)+sum(root->right);
}
int size(Node* root){
    if(root==NULL) return 0;
    return 1+size(root->left)+size(root->right);
}
int maxTree(Node* root){
    if(root==NULL) return INT_MIN;
    return max(root->val,max(maxTree(root->left),maxTree(root->right)));
}
int noOfLevel(Node* root){
    if(root==NULL) return 0;
    return 1+max(noOfLevel(root->left),noOfLevel(root->right));
}
int main(){
    Node* root=build();
    display(root);
    cout<<endl;
    // cout<<sum(root);
    // cout<<size(root);
    // cout<<maxTree(root);
    cout<<noOfLevel(root);
}