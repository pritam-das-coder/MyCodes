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
Node* build(int arr[],int n){
    queue<Node*> q;
    Node* root=new Node(arr[0]);
    q.push(root);
    int i=1,j=2;
    while(q.size() && i<n){
        Node* temp=q.front();
        q.pop();
        Node* l;
        Node* r;
        if(arr[i]!=INT_MIN) l=new Node(arr[i]);
        else l=NULL;
        if(j<n && arr[j]!=INT_MIN) r=new Node(arr[j]);
        else r=NULL;
        temp->left=l;
        temp->right=r;
        if(l!=NULL) q.push(l);
        if(r!=NULL) q.push(r);
        i+=2;
        j+=2;
    }
    return root;
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
    int arr[]={1,2,3,4,5,INT_MIN,6,INT_MIN,INT_MIN,7,8,9};
    // int arr[]={3,9,20,INT_MIN,INT_MIN,15,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    Node* root=build(arr,n);
    levelOrderTraversal(root);
}