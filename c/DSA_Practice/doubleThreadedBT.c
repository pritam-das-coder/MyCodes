#include <stdio.h>
struct Node{
    char data;
    int left_flag;
    int right_flag;
    struct Node* left;
    struct Node* right;
};
struct Node *createNode(char data) {
    struct Node *node = (struct Node *)malloc(sizeof(struct Node));
    if (!node) { fprintf(stderr, "malloc failed\n"); exit(1); }
    node->data       = data;
    node->left_flag  = 0;
    node->right_flag = 0;
    node->left       = NULL;
    node->right      = NULL;
    return node;
}
struct Node *buildTree(void) {
 
    /* 1. Create every node */
    struct Node *a = createNode('a');
    struct Node *b = createNode('b');
    struct Node *c = createNode('c');
    struct Node *d = createNode('d');
    struct Node *e = createNode('e');
    struct Node *f = createNode('f');
    struct Node *g = createNode('g');
    struct Node *h = createNode('h');
    struct Node *i = createNode('i');
    struct Node *j = createNode('j');
    struct Node *k = createNode('k');
 
    /* 2. Wire real children — flag = 1 for every child link */
    a->left  = b;  a->left_flag  = 1;
    a->right = c;  a->right_flag = 1;
 
    b->left  = d;  b->left_flag  = 1;
    b->right = e;  b->right_flag = 1;
 
    c->left  = f;  c->left_flag  = 1;
    c->right = g;  c->right_flag = 1;
 
    d->left  = h;  d->left_flag  = 1;
    d->right = i;  d->right_flag = 1;
 
    /* f has no left child  → left pointer will become a thread (set below) */
    f->right = j;  f->right_flag = 1;
 
    /* j has no left child  → left pointer will become a thread (set below) */
    j->right = k;  j->right_flag = 1;
 
    /* 3. Wire thread pointers — flag stays 0 (already the default)
     *    Inorder: h  d  i  b  e  a  f  j  k  c  g
     *    index:   0  1  2  3  4  5  6  7  8  9  10
     */
 
    /* h  — first node: no predecessor; right thread → d (successor) */
    h->left       = NULL;   h->left_flag  = 0;
    h->right      = d;      h->right_flag = 0;
 
    /* i  — left thread → d (predecessor);  right thread → b (successor) */
    i->left       = d;      i->left_flag  = 0;
    i->right      = b;      i->right_flag = 0;
 
    /* e  — left thread → b;  right thread → a */
    e->left       = b;      e->left_flag  = 0;
    e->right      = a;      e->right_flag = 0;
 
    /* f  — left thread → a;  has real right child j (flag already 1) */
    f->left       = a;      f->left_flag  = 0;
 
    /* j  — left thread → f;  has real right child k (flag already 1) */
    j->left       = f;      j->left_flag  = 0;
 
    /* k  — left thread → j;  right thread → c */
    k->left       = j;      k->left_flag  = 0;
    k->right      = c;      k->right_flag = 0;
 
    /* g  — left thread → c (predecessor);  last node: right → NULL */
    g->left       = c;      g->left_flag  = 0;
    g->right      = NULL;   g->right_flag = 0;
 
    return a;   /* root */
}
int main(){

}