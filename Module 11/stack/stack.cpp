//
// Created by Andika on 16/12/21.
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

void undoAction(stack &undo, stack &redo) {
    /*
     * Nama: Muhammad Rizki Andika
     * NIM: 1301204058
     */

    int data;

    if (!isEmpty(undo)) {
        data = pop(undo);
        push(redo, data);
    } else {
        cout << "Elemen Undo Kosong!" << endl;
    }
}

void redoAction(stack &redo, stack &undo) {
    /*
     * Nama: Muhammad Rizki Andika
     * NIM: 1301204058
     */

    int data;

    if (!isEmpty(redo)) {
        data = pop(redo);
        push(undo, data);
    } else {
        cout << "Elemen Redo Kosong!" << endl;
    }
}