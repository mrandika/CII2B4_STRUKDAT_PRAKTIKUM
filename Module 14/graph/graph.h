//
// Created by Andika on 06/01/22.
//

#ifndef W14_GRAPH_H
#define W14_GRAPH_H

#define id(N) (N)->id
#define first_node(N) (N).firstNode
#define next_node(N) (N)->nextNode

#define destination(E) (E)->destination
#define weight(E) (E)->weight
#define first_edge(E) ((E)->firstEdge)
#define next_edge(E) (E)->nextEdge

#define null nullptr

typedef struct node *nodeAddress;
typedef struct edge *edgeAddress;

struct node {
    char id;
    nodeAddress nextNode;
    edgeAddress firstEdge;
};

struct edge {
    char destination;
    int weight;
    edgeAddress nextEdge;
};

struct graph {
    nodeAddress firstNode;
};

// Graph
void createGraph(graph &g);

// Node
void createNode(char id, nodeAddress &node);
void insertNewNode(graph &g, char id);
nodeAddress findNode(graph &g, char id);
void printNode(graph g);

// App-Specific
void showPeta(graph g);
void connecting(graph &g, char origin, char destination, int weight);
int biayaPerbaikanJalan(graph g);

#endif //W14_GRAPH_H
