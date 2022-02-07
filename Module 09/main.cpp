#include <iostream>
#include "stack.h"
#include "queue.h"

using namespace std;

/*
 * Nama: Muhammad Rizki Andika
 * NIM: 1301204058
 */

int main() {
    // Start of tugas terbimbing
    stack s;

    createStack(s);

    printInfo(s);

    push(s, 2);
    push(s, 3);
    push(s, 4);
    push(s, 5);

    printInfo(s);
    pop(s);
    printInfo(s);

    createStack(s);

    push(s, 12);
    push(s, 17);
    push(s, 5);
    push(s, 10);
    push(s, 15);
    push(s, 25);
    push(s, 11);
    push(s, 22);
    push(s, 19);

    printInfo(s);
    ascending(s);
    printInfo(s);
    descending(s);
    printInfo(s);

    cout << endl;
    // End of tugas terbimbing

    // Start of tugas mandiri
    queue q;
    address element;

    createQueue(q);

    insertTransaction(q, "Andi transfer doni 50.000");
    insertTransaction(q, "Doni Trasnfer Saras 20.000");
    insertTransaction(q, "Tono Transfer Bili 20.000");

    printQueue(q);
    cout << endl;

    cout << "Memproses transaksi paling awal..." << endl;
    processTransaction(q, element);

    cout << info(element) << " telah selesai, menghapus..." << endl;
    cout << "Menampilkan transaksi terkini..." << endl << endl;

    printQueue(q);
    // End of tugas mandiri

    return 0;
}
