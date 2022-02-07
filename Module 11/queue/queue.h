//
// Created by Andika on 16/12/21.
//

#include <iostream>
using namespace std;

#ifndef W11_QUEUE_H
#define W11_QUEUE_H

#define info(P) (P)->info
#define next(P) (P)->next
#define head(Q) ((Q).head)
#define tail(Q) ((Q).tail)

typedef struct matakuliah mkInfotype;
typedef struct node *address;

#define null nullptr

struct matakuliah {
    string kodeMK;
    string namaDosen;
};

struct node {
    mkInfotype info;
    address next;
};

struct queue {
    address head;
    address tail;
};

void createQueue(queue &q);
address createElement(mkInfotype value);

void enqueue(queue &q, address element);
void printQueue(queue q);

#endif //W11_QUEUE_H
