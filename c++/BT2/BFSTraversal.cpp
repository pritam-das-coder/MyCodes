#include <iostream>
#include <climits>
#include <queue>
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
    Node* g=new Node(7);
    a->left=b;
    a->right=c;
    b->left=d;
    b->right=e;
    c->right=f;
    c->left=g;
    return a;
}
void levelOrderTraversal(Node* root){ // using queue
    queue<Node*> q; // don't push NULL
    q.push(root); // pushing the root
    while(q.size()){
        Node* temp=q.front();
        q.pop();
        cout<<temp->val<<" ";
        if(temp->left!=NULL) q.push(temp->left);
        if(temp->right!=NULL) q.push(temp->right);
    }
}
int main(){
    Node* root=build();
    levelOrderTraversal(root);
    cout<<endl;
}