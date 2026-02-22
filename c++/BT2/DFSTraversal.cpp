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
void preorder(Node* root){ // preorder traversal
    if(root==NULL) return;
    cout<<root->val<<" "; // root
    preorder(root->left); // left
    preorder(root->right); // right
}
void postorder(Node* root){ // postorder traversal
    if(root==NULL) return;
    postorder(root->left); // left
    postorder(root->right); // right
    cout<<root->val<<" "; // root
}
void inorder(Node* root){ // inorder traversal
    if(root==NULL) return;
    inorder(root->left); // left
    cout<<root->val<<" "; // root
    inorder(root->right); // right
}
int main(){
    Node* root=build();
    postorder(root);
    cout<<endl;
}