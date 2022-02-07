//
// Created by Andika on 28/10/21.
//

#ifndef W6_DLL_FIRST_LAST_H
#define W6_DLL_FIRST_LAST_H

/*
 * Nama: Muhammad Rizki Andika
 * NIM: 1301204058
 */

#define info(P) (P)->info
#define next(P) (P)->next
#define prev(P) (P)->prev
#define first(L) ((L).first)
#define last(L) ((L).last)

#define null nullptr

typedef int infotype;
typedef struct node *address;

struct node {
    address prev;
    infotype info;
    address next;
};

struct list {
    address first;
    address last;
};

void createList(list &l);
address createElement(infotype value);

void insertFirst(list &l, address p);
void insertLast(list &l, address p);
void insertAfter(address prec, address p);
void insertAscending(list &l, infotype value);

void deleteFirst(list &l, address p);
void deleteLast(list &l, address p);
void deleteAfter(address prec, address p);
void deleteElement(list &l, infotype value);

void printList(list l);
bool findElement(list l, infotype value);
int frequencyOfElement(list l, infotype value);

#endif //W6_DLL_FIRST_LAST_H
