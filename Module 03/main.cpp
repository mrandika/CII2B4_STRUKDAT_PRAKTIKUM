#include <iostream>
#include "catalog.h"

using namespace std;

/*
 * NIM: 1301204058
 * Nama: Muhammad Rizki Andika
 */

int main() {
    Catalog storage;
    int i;

    storage.max = 8;
    storage.count = -1;

    // --- START OF SOAL A -- //
    add_data(storage, 6);
    view_data(storage);

    add_data(storage, 4);
    view_data(storage);

    add_data(storage, 8);
    view_data(storage);

    add_data(storage, 2);
    view_data(storage);

    cout << endl;

    i = search_data(storage, 8);
    cout << i << endl;

    i = search_data(storage, 5);
    cout << i << endl;
    // --- END OF SOAL A -- //

    cout << endl;

    // --- START OF SOAL B -- //
    reversed_view(storage);
    add_data(storage, 5);
    reversed_view(storage);

    cout << endl;

    view_data(storage);
    delete_data(storage);
    view_data(storage);
    // --- END OF SOAL B -- //

    return 0;
}
