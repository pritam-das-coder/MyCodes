// Find the product of all values in Binary Tree
#include <iostream>
using namespace std;
class Node{
public:
    int val;
    Node* left;
    Node* right;
    Node(int v){
        val=v;
        left=right=NULL;
    }
};
Node* build(){
    Node* a=new Node(1);
    Node* b=new Node(2);
    Node* c=new Node(4);
    Node* d=new Node(3);
    Node* e=new Node(11);
    Node* f=new Node(7);
    a->left=b;
    a->right=c;
    b->right=d;
    c->left=e;
    c->right=f;
    return a;
}
int prdt(Node* root){
    if(root==NULL) return 1;
    return root->val*prdt(root->left)*prdt(root->right);
}
int main(){
    Node* root=build();
    cout<<prdt(root)<<endl;
}