//
// Created by Andika on 16/12/21.
//

#include <iostream>
#include "queue.h"

using namespace std;

bool isEmpty(queue q) {
    return head(q) == null && tail(q) == null;
}

void createQueue(queue &q) {
    /*
     * Nama: Muhammad Rizki Andika
     * NIM: 1301204058
     */

    head(q) = null;
    tail(q) = null;
}
address createElement(mkInfotype value) {
    /*
     * Nama: Muhammad Rizki Andika
     * NIM: 1301204058
     */

    address newNode;

    newNode = new node;

    info(newNode) = value;
    next(newNode) = null;

    return newNode;
}

void enqueue(queue &q, address element) {
    /*
     * Nama: Muhammad Rizki Andika
     * NIM: 1301204058
     */

    if (isEmpty(q)) {
        head(q) = element;
        tail(q) = element;
    } else {
        next(tail(q)) = element;
        tail(q) = element;
    }
}

void printQueue(queue q) {
    /*
     * Nama: Muhammad Rizki Andika
     * NIM: 1301204058
     */

    address element;
    int i;

    if (isEmpty(q)) {
        cout << "Queue Kosong!" << endl;
    } else {
        i = 1;
        element = head(q);

        while (element != null) {
            cout << "Antrian ke-" << i << endl;
            cout << "Kode MK: " << info(element).kodeMK << endl;
            cout << "Nama Dosen: " << info(element).namaDosen << endl;

            i++;
            element = next(element);
            cout << endl;
        }

        cout << "Queue selesai ditampilkan!" << endl;
    }
}