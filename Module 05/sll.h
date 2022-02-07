//
// Created by Andika on 21/10/21.
//

/*
 * Nama: Muhammad Rizki Andika
 * NIM: 1301204058
 */

#include <iostream>

using namespace std;

#ifndef W5_SLL_H
#define W5_SLL_H

#define info(P) (P)->info
#define next(P) (P)->next
#define first(L) ((L).first)

#define null nullptr

struct pegawai {
    string nama;
    string nip;
    int gaji;
};

typedef struct pegawai infotype;
typedef struct node *address;

struct node {
    infotype info;
    address next;
};

struct list {
    address first;
};

// Existing function
void create_list(list &l);
void insert_last(list &l, address p);
void delete_first(list &l, address &p);
void delete_last(list &l, address &p);
void delete_after(list &l, address prec, address &p);

// Created function
address new_element(infotype value);
void add_n_data(list &l, int n);
void show_all_data(list l);
address search_by_nip(list l, string nip);
void delete_data(list &l, string nip);
int jumlah_pegawai(list l);
int average_salary(list l);
int total_salary(list l);
address highest_salary(list l);

int menu_selection();

#endif //W5_SLL_H
