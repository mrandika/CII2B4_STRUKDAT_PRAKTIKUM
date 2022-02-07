//
// Created by Andika on 06/01/22.
//

#include <iostream>
#include "tree.h"

using namespace std;

address allocation(infotype value) {
    /*
     * Nama: Muhammad Rizki Andika
     * NIM: 1301204058
     */

    address n;

    n = new treeNode;
    left(n) = null;
    info(n) = value;
    right(n) = null;

    return n;
}

void insertBST(address &root, address n) {
    /*
     * Nama: Muhammad Rizki Andika
     * NIM: 1301204058
     */

    if (root == null) {
        root = n;

        cout << "Successfully Inserted Node " << info(n) << endl;
        return;
    }

    if (info(n) > info(root)) {
        insertBST(left(root), n);
    } else if (info(n) < info(root)) {
        insertBST(right(root), n);
    } else {
        cout << "Duplicate of Node " << info(n) << endl;
    }
}

void inOrder(address root) {
    /*
     * Nama: Muhammad Rizki Andika
     * NIM: 1301204058
     */

    if (root == null) {
        return;
    }

    inOrder(right(root));
    cout << info(root) << " ";
    inOrder(left(root));
}