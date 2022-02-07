//
// Created by Andika on 02/12/21.
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
address createElement(queueInfotype value) {
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

void dequeue(queue &q, address &element) {
    /*
     * Nama: Muhammad Rizki Andika
     * NIM: 1301204058
     */

    if (isEmpty(q)) {
        cout << "Queue kosong!" << endl;
    } else if (head(q) == tail(q)) {
        // means that's only one element
        element = head(q);
        head(q) = null;
        tail(q) = null;
    } else {
        element = head(q);
        head(q) = next(head(q));
        next(element) = null;
    }
}

void insertTransaction(queue &q, string description) {
    /*
     * Nama: Muhammad Rizki Andika
     * NIM: 1301204058
     */

    address element;

    element = createElement(description);
    enqueue(q, element);
}

void processTransaction(queue &q, address &element) {
    /*
     * Nama: Muhammad Rizki Andika
     * NIM: 1301204058
     */

    dequeue(q, element);
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
            cout << "Deskripsi: " << info(element) << endl;

            i++;
            element = next(element);
            cout << endl;
        }

        cout << "Queue selesai ditampilkan!" << endl;
    }
}