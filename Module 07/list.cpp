//
// Created by Andika on 04/11/21.
//

#include "list.h"
using namespace std;

void create_list(list &l) {
    /*
     * Nama: Muhammad Rizki Andika
     * NIM: 1301204058
     */

    first(l) = null;
}

address alokasi(infotype new_data) {
    /*
     * Nama: Muhammad Rizki Andika
     * NIM: 1301204058
     */
    address x;

    x = new node;

    info(x) = new_data;
    next(x) = null;

    return x;
}

void show(list l) {
    /*
     * Nama: Muhammad Rizki Andika
     * NIM: 1301204058
     */

    address p;
    int i;

    if (first(l) == null) {
        cout << "List Kosong!" << endl;
    } else {
        i = 1;
        p = first(l);

        while (p != null) {
            cout << "[" << i << "] ";
            cout << info(p) << endl;

            i++;
            p = next(p);
        }

        cout << "List selesai ditampilkan!" << endl;
    }
}

void insert_first(list &l, address p) {
    /*
     * Nama: Muhammad Rizki Andika
     * NIM: 1301204058
     */

    if (first(l) == null) {
        first(l) = p;
    } else {
        next(p) = first(l);
        first(l) = p;
    }
}

void delete_last(list &l, address &p) {
    /*
     * Nama: Muhammad Rizki Andika
     * NIM: 1301204058
     */

    address q;

    if (first(l) == null) {
        p = null;
        cout << "List Kosong!" << endl;
    } else if (next(first(l)) == null) {
        p = first(l);
        first(l) = null;
    } else {
        q = first(l);
        p = first(l);

        while (next(p) != null) {
            q = p;
            p = next(p);
        }

        next(q) = null;
    }
}

bool find_string(list l, infotype x) {
/*
     * Nama: Muhammad Rizki Andika
     * NIM: 1301204058
     */

    address p;
    bool isFound;

    isFound = false;

    if (first(l) == null) {
        cout << "List Kosong!" << endl;
    } else {
        p = first(l);

        while (p != null && !isFound) {
            if (info(p) == x) {
                isFound = true;
            } else {
                p = next(p);
            }
        }
    }

    return isFound;
}