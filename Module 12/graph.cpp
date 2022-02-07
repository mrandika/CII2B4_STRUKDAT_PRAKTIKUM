//
// Created by Andika on 22/12/21.
//

#include <iostream>
#include "graph.h"

using namespace std;

void createNode(char id, nodeAddress &node) {
    /*
     * Nama: Muhammad Rizki Andika
     * NIM: 1301204058
     */

    node = new struct node;

    id(node) = id;
    next_node(node) = null;
    first_edge(node) = null;
}

void initGraph(graph &g){
    /*
     * Nama: Muhammad Rizki Andika
     * NIM: 1301204058
     */

    first_node(g) = null;
}

void addNode(graph &g, char id) {
    /*
     * Nama: Muhammad Rizki Andika
     * NIM: 1301204058
     */

    nodeAddress n, y;

    createNode(id, n);

    if (first_node(g) == null) {
        first_node(g) = n;
    } else {
        y = first_node(g);

        while (next_node(y) != null) {
            y = next_node(y);
        }

        next_node(y) = n;
    }
}

void buildGraph(graph &g) {
    /*
     * Nama: Muhammad Rizki Andika
     * NIM: 1301204058
     */

    char id;

    cout << "Masukan ID Node: "; cin >> id;

    while (id >= 'A' && id <= 'Z') {
        addNode(g, id);

        cout << "Masukan ID Node: "; cin >> id;
    }
}

nodeAddress searchNode(graph &g, char id) {
    /*
     * Nama: Muhammad Rizki Andika
     * NIM: 1301204058
     */

    nodeAddress n;
    bool found;

    n = null;
    found = false;

    if (first_node(g) == null) {
        cout << "Graph Kosong!" << endl;
    } else {
        n = first_node(g);

        while (n != null && !found) {
            if (id(n) == id) {
                found = true;
            } else {
                n = next_node(n);
            }
        }
    }

    return n;
}

void printGraph(graph g) {
    /*
     * Nama: Muhammad Rizki Andika
     * NIM: 1301204058
     */

    nodeAddress n;
    edgeAddress e;

    n = null;
    e = null;

    if (first_node(g) == null) {
        cout << "Graph Kosong!" << endl;
    } else {
        n = first_node(g);

        while (n != null) {
            e = first_edge(n);

            cout << id(n) << ": ";
            while (e != null) {
                cout << "(" << destination(e) << ": " << weight(e) << ") ";

                e = next_edge(e);
            }

            n = next_node(n);
            cout << endl;
        }
    }
}

void createEdge(char destination, int weight, edgeAddress &edge) {
    /*
     * Nama: Muhammad Rizki Andika
     * NIM: 1301204058
     */

    edge = new struct edge;

    destination(edge) = destination;
    weight(edge) = weight;
    next_edge(edge) = null;
}

void addEgde(graph &g, char origin, char destination, int weight) {
    /*
     * Nama: Muhammad Rizki Andika
     * NIM: 1301204058
     */

    nodeAddress n;
    edgeAddress e, y;

    n = searchNode(g, origin);
    e = null;

    if (n != null) {
        // The node exist
        createEdge(destination, weight, e);

        if (first_edge(n) == null) {
            first_edge(n) = e;
        } else {
            y = first_edge(n);

            while (next_edge(y) != null) {
                y = next_edge(y);
            }

            next_edge(y) = e;
        }
    } else {
        // The node doesnt exist
        cout << "Tidak ada Node dengan ID " << origin << " pada graph." << endl;
    }
}

int outDegree(graph g, char knotId) {
    /*
     * Nama: Muhammad Rizki Andika
     * NIM: 1301204058
     */

    int sum;

    nodeAddress n;
    edgeAddress e;

    n = searchNode(g, knotId);
    e = first_edge(n);

    sum = 0;
    while (e != null) {
        sum++;

        e = next_edge(e);
    }

    return sum;
}