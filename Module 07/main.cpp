#include <iostream>
#include "list.h"

using namespace std;

int main() {
    // Variable declare
    string data;
    bool dataStatus;

    list l;
    address p;

    p = null;

    // Membuat List kosong
    create_list(l);

    // Meminta data ke user sebanyak 10.
    for (int i = 1; i <= 10; i++) {
        cout << "Masukan data string: "; cin >> data;

        // Lalu data yang diberikan user akan dimasukkan ke List menggunakan insert yang sudah Anda buat
        p = alokasi(data);
        insert_first(l, p);
    }

    cout << endl;

    // Menampilkan data yang sudah diinput tadi dengan procedure show
    show(l);
    cout << endl;

    // Memanggil fungsi procedure yang Anda buat pada tahapan ke-4
    data = "Lorem";
    dataStatus = find_string(l, data);
    cout << "Data dengan value '" << data << "' ";

    if (dataStatus) {
        cout << "ditemukan didalam list.";
    } else {
        cout << "tidak ditemukan didalam list.";
    }

    cout << endl;

    data = "KL";
    dataStatus = find_string(l, data);
    cout << "Data dengan value '" << data << "' ";

    if (dataStatus) {
        cout << "ditemukan didalam list.";
    } else {
        cout << "tidak ditemukan didalam list.";
    }

    cout << endl << endl;

    // Menghapus N data terbelakang. N sesuai digit akhir NIM Anda. Gunakan procedure delete yang sudah Anda buat
    for (int i = 1; i <= 8; i++) {
        delete_last(l, p);

        cout << "Data dengan value " << info(p) << " dihapus!" << endl;
    }

    cout << endl;

    // Tampilkan list yang setelah Anda hapus datanya dengan procedure show
    show(l);

    return 0;
}
