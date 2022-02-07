//
// Created by Andika on 22/12/21.
//

#ifndef W12_GRAPH_H
#define W12_GRAPH_H

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
void initGraph(graph &g);
void buildGraph(graph &g);

// Node
void createNode(char id, nodeAddress &node);
void addNode(graph &g, char id);
nodeAddress searchNode(graph &g, char id);
void printGraph(graph g);

// Edge
void createEdge(char destination, int weight, edgeAddress &edge);
void addEgde(graph &g, char origin, char destination, int weight);
int outDegree(graph g, char knotId);

#endif //W12_GRAPH_H
