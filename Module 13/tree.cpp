//
// Created by Andika on 30/12/21.
//

#include <iostream>
#include "tree.h"

using namespace std;

address allocation(infotype value) {
    address n;

    n = new node;
    left(n) = null;
    info(n) = value;
    right(n) = null;

    return n;
}

void insertBST(address &root, address n) {
    if (root == null) {
        root = n;
        return;
    }

    if (info(n) > info(root)) {
        insertBST(left(root), n);
    } else if (info(n) < info(root)) {
        insertBST(right(root), n);
    } else {
        cout << "Duplicate!" << endl;
    }
}

void inOrder(address root) {
    if (root == null) {
        return;
    }

    inOrder(right(root));
    cout << info(root) << " ";
    inOrder(left(root));
}

address findNode(address root, infotype value) {
    if (root == null) {
        return null;
    }

    if (value > maxValue(root)) {
        return null;
    } else {
        if (info(root) == value) {
            return root;
        }

        if (info(root) < value) {
            findNode(right(root), value);
        } else {
            findNode(left(root), value);
        }
    }
}
int countInternalNode(address root) {
    if (root == null || (left(root) == null && right(root) == null)) {
        return 0;
    }

    return 1 + countInternalNode(left(root)) + countInternalNode(right(root));
}

void printLeaves(address root) {
    if (root == null) {
        return;
    }

    if (!left(root) && !right(root)) {
        cout << info(root) << " ";
        return;
    }

    if (right(root) != null) {
        printLeaves(right(root));
    }

    if (left(root) != null) {
        printLeaves(left(root));
    }
}

int countLeaves(address root) {
    if (root == null) {
        return 0;
    }

    if (left(root) == null && right(root) == null) {
        return 1;
    } else {
        return countLeaves(left(root)) + countLeaves(right(root));
    }
}

void buildTree(address &root) {
    address node;
    int input;

    cout << "Masukan bilangan bulat non-negatif: "; cin >> input;

    while (input > 0) {
        node = allocation(input);
        insertBST(root, node);

        cout << "Masukan bilangan bulat non-negatif: "; cin >> input;
    }
}

void printNodeAddress(address root, infotype value) {
    cout << "Alamat memori dari Node dengan value " << value << " adalah " << findNode(root, value) << endl;
}

int maxValue(address root) {
    int node, leftNode, rightNode;

    if (root == null) {
        return 0;
    }

    // Search for minimum value in all subtree
    node = info(root);
    leftNode = maxValue(left(root));
    rightNode = maxValue(right(root));

    if (leftNode > node) {
        node = leftNode;
    }

    if (rightNode > node) {
        node = rightNode;
    }

    return node;
}