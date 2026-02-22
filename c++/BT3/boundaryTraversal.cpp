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
Node* build(int arr[],int n){ // BFS
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
void levelOrderTraversal(Node* root){ // DFS
    int n=levels(root);
    for(int i=1;i<=n;i++){
        levelPrint(root,i,1);
        cout<<endl;
    }
}
void leftBoundary(Node* root){
    if(root==NULL) return;
    if(root->left==NULL && root->right==NULL) return;
    cout<<root->val<<" ";
    if(root->left) leftBoundary(root->left);
    else leftBoundary(root->right);
}
void rightBoundary(Node* root){
    if(root==NULL) return;
    if(root->left==NULL && root->right==NULL) return;
    if(root->right) rightBoundary(root->right);
    else rightBoundary(root->left);
    cout<<root->val<<" ";
}
void leafNode(Node* root){
    if(root==NULL) return;
    if(root->left==NULL && root->right==NULL) cout<<root->val<<" ";
    leafNode(root->left);
    leafNode(root->right);
}
void boundary(Node* root){
    leftBoundary(root);
    leafNode(root);
    rightBoundary(root->right);
}
int main(){
    int arr[]={1,2,3,4,5,INT_MIN,6,7,INT_MIN,8,INT_MIN,9,10,INT_MIN,11,INT_MIN,12,INT_MIN,13,INT_MIN,14,15,16,INT_MIN,17,INT_MIN,INT_MIN,18,INT_MIN,19,INT_MIN,INT_MIN,INT_MIN,20,21,22,23,INT_MIN,24,25,26,27,INT_MIN,INT_MIN,28};
    int n=sizeof(arr)/sizeof(arr[0]);
    Node* root=build(arr,n);
    // levelOrderTraversal(root);
    boundary(root);
}