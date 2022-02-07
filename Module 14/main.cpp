#include <iostream>
#include "graph/graph.h"
#include "tree/tree.h"

using namespace std;

int main() {
    graph g;
    address t;

    // Init the graph
    cout << "MEMBUAT NODE PADA GRAF..." << endl;
    createGraph(g);

    // Create corresponding node
    cout << "MEMBUAT EDGE PADA GRAF..." << endl;
    insertNewNode(g, 'A');
    insertNewNode(g, 'B');
    insertNewNode(g, 'C');
    insertNewNode(g, 'D');

    // Print the node
    cout << "LIST NODE PADA GRAF" << endl;
    printNode(g);

    // Create corresponding edge
    connecting(g, 'A', 'C', 5);
    connecting(g, 'A', 'D', 10);
    connecting(g, 'B', 'D', 7);
    connecting(g, 'D', 'C', 2);

    // Print the node and its edge
    cout << "LIST EDGE PADA NODE DI GRAF" << endl;
    showPeta(g);

    // Calculate the value
    cout << "Total biaya perbaikan jalan: Rp. " << biayaPerbaikanJalan(g) << endl;

    cout << endl;

    // Initialize empty tree
    t = null;

    // Insert Tree Node
    cout << "INSERT TREE NODE:" << endl;
    insertBST(t, allocation(9));
    insertBST(t, allocation(4));
    insertBST(t, allocation(8));
    insertBST(t, allocation(4));
    insertBST(t, allocation(7));
    insertBST(t, allocation(3));
    insertBST(t, allocation(10));
    insertBST(t, allocation(25));

    // Print In-order
    cout << "In-order-ly print: ";
    inOrder(t);
    cout << endl;

    return 0;
}

