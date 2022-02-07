//
// Created by Andika on 14/10/21.
//
#include <iostream>
#include "mylist.h"

using namespace std;

void createList(list &l) {
    /*
     * Nama: Muhammad Rizki Andika
     * NIM: 1301204058
     */

    first(l) = null;
}

infotype newMahasiswa(string nama, string nim, float ipk) {
    /*
     * Nama: Muhammad Rizki Andika
     * NIM: 1301204058
     */

    infotype mhs;

    mhs.nama = nama;
    mhs.nim = nim;
    mhs.ipk = ipk;

    return mhs;
}

address newElement(infotype dataBaru) {
    /*
     * Nama: Muhammad Rizki Andika
     * NIM: 1301204058
     */

    address p;

    p = new elmList;

    info(p) = dataBaru;
    next(p) = null;

    return p;
}

void insertFirst(list &l, address p) {
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

void insertLast(list &l, address p) {
    /*
     * Nama: Muhammad Rizki Andika
     * NIM: 1301204058
     */

    address y;

    if (first(l) == null) {
        first(l) = p;
    } else {
        y = first(l);

        while (next(y) != null) {
            y = next(y);
        }

        next(y) = p;
    }
}

address deleteFirst(list &l, address tmp) {
    /*
     * Nama: Muhammad Rizki Andika
     * NIM: 1301204058
     */

    address p;

    p = first(l);

    if (next(p) == null) {
        first(l) = null;
    } else {
        first(l) = next(p);
    }

    return p;
}

address deleteLast(list &l, address tmp) {
    /*
     * Nama: Muhammad Rizki Andika
     * NIM: 1301204058
     */

    address p, q;

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

    return p;
}

void printList(list l) {
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
            cout << "[" << i << "]" << endl;
            cout << "Nama: " << info(p).nama << endl;
            cout << "NIM: " << info(p).nim << endl;
            cout << "IPK: " << info(p).ipk << endl;

            i++;
            p = next(p);
        }

        cout << "List selesai ditampilkan!" << endl;
    }
}