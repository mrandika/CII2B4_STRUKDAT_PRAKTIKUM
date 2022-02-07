//
// Created by Andika on 07/10/21.
//

#ifndef W3_CATALOG_H
#define W3_CATALOG_H

/*
 * NIM: 1301204058
 * Nama: Muhammad Rizki Andika
 */

const int NMAX = 50;

struct Catalog {
    int data[NMAX];
    int max;
    int count;
};

// Soal A
void add_data(Catalog &catalog, int input);
void view_data(Catalog catalog);
int search_data(Catalog catalog, int value);

// Soal B
void reversed_view(Catalog catalog);
void delete_data(Catalog &catalog);

#endif //W3_CATALOG_H
