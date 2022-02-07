//
// Created by Andika on 06/01/22.
//

#include <iostream>
#include "graph.h"

using namespace std;

void createGraph(graph &g) {
    /*
     * Nama: Muhammad Rizki Andika
     * NIM: 1301204058
     */

    first_node(g) = null;
}

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

void insertNewNode(graph &g, char id) {
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

nodeAddress findNode(graph &g, char id) {
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

        if (!found) {
            n = null;
        }
    }

    return n;
}

void printNode(graph g) {
    /*
     * Nama: Muhammad Rizki Andika
     * NIM: 1301204058
     */

    nodeAddress n;

    n = first_node(g);

    while (n != null) {
        cout << id(n) << endl;
        n = next_node(n);
    }
}

void showPeta(graph g) {
    /*
     * Nama: Muhammad Rizki Andika
     * NIM: 1301204058
     */

    nodeAddress node;
    edgeAddress edge;

    node = first_node(g);

    if (node != null) {
        while (node != null) {
            edge = first_edge(node);

            while (edge != null) {
                cout << id(node) << " ke " << destination(edge) << ": " << weight(edge) << endl;
                edge = next_edge(edge);
            }

            node = next_node(node);
        }
    } else {
        cout << "Graph Kosong!" << endl;
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

void connecting(graph &g, char origin, char destination, int weight) {
    /*
     * Nama: Muhammad Rizki Andika
     * NIM: 1301204058
     */

    nodeAddress n;
    edgeAddress e, y;

    n = findNode(g, origin);
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

int biayaPerbaikanJalan(graph g) {
    /*
     * Nama: Muhammad Rizki Andika
     * NIM: 1301204058
     */

    int base, totalPrice, totalLength;
    nodeAddress node;
    edgeAddress edge;

    base = 1000000;
    totalLength = 0;

    node = first_node(g);

    if (node != null) {
        while (node != null) {
            edge = first_edge(node);

            while (edge != null) {
                totalLength += weight(edge);
                edge = next_edge(edge);
            }

            node = next_node(node);
        }
    } else {
        cout << "Graph Kosong!" << endl;
    }

    totalPrice = base * totalLength;

    return totalPrice;
}