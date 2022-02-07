#include <iostream>
using namespace std;

#include "SLL_Circular.h"

int main() {
    list l;
    address p, q;
    infotype data;

    createList(l);

    data.nama = "Word";
    data.prioritas = 5;
    data.sisa_durasi = 10;
    insertAplikasi(l, data);

    data.nama = "Excel";
    data.prioritas = 4;
    data.sisa_durasi = 20;
    insertAplikasi(l, data);

    data.nama = "Chrome";
    data.prioritas = 8;
    data.sisa_durasi = 5;
    insertAplikasi(l, data);

    data.nama = "WA";
    data.prioritas = 7;
    data.sisa_durasi = 10;
    insertAplikasi(l, data);

    data.nama = "Dota";
    data.prioritas = 10;
    data.sisa_durasi = 30;
    insertAplikasi(l, data);

    printList(l);

    data.nama = "Powerpoint";
    data.prioritas = 6;
    data.sisa_durasi = 15;
    insertAplikasi(l, data);

    printList(l);

    eksekusiMulti(l, first(l), 3, 10);

    printList(l);

    eksekusiMulti(l, next(first(l)), 3, 10);

    printList(l);
}
