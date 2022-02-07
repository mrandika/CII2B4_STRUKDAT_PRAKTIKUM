//
// Created by Andika on 28/10/21.
//

#include <iostream>
#include "DLL_First_Last.h"

using namespace std;

/*
 * Nama: Muhammad Rizki Andika
 * NIM: 1301204058
 */

int main() {
    list l;

    // START OF SOAL TERBIMBING
    createList(l);
    printList(l);

    insertAscending(l, 25);
    printList(l);

    insertAscending(l, 10);
    printList(l);

    insertAscending(l, 32);
    printList(l);

    insertAscending(l, 3);
    printList(l);

    deleteElement(l, 32);
    printList(l);

    deleteElement(l, 3);
    printList(l);

    deleteElement(l, 10);
    printList(l);

    deleteElement(l, 25);
    printList(l);
    // END OF SOAL TERBIMBING

    // START OF SOAL MANDIRI
    createList(l);
    printList(l);

    insertAscending(l, 25);
    printList(l);

    insertAscending(l, 10);
    printList(l);

    insertAscending(l, 10);
    printList(l);

    insertAscending(l, 25);
    printList(l);

    insertAscending(l, 25);
    printList(l);

    cout << endl;

    cout << "Status elemen dengan value 10 (dalam 0/1): " << findElement(l, 10) << endl;

    cout << "Frekuensi elemen dengan value 10: " << frequencyOfElement(l, 10) << endl;
    cout << "Frekuensi elemen dengan value 25: " << frequencyOfElement(l, 25) << endl;
    cout << "Frekuensi elemen dengan value 2: " << frequencyOfElement(l, 2) << endl;
    // END OF SOAL MANDIRI

    return 0;
}
