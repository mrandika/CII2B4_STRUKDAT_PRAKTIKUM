#include <iostream>
#include "sll.h"

/*
 * Nama: Muhammad Rizki Andika
 * NIM: 1301204058
 */

using namespace std;

int main() {
    list l;
    address p;
    infotype pegawai;

    int n;
    string nip;

    // START OF SOAL TERBIMBING
    /*
     * Testing create_list, new_element, and insert_last
     */
    create_list(l);
    pegawai.nama = "Andika";
    pegawai.nip = "123";
    pegawai.gaji = 1000;

    p = new_element(pegawai);
    insert_last(l, p);

    pegawai.nama = "Andiki";
    pegawai.nip = "456";
    pegawai.gaji = 1500;

    p = new_element(pegawai);
    insert_last(l, p);

    pegawai.nama = "Andiku";
    pegawai.nip = "789";
    pegawai.gaji = 1250;

    p = new_element(pegawai);
    insert_last(l, p);

    pegawai.nama = "Andike";
    pegawai.nip = "098";
    pegawai.gaji = 1150;

    p = new_element(pegawai);
    insert_last(l, p);

    pegawai.nama = "Andiko";
    pegawai.nip = "765";
    pegawai.gaji = 500;

    p = new_element(pegawai);
    insert_last(l, p);

    // --- //
    /*
     * Testing delete_first, delete_last, delete_after
     */
    delete_first(l, p);
    cout << "Pegawai dengan nama " << info(p).nama << ", dengan NIP " << info(p).nip << " telah dihapus. (delete_first)" << endl;

    delete_last(l, p);
    cout << "Pegawai dengan nama " << info(p).nama << ", dengan NIP " << info(p).nip << " telah dihapus. (delete_last)" << endl;

    delete_after(l, search_by_nip(l, "456"), p);
    if (p != null) {
        cout << "Pegawai dengan nama " << info(p).nama << ", dengan NIP " << info(p).nip << " telah dihapus. (delete_after)" << endl;
    } else {
        cout << "Pegawai tidak dihapus karena tidak ditemukan." << endl;
    }

    cout << endl;

    show_all_data(l);

    // --- //
    /*
     * Testing add_n_data, show_all_data
     */
    cout << "Masukan jumlah data yang ingin dimasukan: "; cin >> n;
    add_n_data(l, n);
    show_all_data(l);

    cout << endl;

    // -- //
    /*
     * Testing search_by_nip, delete_data
     */
    cout << "Masukan NIP pegawai yang ingin dicari: "; cin >> nip;
    p = search_by_nip(l, nip);
    if (p != null) {
        cout << "Pegawai ditemukan." << endl;

        cout << "Nama: " << info(p).nama << endl;
        cout << "NIP: " << info(p).nip << endl;
        cout << "Gaji: " << info(p).gaji << endl;
    } else {
        cout << "Pegawai tidak ditemukan." << endl;
    }

    cout << endl;

    cout << "Masukan NIP pegawai yang ingin dihapus: "; cin >> nip;
    delete_data(l, nip);

    show_all_data(l);

    cout << endl;

    // -- //
    /*
     * Testing jumlah_pegawai, total_salary, average_salary
     */
    cout << "Jumlah pegawai: " << jumlah_pegawai(l) << endl;
    cout << "Total pengeluaran untuk gaji pegawai: Rp." << total_salary(l) << endl;
    cout << "Rata-rata gaji pegawai: Rp." << average_salary(l) << endl;

    cout << endl;

    // -- //
    /*
     * Testing highest_salary
     */
    p = highest_salary(l);
    cout << "Pegawai dengan gaji tertinggi adalah " << info(p).nama << " (" << info(p).nip << ") dengan gaji sebesar Rp." << info(p).gaji << endl;

    cout << endl;

    // END OF SOAL TERBIMBING

    // START OF SOAL MANDIRI
    /*
     * Reset the list to empty state
     */
    create_list(l);
    show_all_data(l);

    int selection;
    char command;

    p = null;

    selection = menu_selection();
    while (selection > 0 && selection <= 7) {
        switch (selection) {
            case 1:
                n = 0;
                cout << "Masukan jumlah data yang ingin dimasukan: "; cin >> n;
                add_n_data(l, n);
                show_all_data(l);

                cout << "Kembali ke menu utama? (Y/N): "; cin >> command;

                if (tolower(command) == 'y') {
                    cout << endl;
                    selection = menu_selection();
                }

                break;
            case 2:
                cout << "Data Pegawai:" << endl;
                show_all_data(l);

                cout << "Kembali ke menu utama? (Y/N): "; cin >> command;

                if (tolower(command) == 'y') {
                    cout << endl;
                    selection = menu_selection();
                }

                break;
            case 3:
                cout << "Masukan NIP pegawai yang ingin dicari: "; cin >> nip;
                p = search_by_nip(l, nip);
                if (p != null) {
                    cout << "Pegawai ditemukan." << endl;

                    cout << "Nama: " << info(p).nama << endl;
                    cout << "NIP: " << info(p).nip << endl;
                    cout << "Gaji: " << info(p).gaji << endl;
                } else {
                    cout << "Pegawai tidak ditemukan." << endl;
                }

                cout << "Kembali ke menu utama? (Y/N): "; cin >> command;

                if (tolower(command) == 'y') {
                    cout << endl;
                    selection = menu_selection();
                }

                break;
            case 4:
                cout << "Masukan NIP pegawai yang ingin dihapus: "; cin >> nip;
                delete_data(l, nip);

                show_all_data(l);

                cout << "Kembali ke menu utama? (Y/N): "; cin >> command;

                if (tolower(command) == 'y') {
                    cout << endl;
                    selection = menu_selection();
                }

                break;
            case 5:
                cout << "Jumlah pegawai: " << jumlah_pegawai(l) << endl;

                cout << "Kembali ke menu utama? (Y/N): "; cin >> command;

                if (tolower(command) == 'y') {
                    cout << endl;
                    selection = menu_selection();
                }

                break;
            case 6:
                cout << "Rata-rata gaji pegawai: Rp." << average_salary(l) << endl;

                cout << "Kembali ke menu utama? (Y/N): "; cin >> command;

                if (tolower(command) == 'y') {
                    cout << endl;
                    selection = menu_selection();
                }

                break;
            case 7:
                p = highest_salary(l);
                if (p != null) {
                    cout << "Pegawai dengan gaji tertinggi adalah " << info(p).nama << " (" << info(p).nip << ") dengan gaji sebesar Rp." << info(p).gaji << endl;
                } else {
                    cout << "Tidak ada pegawai dengan gaji tertinggi" << endl;
                }
 
                cout << "Kembali ke menu utama? (Y/N): "; cin >> command;

                if (tolower(command) == 'y') {
                    cout << endl;
                    selection = menu_selection();
                }

                break;
        }
    }

    cout << "ANDA TELAH KELUAR DARI PROGRAM" << endl;

    // END OF SOAL MANDIRI
    return 0;
}
