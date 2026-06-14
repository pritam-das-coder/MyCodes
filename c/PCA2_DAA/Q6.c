#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <limits.h>

#define N 4

typedef struct Node {
    struct Node* parent;
    int mat[N][N];
    int x, y; 
    int cost;
    int level;
} Node;

Node* newNode(int mat[N][N], int x, int y, int newX, int newY, int level, Node* parent) {
    Node* node = (Node*)malloc(sizeof(Node));
    node->parent = parent;
    memcpy(node->mat, mat, sizeof(node->mat));
    
    int temp = node->mat[x][y];
    node->mat[x][y] = node->mat[newX][newY];
    node->mat[newX][newY] = temp;
    
    node->cost = INT_MAX;
    node->level = level;
    node->x = newX;
    node->y = newY;
    return node;
}

int calculateCost(int initial[N][N], int final[N][N]) {
    int count = 0;
    for (int i = 0; i < N; i++)
      for (int j = 0; j < N; j++)
        if (initial[i][j] && initial[i][j] != final[i][j])
           count++;
    return count;
}

void printMatrix(int mat[N][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++)
            printf("%3d ", mat[i][j]);
        printf("\n");
    }
}

bool isSolvableDFS(Node* node, int final[N][N], int max_depth) {
    if (node->level > max_depth) return false;
    
    node->cost = calculateCost(node->mat, final);
    if (node->cost == 0) {
        printf("Solved in %d steps!\n", node->level);
        printMatrix(node->mat);
        return true;
    }

    int row[] = { 1, 0, -1, 0 };
    int col[] = { 0, -1, 0, 1 };

    for (int i = 0; i < 4; i++) {
        if (node->x + row[i] >= 0 && node->x + row[i] < N && node->y + col[i] >= 0 && node->y + col[i] < N) {
            Node* child = newNode(node->mat, node->x, node->y, node->x + row[i], node->y + col[i], node->level + 1, node);
            if (isSolvableDFS(child, final, max_depth)) return true;
            free(child);
        }
    }
    return false;
}

int main() {
    int initial[N][N] = {
        {1, 2, 3, 4},
        {5, 6, 0, 8},
        {9, 10, 7, 11},
        {13, 14, 15, 12}
    };

    int final[N][N] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 0}
    };

    int x = 1, y = 2; 
    Node* root = newNode(initial, x, y, x, y, 0, NULL);
    
    printf("Searching for solution...\n");
    if(!isSolvableDFS(root, final, 10)) {
        printf("Solution not found within depth limit.\n");
    }
    
    return 0;
}