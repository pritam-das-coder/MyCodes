// Binary Tree
#include <stdio.h>
#include <stdlib.h>
typedef struct tnode{
    char data;
    struct tnode *left;
    struct tnode *right;
}tnode;
tnode* getNode(char x){
    tnode *p=malloc(sizeof(tnode));
    p->data=x;
    p->left=NULL;
    p->right=NULL;
    return p;
}
tnode* buildTree(){
    tnode* a=getNode('a');
    tnode* b=getNode('b');
    tnode* c=getNode('c');
    tnode* d=getNode('d');
    tnode* e=getNode('e');
    tnode* h=getNode('h');
    tnode* i=getNode('i');
    a->left=b;
    a->right=c;
    b->left=d;
    b->right=e;
    e->left=h;
    e->right=i;
    return a;
}
void inorder(tnode *root){
    if(root){
        inorder(root->left);
        printf("%c ",root->data);
        inorder(root->right);
    }
}
void postorder(tnode *root){
    if(root){
        postorder(root->left);
        postorder(root->right);
        printf("%c ",root->data);
    }
}
void preorder(tnode *root){
    if(root){
        printf("%c ",root->data);
        preorder(root->left);
        preorder(root->right);
    }
}
int main(){
    tnode *ROOT=buildTree();
    printf("Preorder Traversal:\n");
    // inorder(ROOT);
    preorder(ROOT);
}