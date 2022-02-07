#include <iostream>
#include "graph.h"

using namespace std;

int main() {
    char id;
    graph g;
    nodeAddress nodeSearchResult;

    // Initialize and build the graph
    initGraph(g);
    buildGraph(g);

    cout << "Pencarian Node dengan ID: "; cin >> id;

    // Test the search function
    nodeSearchResult = searchNode(g, id);

    if (nodeSearchResult) {
        cout << "Node " << id << " ditemukan!" << endl;
    } else {
        cout << "Node " << id << " tidak ditemukan!" << endl;
    }

    printGraph(g);
    cout << endl;

    // Add the edge to A node
    addEgde(g, 'A', 'C', 12);
    addEgde(g, 'A', 'D', 60);

    // Add the edge to B node
    addEgde(g, 'B', 'A', 10);

    // Add the edge to C node
    addEgde(g, 'C', 'B', 20);
    addEgde(g, 'C', 'D', 32);

    // Add the edge to D node
    addEgde(g, 'E', 'A', 7);

    printGraph(g);
    cout << endl;

    // Test the out-degree function
    // Example:
    // A - (B: 10) -> (C: 5) -> (D: 9)
    // B - (A: 5)
    // The out-degree of node A would be 3, and B would be 1.
    cout << "Derajat keluar (out-degree) Node A adalah " << outDegree(g, 'A') << endl;

    return 0;
}
