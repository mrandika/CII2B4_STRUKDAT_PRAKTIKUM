//
// Created by Andika on 28/10/21.
//

#include <iostream>
#include "DLL_First_Last.h"

using namespace std;

void createList(list &l) {
    /*
     * Nama: Muhammad Rizki Andika
     * NIM: 1301204058
     */

    first(l) = null;
    last(l) = null;
}

address createElement(infotype value) {
    /*
     * Nama: Muhammad Rizki Andika
     * NIM: 1301204058
     */

    address newNode;

    newNode = new node;

    prev(newNode) = null;
    info(newNode) = value;
    next(newNode) = null;

    return newNode;
}

void insertFirst(list &l, address p) {
    /*
     * Nama: Muhammad Rizki Andika
     * NIM: 1301204058
     */

    // Check if the list are empty first
    if (first(l) != null && last(l) != null) {
        next(p) = first(l);
        prev(first(l)) = p;
        first(l) = p;
    } else {
        first(l) = p;
        last(l) = p;
    }
}

void insertLast(list &l, address p) {
    /*
     * Nama: Muhammad Rizki Andika
     * NIM: 1301204058
     */

    if (first(l) == null) {
        first(l) = p;
        last(l) = p;
    } else {
        next(last(l)) = p;
        prev(p) = last(l);
        last(l) = p;
    }
}

void insertAfter(address prec, address p) {
    /*
     * Nama: Muhammad Rizki Andika
     * NIM: 1301204058
     */

    next(p) = next(prec);
    prev(p) = prec;
    prev(next(prec)) = p;
    next(prec) = p;
}

void insertAscending(list &l, infotype value) {
    /*
     * Nama: Muhammad Rizki Andika
     * NIM: 1301204058
     */

    address p, q;

    /*
     * We need to check first if the list empty or the first value is greater than the value
     */
    if ((first(l) == null && last(l) == null) || info(first(l)) > value) {
        p = createElement(value);
        insertFirst(l, p);
    } else if (info(last(l)) < value) {
        // If the last value is less than value, then we know that we're using insert last!
        p = createElement(value);
        insertLast(l, p);
    } else {
        // If not both, we need to iterate through the element and find the position
        p = first(l);

        while (value >= info(p) && next(p) != null) {
            p = next(p);
        }

        q = createElement(value);
        insertAfter(prev(p), q);
    }
}

void deleteFirst(list &l, address p) {
    /*
     * Nama: Muhammad Rizki Andika
     * NIM: 1301204058
     */

    p = first(l);

    if (next(p) == null) {
        first(l) = null;
        last(l) = null;
    } else {
        first(l) = next(first(l));
        prev(first(l)) = null;
        next(p) = null;
    }
}

void deleteLast(list &l, address p) {
    /*
     * Nama: Muhammad Rizki Andika
     * NIM: 1301204058
     */

    p = last(l);

    if (first(l) != null && last(l) != null) {
        p = last(l);
        last(l) = prev(last(l));
        prev(p) = null;
        next(last(l)) = null;
    } else {
        p = first(l);
        first(l) = null;
        last(l) = null;
    }
}

void deleteAfter(address prec, address p) {
    /*
     * Nama: Muhammad Rizki Andika
     * NIM: 1301204058
     */

    p = next(prec);
    next(prec) = next(p);
    prev(next(p)) = prec;
    next(p) = null;
    prev(p) = null;
}

void deleteElement(list &l, infotype value) {
    /*
     * Nama: Muhammad Rizki Andika
     * NIM: 1301204058
     */

    address p, q;

    p = first(l);
    q = last(l);

    /*
     * We need to check the head and tail first!
     */
    if (info(p) == value) {
        deleteFirst(l, p);
    } else if (info(q) == value) {
        deleteLast(l, p);
    } else {
        // If the element is not on the head nor tail, we need to iterate the list!
        while (info(p) != value) {
            p = next(p);
        }

        // Hence p = next(p), we need to use prev(p) to point prev element to be deleted!
        deleteAfter(prev(p), q);
    }
}

void printList(list l) {
    /*
     * Nama: Muhammad Rizki Andika
     * NIM: 1301204058
     */

    address p;

    p = first(l);

    cout << "{ ";

    while (p != null) {
        cout << info(p) << " ";
        p = next(p);
    }

    cout << "} " << endl;
}

bool findElement(list l, infotype value) {
    /*
     * Nama: Muhammad Rizki Andika
     * NIM: 1301204058
     */

    address p;
    bool isFound;

    p = first(l);
    isFound = false;

    while (!isFound && info(p) <= value) {
        if (info(p) == value) {
            // Invalidate the loop
            isFound = true;
        } else {
            if (next(p) != null) {
                p = next(p);
            } else {
                // Invalidate the loop
                value = -1;
            }
        }
    }

    return isFound;
}

int frequencyOfElement(list l, infotype value) {
    /*
     * Nama: Muhammad Rizki Andika
     * NIM: 1301204058
     */

    address p;
    int count;

    p = first(l);
    count = 0;

    // Check if element is exist on the list, if not, we skip the iteration!
    if (findElement(l, value)) {
        while (p != null) {
            if (info(p) == value) {
                count++;
            }

            p = next(p);
        }
    }

    return count;
}