#include <iostream>
#include "tree.h"

using namespace std;

int main() {
    int searchValue;
    address tree, node;

    // Initialize empty tree
    tree = null;

    // Insert data according to specs
    node = allocation(8);
    insertBST(tree, node);

    node = allocation(3);
    insertBST(tree, node);

    node = allocation(10);
    insertBST(tree, node);

    node = allocation(1);
    insertBST(tree, node);

    node = allocation(6);
    insertBST(tree, node);

    node = allocation(4);
    insertBST(tree, node);

    node = allocation(7);
    insertBST(tree, node);

    node = allocation(14);
    insertBST(tree, node);

    node = allocation(13);
    insertBST(tree, node);

    // Print the tree in ascending order
    inOrder(tree);
    cout << endl;

    if (findNode(tree, 3) != null) {
        cout << "Mencari Node dengan value = 3, ditemukan!" << endl;
    } else {
        cout << "Mencari Node dengan value = 3, tidak ditemukan!" << endl;
    }

    if (findNode(tree, 99) != null) {
        cout << "Mencari Node dengan value = 99, ditemukan!" << endl;
    } else {
        cout << "Mencari Node dengan value = 99, tidak ditemukan!" << endl;
    }

    cout << "Banyaknya internal node pada tree tersebut adalah " << countInternalNode(tree) << endl;

    // Print leaf of the tree
    printLeaves(tree);
    cout << endl;

    cout << "Banyaknya leaf pada tree tersebut adalah " << countLeaves(tree) << endl;

    cout << endl;

    // Reset the tree
    tree = null;

    // Rebuild
    buildTree(tree);
    cout << endl;

    // Print the new list
    inOrder(tree);
    cout << endl;

    cout << "Banyaknya internal node pada tree tersebut adalah " << countInternalNode(tree) << endl;
    cout << "Banyaknya leaf pada tree tersebut adalah " << countLeaves(tree) << endl;

    cout << endl;

    cout << "Cari alamat Node dengan value: "; cin >> searchValue;
    printNodeAddress(tree, searchValue);

    cout << "Max value dari tree tersebut adalah " << maxValue(tree) << endl;

    return 0;
}
