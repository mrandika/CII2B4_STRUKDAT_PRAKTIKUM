//
// Created by Andika on 21/10/21.
//

#include <iostream>
#include "sll.h"

using namespace std;

// Existing function
void create_list(list &l) {
    /*
     * Nama: Muhammad Rizki Andika
     * NIM: 1301204058
     */

    first(l) = null;
}

void insert_last(list &l, address p) {
    /*
     * Nama: Muhammad Rizki Andika
     * NIM: 1301204058
     */

    address node;

    if (first(l) == null) {
        first(l) = p;
    } else {
        node = first(l);

        while (next(node) != null) {
            node = next(node);
        }

        next(node) = p;
    }
}

void delete_first(list &l, address &p) {
    /*
     * Nama: Muhammad Rizki Andika
     * NIM: 1301204058
     */

    address node;

    node = first(l);

    if (next(node) == null) {
        p = first(l);
        first(l) = null;
    } else {
        p = first(l);
        first(l) = next(node);
    }
}

void delete_last(list &l, address &p) {
    /*
     * Nama: Muhammad Rizki Andika
     * NIM: 1301204058
     */

    address node, prev_node;

    if (first(l) == null) {
        p = null;
        node = null;
        cout << "List Kosong!" << endl;
    } else if (next(first(l)) == null) {
        p = first(l);
        node = first(l);
        first(l) = null;
    } else {
        prev_node = first(l);
        node = first(l);

        while (next(node) != null) {
            prev_node = node;
            node = next(node);
        }

        p = next(prev_node);
        next(prev_node) = null;
    }
}

void delete_after(list &l, address prec, address &p) {
    /*
     * Nama: Muhammad Rizki Andika
     * NIM: 1301204058
     */

    if (prec != null) {
        address node;

        node = next(prec);
        next(prec) = next(node);

        p = node;
        next(node) = null;
    } else {
        p = null;
    }
}

// Created function
address new_element(infotype value) {
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

void add_n_data(list &l, int n) {
    /*
     * Nama: Muhammad Rizki Andika
     * NIM: 1301204058
     */

    pegawai dataPegawai;
    address pegawai;

    for (int i = 0; i < n; i++) {
        cout << "Masukkan nama pegawai baru: "; cin >> dataPegawai.nama;
        cout << "Masukkan NIP pegawai baru: "; cin >> dataPegawai.nip;
        cout << "Masukkan gaji pegawai baru: "; cin >> dataPegawai.gaji;

        cout << endl;

        pegawai = new_element(dataPegawai);
        insert_last(l, pegawai);
    }
}

void show_all_data(list l) {
    /*
     * Nama: Muhammad Rizki Andika
     * NIM: 1301204058
     */

    address node;
    int i;

    if (first(l) == null) {
        cout << "List Kosong!" << endl;
    } else {
        i = 1;
        node = first(l);

        while (node != null) {
            cout << "Data ke-" << i << ": " << endl;
            cout << "Nama: " << info(node).nama << endl;
            cout << "NIP: " << info(node).nip << endl;
            cout << "Gaji: " << info(node).gaji << endl;

            cout << endl;

            i++;
            node = next(node);
        }

        cout << "List selesai ditampilkan!" << endl;
    }
}

address search_by_nip(list l, string nip) {
    /*
     * Nama: Muhammad Rizki Andika
     * NIM: 1301204058
     */

    address node;
    bool found;

    node = first(l);
    found = false;

    if (first(l) == null) {
        cout << "List Kosong!" << endl;
    } else {
        while (node != null && !found) {
            if (info(node).nip == nip) {
                found = true;
            } else {
                node = next(node);
            }
        }
    }

    return node;
}

void delete_data(list &l, string nip) {
    /*
     * Nama: Muhammad Rizki Andika
     * NIM: 1301204058
     */

    address p, prev_node, node, next_node;

    prev_node = first(l);
    node = search_by_nip(l, nip);

    if (node != null) {
        next_node = next(node);

        if (next_node == null) {
            // We're on the last element
            delete_last(l, p);

            cout << "Pegawai dengan nama " << info(p).nama << ", dengan NIP " << info(p).nip << " telah dihapus. (delete_data, deleted with delete_last)" << endl << endl;
        } else {
            // Check if we on the first element
            if (prev_node == node) {
                // We're on the first element
                delete_first(l, p);

                cout << "Pegawai dengan nama " << info(p).nama << ", dengan NIP " << info(p).nip << " telah dihapus. (delete_data, deleted with delete_first)" << endl << endl;
            } else {
                // Keep iterating until the next element is our selected node
                // We need to look for the prev node for supplying `prec` param!
                while (next(prev_node) != node) {
                    prev_node = next(prev_node);
                }

                delete_after(l, prev_node, p);
                cout << "Pegawai dengan nama " << info(p).nama << ", dengan NIP " << info(p).nip << " telah dihapus. (delete_data, deleted with delete_after)" << endl << endl;
            }
        }
    } else {
        // Element about to delete not exist in list...
        cout << "Pegawai tidak dihapus karena tidak ditemukan." << endl;
    }
}

int jumlah_pegawai(list l) {
    /*
     * Nama: Muhammad Rizki Andika
     * NIM: 1301204058
     */

    address node;
    int count = 0;

    if (first(l) != null) {
        node = first(l);

        while (node != null) {
            count++;
            node = next(node);
        }
    }

    return count;
}

int average_salary(list l) {
    /*
     * Nama: Muhammad Rizki Andika
     * NIM: 1301204058
     */

    if (jumlah_pegawai(l) == 0) {
        return 0;
    } else if (jumlah_pegawai(l) == 1) {
        return total_salary(l);
    } else {
        return total_salary(l)/jumlah_pegawai(l);
    }
}

int total_salary(list l) {
    /*
     * Nama: Muhammad Rizki Andika
     * NIM: 1301204058
     */

    address node;
    int total_salary = 0;

    if (first(l) != null) {
        node = first(l);

        while (node != null) {
            total_salary += info(node).gaji;

            node = next(node);
        }
    }

    return total_salary;
}

address highest_salary(list l) {
    /*
     * Nama: Muhammad Rizki Andika
     * NIM: 1301204058
     */

    address node, highest_node;

    int highest = 0;

    highest_node = null;

    if (first(l) != null) {
        node = first(l);

        while (node != null) {
            if (highest < info(node).gaji) {
                highest = info(node).gaji;
                highest_node = node;
            }

            node = next(node);
        }
    }

    return highest_node;
}

int menu_selection() {
    /*
     * Nama: Muhammad Rizki Andika
     * NIM: 1301204058
     */

    int input = 0;

    cout << "=== MENU ===" << endl;
    cout << "1. Tambah data pegawai" << endl;
    cout << "2. Tampilkan data pegawai" << endl;
    cout << "3. Cari data pegawai berdasarkan NIP" << endl;
    cout << "4. Hapus data pegawai berdasarkan NIP" << endl;
    cout << "5. Jumlah pegawai saat ini" << endl;
    cout << "6. Rata-rata penghasilan pegawai" << endl;
    cout << "7. Nama pegawai dengan gaji tertinggi" << endl;
    cout << "0. Exit" << endl << endl;

    cout << "Pilih menu: "; cin >> input;
    return input;
}