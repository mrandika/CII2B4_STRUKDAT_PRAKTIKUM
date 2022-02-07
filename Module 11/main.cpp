#include <iostream>
#include "stack/stack.h"
#include "queue/queue.h"

using namespace std;

int main() {
    // -- Implementasi Stack --
    stack undo, redo;
    int data[NMAX];

    // Create stack element
    createStack(undo);
    createStack(redo);

    // Populate the set
    for (int i = 0; i < NMAX; i++) {
        data[i] = i;
    }

    // Push to undo
    for (int i = 0; i < NMAX; i++) {
        push(undo, data[i]);
    }

    cout << "Isi Stack Undo: " << endl;
    printInfo(undo);
    cout << endl;

    cout << "Isi Stack Redo: " << endl;
    printInfo(redo);
    cout << endl;

    // We test the undo function
    for (int i = 0; i < 3; i++) {
        undoAction(undo, redo);
    }

    cout << "Isi Stack Undo: " << endl;
    printInfo(undo);
    cout << endl;

    cout << "Isi Stack Redo: " << endl;
    printInfo(redo);
    cout << endl;

    // We test the redo function
    for (int i = 0; i < 2; i++) {
        redoAction(redo, undo);
    }

    cout << "Isi Stack Undo: " << endl;
    printInfo(undo);
    cout << endl;

    cout << "Isi Stack Redo: " << endl;
    printInfo(redo);
    cout << endl;

    // -- Implementasi Queue --
    queue q;
    mkInfotype mk;
    address mkElement;
    int input;

    createQueue(q);

    cout << "Penambahan Mata Kuliah" << endl;
    cout << "Jumlah data yang akan ditambahkan: "; cin >> input;

    for (int i = 0; i < input; i ++) {
        cout << "Kode MK: "; cin >> mk.kodeMK;
        cout << "Nama Dosen: "; cin >> mk.namaDosen;

        cout << endl;

        mkElement = createElement(mk);
        enqueue(q, mkElement);
    }

    printQueue(q);

    return 0;
}
