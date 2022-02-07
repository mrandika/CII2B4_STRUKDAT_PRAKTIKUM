//
// Created by Andika on 02/12/21.
//
#include <iostream>
using namespace std;

/*
 * Nama: Muhammad Rizki Andika
 * NIM: 1301204058
 */

#ifndef W9_QUEUE_H
#define W9_QUEUE_H

#define info(P) (P)->info
#define next(P) (P)->next
#define head(Q) ((Q).head)
#define tail(Q) ((Q).tail)

typedef string queueInfotype;
typedef struct node *address;

#define null nullptr

struct node {
    queueInfotype info;
    address next;
};

struct queue {
    address head;
    address tail;
};

bool isEmpty(queue q);

void createQueue(queue &q);
address createElement(queueInfotype value);

void enqueue(queue &q, address element);
void dequeue(queue &q, address &element);

void insertTransaction(queue &q, string description);
void processTransaction(queue &q, address &element);

void printQueue(queue q);

#endif //W9_QUEUE_H
