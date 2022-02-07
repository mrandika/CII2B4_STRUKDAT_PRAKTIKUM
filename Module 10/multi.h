//
// Created by Andika on 09/12/21.
//

/*
 * Nama: Muhammad Rizki Andika
 * NIM: 1301204058
 */

#include <iostream>
using namespace std;

#ifndef W10_MULTI_H
#define W10_MULTI_H

#define info(P) (P)->info
#define next(P) (P)->next
#define nextJual(S) (S)->nextJual
#define first(L) ((L).first)

#define null nullptr

typedef struct salesnode *salesAddress;
typedef struct jualnode *jualAddress;

struct sales {
    string nama;
    string gol;
};

struct salesnode {
    sales info;
    salesAddress next;
    jualAddress nextJual;
};

struct jualnode {
    int info;
    jualAddress next;
};

struct MultiLinkList {
    salesAddress first;
};

void createList(MultiLinkList &list);
void createSalesElement(sales info, salesAddress &s);
void createJualElement(int info, jualAddress &j);

void insertNewPenjualan(MultiLinkList &list, salesAddress s, jualAddress j);
void insertLastSales(MultiLinkList &list, salesAddress s);
void deleteFirstPenjualan(MultiLinkList &list, salesAddress s, jualAddress j);
void deleteLastPenjualan(MultiLinkList &list, salesAddress s, jualAddress &j);
void deleteAfterPenjualan(MultiLinkList &list, salesAddress s, jualAddress prec, jualAddress &j);
void deletePenjualan(MultiLinkList &list);

void showSalesData(MultiLinkList list);
salesAddress searchSales(MultiLinkList list, string namaSales);

#endif //W10_MULTI_H
