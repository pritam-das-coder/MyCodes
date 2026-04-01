#include <iostream>
#include <climits>
#include <queue>
using namespace std;
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int x) {
        data = x;
        left = right = NULL;
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
void fun(Node* root){
    queue<Node*> q;
    q.push(root);
    while(q.size()){
        Node* x=q.front();
        cout<<x->data<<" ";
        q.pop();
        if(x->left!=NULL) q.push(x->left);
        if(x->right!=NULL) q.push(x->right);
    }
    cout<<endl;
}
int main(){
    int arr[]={8, 10, 14, 8, 9, INT_MIN, INT_MIN, INT_MIN, INT_MIN, 5, INT_MIN, 9, 6, 3, INT_MIN, 3, 15, INT_MIN, INT_MIN, INT_MIN, INT_MIN, INT_MIN, INT_MIN};
    int n=sizeof(arr)/sizeof(arr[0]);
    Node* root=build(arr,n);
    fun(root);
}