//
// Created by Andika on 02/12/21.
//

#include <iostream>
#include "stack.h"

using namespace std;

void createStack(stack &s) {
    /*
     * Nama: Muhammad Rizki Andika
     * NIM: 1301204058
     */

    // Mitigate the unholy starts of array with 1.
    top(s) = -1;
}

bool isEmpty(stack s) {
    /*
     * Nama: Muhammad Rizki Andika
     * NIM: 1301204058
     */

    return top(s) == -1;
}

bool isFull(stack s) {
    /*
     * Nama: Muhammad Rizki Andika
     * NIM: 1301204058
     */

    return top(s) >= NMAX;
}

void push(stack &s, infotype value) {
    /*
     * Nama: Muhammad Rizki Andika
     * NIM: 1301204058
     */

    if (!isFull(s)) {
        top(s) += 1;
        info(s)[top(s)] = value;
    } else {
        cout << "Stack penuh!" << endl;
    }
}

int pop(stack &s) {
    /*
     * Nama: Muhammad Rizki Andika
     * NIM: 1301204058
     */

    infotype value;

    value = info(s)[top(s)];
    top(s) -= 1;

    return value;
}

void printInfo(stack s) {
    /*
     * Nama: Muhammad Rizki Andika
     * NIM: 1301204058
     */

    if (!isEmpty(s)) {
        for(int i = top(s); i >= 0; i--) {
            cout << info(s)[i] << " ";
        }

        cout << endl;
    } else {
        cout << "Stack kosong!" << endl;
    }
}

void ascending(stack &s) {
    /*
     * Nama: Muhammad Rizki Andika
     * NIM: 1301204058
     */

    int tmp;

    for(int i = 0; i < top(s); i++) {
        for(int j = i+1; j <= top(s); j++) {
            if (info(s)[i] > info(s)[j]) {
                tmp = info(s)[i];
                info(s)[i] = info(s)[j];
                info(s)[j] = tmp;
            }
        }
    }
}

void descending(stack &s) {
    /*
     * Nama: Muhammad Rizki Andika
     * NIM: 1301204058
     */

    int tmp;

    for(int i = 0; i < top(s); i++) {
        for(int j = i+1; j <= top(s); j++) {
            if (info(s)[i] < info(s)[j]) {
                tmp = info(s)[i];
                info(s)[i] = info(s)[j];
                info(s)[j] = tmp;
            }
        }
    }
}