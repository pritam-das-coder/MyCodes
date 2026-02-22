// Binary Search Tree
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
typedef struct tnode{
    int data;
    struct tnode *left;
    struct tnode *right;
}tnode;
tnode *ROOT;
tnode* getNode(int x){
    tnode *p=malloc(sizeof(tnode));
    p->data=x;
    p->left=NULL;
    p->right=NULL;
    return p;
}
void add(tnode *root,int x){
    if(root){
        if(root->data>x){
            if(root->left) add(root->left,x);
            else root->left=getNode(x);
        }
        else{
            if(root->right) add(root->right,x);
            else root->right=getNode(x);
        }
    }
    else ROOT=getNode(x);
}
void inorder(tnode *root){
    if(root){
        inorder(root->left);
        printf("%d ",root->data);
        inorder(root->right);
    }
}
void postorder(tnode *root){
    if(root){
        postorder(root->left);
        postorder(root->right);
        printf("%d ",root->data);
    }
}
void preorder(tnode *root){
    if(root){
        printf("%d ",root->data);
        preorder(root->left);
        preorder(root->right);
    }
}
int search(tnode *root,int x){
    if(root){
        if(root->data==x) return 1;
        else if(root->data>x) return search(root->left,x);
        else return search(root->right,x);
    }
    return 0;
}
int min(tnode *root){
    if(root){
        if(root->left==NULL) return root->data;
        return min(root->left);
    }
    return INT_MIN;
}
int max(tnode *root){
    if(root){
        if(root->right==NULL) return root->data;
        return max(root->right);
    }
    return INT_MIN;
}
int main(){
    ROOT=NULL;
    add(ROOT,13);
    add(ROOT,12);
    add(ROOT,6);
    add(ROOT,19);
    add(ROOT,16);
    add(ROOT,21);
    add(ROOT,28);
    add(ROOT,4);
    add(ROOT,2);
    add(ROOT,7);
    add(ROOT,17);
    //postorder(ROOT);
    //printf("%d",search(ROOT,1));
    printf("Minimum Element : %d\n",min(ROOT));
    printf("Maximum Element : %d",max(ROOT));
}