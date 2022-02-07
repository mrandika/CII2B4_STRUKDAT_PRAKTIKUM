//
// Created by Andika on 14/10/21.
//

#include <iostream>
#ifndef W4_MYLIST_H
#define W4_MYLIST_H

#define info(P) (P)->info
#define next(P) (P)->next
#define first(L) ((L).first)
#define null nullptr

/*
 * Nama: Muhammad Rizki Andika
 * NIM: 1301204058
 */

using namespace std;

struct mahasiswa {
    string nama;
    string nim;
    float ipk;
};

typedef struct mahasiswa infotype;
typedef struct elmList *address;

struct elmList {
    infotype info;
    address next;
};

struct list {
    address first;
};

void createList(list &l);
infotype newMahasiswa(string nama, string nim, float ipk);
address newElement(infotype dataBaru);
void insertFirst(list &l, address p);
void insertLast(list &l, address p);
address deleteFirst(list &l, address tmp);
address deleteLast(list &l, address tmp);
void printList(list l);

#endif //W4_MYLIST_H
