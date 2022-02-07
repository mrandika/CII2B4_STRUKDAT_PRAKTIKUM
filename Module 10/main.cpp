/*
 * Nama: Muhammad Rizki Andika
 * NIM: 1301204058
 */

#include <iostream>
#include "multi.h"
using namespace std;

int main() {
    MultiLinkList l;
    salesAddress s;
    jualAddress j;

    sales salesInfo;

    // Init the list
    createList(l);

    // Init the element
    s = null;
    j = null;

    // Create sales element
    salesInfo.nama = "Siska";
    salesInfo.gol = "A";
    createSalesElement(salesInfo, s);
    insertLastSales(l, s);

    // Create corresponding child element
    createJualElement(5, j);
    insertNewPenjualan(l, s, j);

    createJualElement(3, j);
    insertNewPenjualan(l, s, j);

    createJualElement(4, j);
    insertNewPenjualan(l, s, j);

    createJualElement(2, j);
    insertNewPenjualan(l, s, j);

    // Create sales element
    salesInfo.nama = "Affan";
    salesInfo.gol = "C";
    createSalesElement(salesInfo, s);
    insertLastSales(l, s);

    // Create corresponding child element
    createJualElement(1, j);
    insertNewPenjualan(l, s, j);

    createJualElement(3, j);
    insertNewPenjualan(l, s, j);

    // Create sales element
    salesInfo.nama = "Cahya";
    salesInfo.gol = "A";
    createSalesElement(salesInfo, s);
    insertLastSales(l, s);

    // Create corresponding child element
    createJualElement(5, j);
    insertNewPenjualan(l, s, j);

    createJualElement(0, j);
    insertNewPenjualan(l, s, j);

    createJualElement(2, j);
    insertNewPenjualan(l, s, j);

    // Create sales element
    salesInfo.nama = "Lia";
    salesInfo.gol = "C";
    createSalesElement(salesInfo, s);
    insertLastSales(l, s);

    // Create sales element
    salesInfo.nama = "Hafidz";
    salesInfo.gol = "B";
    createSalesElement(salesInfo, s);
    insertLastSales(l, s);

    // Create corresponding child element
    createJualElement(1, j);
    insertNewPenjualan(l, s, j);

    // Show the list
    cout << "Data setelah insert: " << endl;
    showSalesData(l);

    // Delete penjualan below 3
    deletePenjualan(l);

    // Show the list
    cout << "Data setelah delete: " << endl;
    showSalesData(l);

    // Search certain sales
    cout << "Mencari data sales..." << endl;
    s = searchSales(l, "Siska");

    if (s != null) {
        cout << "Data ditemukan!" << endl;
        cout << "Nama: " << info(s).nama << endl;
        cout << "Golongan: " << info(s).gol << endl;
    } else {
        cout << "Data tidak ditemukan!" << endl;
    }


    return 0;
}
