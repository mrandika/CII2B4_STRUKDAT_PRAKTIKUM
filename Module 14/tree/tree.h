//
// Created by Andika on 06/01/22.
//

#ifndef W14_TREE_H
#define W14_TREE_H

#define left(N) (N)->left
#define info(N) (N)->info
#define right(N) (N)->right

#define null nullptr

typedef int infotype;
typedef struct treeNode *address;

struct treeNode {
    address left;
    infotype info;
    address right;
};

address allocation(infotype value);
void insertBST(address &root, address n);
void inOrder(address root);

#endif //W14_TREE_H
