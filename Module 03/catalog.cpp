//
// Created by Andika on 07/10/21.
//

#include <iostream>
#include "catalog.h"

using namespace std;

void add_data(Catalog &catalog, int input) {
    /*
     * NIM: 1301204058
     * Nama: Muhammad Rizki Andika
     */

    if (catalog.count < catalog.max - 1) {
        int index = catalog.count + 1;

        catalog.data[index] = input;
        catalog.count++;
    }
}

void view_data(Catalog catalog) {
    /*
     * NIM: 1301204058
     * Nama: Muhammad Rizki Andika
     */

    for (int i = 0; i <= catalog.count; i++) {
        cout << catalog.data[i] << " ";
    }

    cout << endl;
}

int search_data(Catalog catalog, int value) {
    /*
     * NIM: 1301204058
     * Nama: Muhammad Rizki Andika
     */

    int index = -1;
    int i = 0;

    while (index == -1 && i <= catalog.count) {
        if (catalog.data[i] == value) {
            index = i;
        } else {
            i++;
        }
    }

    return index;
}

void reversed_view(Catalog catalog) {
    /*
     * NIM: 1301204058
     * Nama: Muhammad Rizki Andika
     */

    for (int i = catalog.count; i >= 0; i--) {
        cout << catalog.data[i] << " ";
    }

    cout << endl;
}

void delete_data(Catalog &catalog) {
    /*
     * NIM: 1301204058
     * Nama: Muhammad Rizki Andika
     */

    Catalog new_catalog;

    new_catalog.count = catalog.count - 1;
    new_catalog.max = catalog.max;

    for (int i = 0; i <= catalog.count - 1; i++) {
        new_catalog.data[i] = catalog.data[i];
    }

    catalog = new_catalog;
}