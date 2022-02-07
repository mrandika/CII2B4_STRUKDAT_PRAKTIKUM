//
// Created by Andika on 30/12/21.
//

#ifndef W13_TREE_H
#define W13_TREE_H

#define left(N) (N)->left
#define info(N) (N)->info
#define right(N) (N)->right

#define null nullptr

typedef int infotype;
typedef struct node *address;

struct node {
    address left;
    infotype info;
    address right;
};

address allocation(infotype value);
void insertBST(address &root, address n);
void inOrder(address root);
address findNode(address root, infotype value);
int countInternalNode(address root);
void printLeaves(address root);
int countLeaves(address root);

void buildTree(address &root);
void printNodeAddress(address root, infotype value);
int maxValue(address root);

#endif //W13_TREE_H

