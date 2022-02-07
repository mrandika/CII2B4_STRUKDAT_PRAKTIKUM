//
// Created by Andika on 25/11/21.
//

#include <iostream>
using namespace std;

#ifndef W8_SLL_CIRCULAR_H
#define W8_SLL_CIRCULAR_H

#define info(P) (P)->info
#define next(P) (P)->next
#define prev(P) (P)->prev
#define first(L) ((L).first)
#define last(L) ((L).last)

#define null nullptr

const int MAX_APP = 5;

struct infotype {
    string nama;
    int prioritas;
    int sisa_durasi;
};

typedef struct node *address;

struct node {
    infotype info;
    address next;
};

struct list {
    address first;
};

struct listModified {
    address last;
};

void createList(list &l);
address createElement(infotype value);
void insertFirst(list &l, address p);
void insertLast(list &l, address p);
void insertAfter(address prec, address p);
void insertDescending(list &l, infotype value);
void deleteFirst(list &l, address &p);
void deleteLast(list &l, address p);
void deleteAfter(address prec, address p);
void deleteElement(list &l, address p);
void printList(list l);
int panjangList(list l);
void insertAplikasi(list &l, infotype value);
int eksekusi(address p, int durasi);
void eksekusiMulti(list &l, address &current, int n, int duration);

void printListModified(list l);
void insertFirstModified(list &l, address p);
void insertLastModified(list &l, address p);

#endif //W8_SLL_CIRCULAR_H
