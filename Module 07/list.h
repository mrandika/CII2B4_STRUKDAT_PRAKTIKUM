//
// Created by Andika on 04/11/21.
//
#include <iostream>
using namespace std;

#ifndef W7_LIST_H
#define W7_LIST_H

#define info(P) (P)->info
#define next(P) (P)->next
#define first(L) ((L).first)
#define null nullptr

typedef string infotype;
typedef struct node *address;

struct node {
    infotype info;
    address next;
};

struct list {
    address first;
};

void create_list(list &l);
address alokasi(infotype new_data);
void show(list l);
void insert_first(list &l, address p);
void delete_last(list &l, address &p);
bool find_string(list l, infotype x);

#endif //W7_LIST_H
