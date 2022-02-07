//
// Created by Andika on 09/12/21.
//

#include <iostream>
#include "multi.h"
using namespace std;

void createList(MultiLinkList &list) {
    /*
     * Nama: Muhammad Rizki Andika
     * NIM: 1301204058
     */

    first(list) = null;
}

void createSalesElement(sales info, salesAddress &s) {
    /*
     * Nama: Muhammad Rizki Andika
     * NIM: 1301204058
     */

    s = new salesnode;

    info(s) = info;
    next(s) = null;
    nextJual(s) = null;
}

void createJualElement(int info, jualAddress &j) {
    /*
     * Nama: Muhammad Rizki Andika
     * NIM: 1301204058
     */

    j = new jualnode;

    info(j) = info;
    next(j) = null;
}

void insertNewPenjualan(MultiLinkList &list, salesAddress s, jualAddress j) {
    /*
     * Nama: Muhammad Rizki Andika
     * NIM: 1301204058
     */

    jualAddress p;

    p = nextJual(s);

    if (p == null) {
        nextJual(s) = j;
    } else {
        while (next(p) != null) {
            p = next(p);
        }

        next(p) = j;
    }


}

void insertLastSales(MultiLinkList &list, salesAddress s) {
    /*
     * Nama: Muhammad Rizki Andika
     * NIM: 1301204058
     */

    salesAddress p;

    if (first(list) == null) {
        first(list) = s;
    } else {
        p = first(list);

        while (next(p) != null) {
            p = next(p);
        }

        next(p) = s;
    }
}

void deleteFirstPenjualan(MultiLinkList &list, salesAddress s, jualAddress j) {
    /*
     * Nama: Muhammad Rizki Andika
     * NIM: 1301204058
     */

    jualAddress p;

    p = nextJual(s);

    if (next(p) == null) {
        nextJual(s) = null;
    } else {
        nextJual(s) = next(p);
        p = null;
    }
}

void deleteLastPenjualan(MultiLinkList &list, salesAddress s, jualAddress &j) {
    /*
     * Nama: Muhammad Rizki Andika
     * NIM: 1301204058
     */

    jualAddress p;

    p = nextJual(s);

    while (next(p) != j) {
        p = next(p);
    }

    j = next(p);
    next(p) = next(j);
    next(j) = null;
}

void deleteAfterPenjualan(MultiLinkList &list, salesAddress s, jualAddress prec, jualAddress &j) {
    /*
     * Nama: Muhammad Rizki Andika
     * NIM: 1301204058
     */

    next(prec) = next(j);
    prec = null;
}

void deletePenjualan(MultiLinkList &list) {
    /*
     * Nama: Muhammad Rizki Andika
     * NIM: 1301204058
     */

    salesAddress s;
    jualAddress prevJ, j, outJ;

    s = first(list);

    while (s != null) {
        prevJ = nextJual(s);
        j = nextJual(s);

        while (j != null) {
            if (info(j) < 3) {
                if (nextJual(s) == j) {
                    deleteFirstPenjualan(list, s, j);
                } else if (next(j) == null) {
                    deleteLastPenjualan(list, s, j);
                } else {
                    deleteAfterPenjualan(list, s, prevJ, j);
                }
            }

            prevJ = j;
            j = next(j);
        }

        s = next(s);
    }
}

void showSalesData(MultiLinkList list) {
    /*
     * Nama: Muhammad Rizki Andika
     * NIM: 1301204058
     */

    salesAddress s;
    jualAddress j;

    s = first(list);

    while (s != null) {
        cout << info(s).nama << endl;

        j = nextJual(s);

        while (j != null) {
            cout << info(j) << " ";

            j = next(j);
        }

        s = next(s);

        cout << endl << endl;
    }
}

salesAddress searchSales(MultiLinkList list, string namaSales) {
    /*
     * Nama: Muhammad Rizki Andika
     * NIM: 1301204058
     */

    salesAddress p;

    p = first(list);

    while (p != null) {
        if (info(p).nama == namaSales) {
            return p;
        }

        p = next(p);
    }

    return null;
}
