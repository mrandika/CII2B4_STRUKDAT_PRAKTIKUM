//
// Created by Andika on 25/11/21.
//

#include <iostream>
#include "SLL_Circular.h"

using namespace std;

void createList(list &l) {
    /*
     * Nama: Muhammad Rizki Andika
     * NIM: 1301204058
     */

    first(l) = null;
}

address createElement(infotype value) {
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

void insertFirst(list &l, address p) {
    /*
     * Nama: Muhammad Rizki Andika
     * NIM: 1301204058
     */

    address q;

    if (first(l) == null) {
        first(l) = p;
        next(p) = first(l);
    } else {
        next(p) = first(l);

        q = first(l);
        while (next(q) != next(p)) {
            q = next(q);
        }

        next(q) = p;
        first(l) = p;
    }
}

void insertLast(list &l, address p) {
    /*
     * Nama: Muhammad Rizki Andika
     * NIM: 1301204058
     */

    address q;

    if (first(l) == null) {
        first(l) = p;
        next(p) = first(l);
    } else {
        next(p) = first(l);

        q = first(l);
        while (next(q) != next(p)) {
            q = next(q);
        }

        next(q) = p;
    }
}

void insertAfter(address prec, address p) {
    /*
     * Nama: Muhammad Rizki Andika
     * NIM: 1301204058
     */

    next(p) = next(prec);
    next(prec) = p;
}

void insertDescending(list &l, infotype value) {
    /*
     * Nama: Muhammad Rizki Andika
     * NIM: 1301204058
     */

    address p, q, r;

    p = createElement(value);
    q = first(l);

    if (q == null) {
        insertFirst(l, p);
    } else {
        while(next(q) != first(l)) {
            q = next(q);
        }

        if (info(p).prioritas > info(first(l)).prioritas) {
            insertFirst(l, p);
        } else if (info(p).prioritas < info(q).prioritas) {
            insertLast(l, p);
        } else {
            while (info(p).prioritas < info(first(l)).prioritas) {
                q = r;
                r = next(r);
            }

            insertAfter(p, q);
        }
    }
}

void deleteFirst(list &l, address &p) {
    /*
     * Nama: Muhammad Rizki Andika
     * NIM: 1301204058
     */

    address q;

    p = first(l);

    if (next(p) == first(l)) {
        first(l) = null;
        next(p) = null;
    } else {
        first(l) = next(first(l));
        next(p) = null;
        q = first(l);

        while (next(q) != p) {
            q = next(q);
        }

        next(q) = first(l);
    }
}

void deleteLast(list &l, address p) {
    /*
     * Nama: Muhammad Rizki Andika
     * NIM: 1301204058
     */

    address q;

    p = first(l);

    if (next(p) == null) {
        first(l) = null;
    } else {
        q = first(l);

        while (next(next(q)) != first(l)) {
            q = next(q);
        }

        p = next(q);
        next(p) = null;
        next(q) = first(l);
    }
}

void deleteAfter(address prec, address p) {
    /*
     * Nama: Muhammad Rizki Andika
     * NIM: 1301204058
     */

    p = next(prec);
    next(prec) = next(p);
    next(p) = null;
}

void deleteElement(list &l, address p) {
    /*
     * Nama: Muhammad Rizki Andika
     * NIM: 1301204058
     */

    address q;

    q = next(p);

    if (p == first(l)) {
        deleteFirst(l, p);
    } else if (next(p) == first(l)) {
        deleteLast(l, p);
    } else {
        while (next(q) != p) {
            q = next(q);
        }

        deleteAfter(q, p);
    }
}

void printList(list l) {
    /*
     * Nama: Muhammad Rizki Andika
     * NIM: 1301204058
     */

    address p;

    p = first(l);

    if (p != null) {
        do {
            cout << info(p).nama << " " << info(p).prioritas << " " << info(p).sisa_durasi << endl;
            p = next(p);
        } while (p != first(l));
    }
}

int panjangList(list l) {
    /*
     * Nama: Muhammad Rizki Andika
     * NIM: 1301204058
     */

    address p;
    int count;

    p = first(l);
    count = 0;

    if (first(l) != null) {
        while (next(p) != first(l)) {
            count += 1;
            p = next(p);
        }

        count++;
    }

    return count;
}

void insertAplikasi(list &l, infotype value) {
    /*
     * Nama: Muhammad Rizki Andika
     * NIM: 1301204058
     */

    address p, q;

    if (panjangList(l) < MAX_APP) {
        insertDescending(l, value);
    } else {
        q = first(l);

        while(next(q) != first(l)) {
            q = next(q);
        }

        if (value.prioritas > info(q).prioritas) {
            deleteLast(l, p);
        } else {
            cout << "Maximum number of 5 apps reached!" << endl;
        }
    }
}

int eksekusi(address p, int durasi) {
    /*
     * Nama: Muhammad Rizki Andika
     * NIM: 1301204058
     */

    int remaining_duration;

    remaining_duration = info(p).sisa_durasi - durasi;
    info(p).sisa_durasi = remaining_duration;

    return remaining_duration;
}

void eksekusiMulti(list &l, address &current, int n, int duration) {
    /*
     * Nama: Muhammad Rizki Andika
     * NIM: 1301204058
     */

    address p;
    int remaining_duration;

    for (int i = 0; i < n; i++) {
        remaining_duration = eksekusi(current, duration);
        info(current).sisa_durasi = remaining_duration;

        p = current;
        current = next(current);

        if (info(p).sisa_durasi <= 0) {
            deleteElement(l, p);
        }
    }
}

void printListModified(listModified l) {
    /*
     * Nama: Muhammad Rizki Andika
     * NIM: 1301204058
     */

    address p;

    p = last(l);

    if (p != null) {
        do {
            cout << info(p).nama << " " << info(p).prioritas << " " << info(p).sisa_durasi << endl;
            p = next(p);
        } while (p != last(l));
    }
}

void insertFirstModified(listModified &l, address p) {
    /*
     * Nama: Muhammad Rizki Andika
     * NIM: 1301204058
     */

    address q;

    if (next(last(l)) == null) {
        next(last(l)) = p;
        next(p) = next(last(l));
    }else{
        q = next(last(l));
        while (next(q) != next(last(l))){
            q = next(q);
        }
        next(p) = next(last(l));
        next(last(l)) = p;
        next(q) = next(last(l));
    }
}

void insertLastModified(listModified &l, address p) {
    /*
     * Nama: Muhammad Rizki Andika
     * NIM: 1301204058
     */

    if (next(last(l)) == null){
        next(last(l)) = p;
        next(p) = next(last(l));
    }else{
        p = next(last(l));
        while (next(p) != next(last(l))) {
            p = next(p);
        }
        next(p) = p;
        next(p) = next(last(l));
    }
}