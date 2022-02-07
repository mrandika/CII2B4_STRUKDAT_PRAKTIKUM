#include <iostream>
#include <iomanip>
#include "header.h"

using namespace std;

int main() {
    /*
     * Nama: Muhammad Rizki Andika
     * NIM: 1301204058
     */

    int inputCount;
    string prodi[3] = {"Art of Coffee", "Creative Content", "Mental Health"};
    int countProdi[3];
    dataMahasiswa mhs;

    cout << "Jumlah data: "; cin >> inputCount; cout << endl;

    mhs.count = 0;

    for (int i = 0; i < inputCount; i++) {
        string nama;
        string nim;
        float ipk;
        int semester;
        int kodeUnik;

        cout << "Data ke " << i+1 << endl;
        cout << "Nama: "; cin >> nama;
        cout << "NIM: "; cin >> nim;
        cout << "Prodi Anda adalah " << getMhsProdiName(getMhsProdiCode(nim)) << endl;
        if (getMhsProdiCode(nim) == 1) {
            countProdi[0] += 1;
        } else if (getMhsProdiCode(nim) == 2) {
            countProdi[1] += 1;
        } else if (getMhsProdiCode(nim) == 3) {
            countProdi[2] += 1;
        }


        cout << "IPK: "; cin >> ipk;
        cout << "Semester: "; cin >> semester;
        if (isMhsCumlaude(ipk, semester)) {
            cout << "CUMLAUDE" << endl;
        }

        cout << "Kode Unik: "; cin >> kodeUnik;
        if (isMhsPrestasi(kodeUnik)) {
            cout << "MAHASISWA BERPRESTASI" << endl;
        }

        cout << endl;

        mhs.data[i].nama = nama;
        mhs.data[i].nim = nim;
        mhs.data[i].ipk = ipk;
        mhs.data[i].semester = semester;
        mhs.data[i].kodeUnik = kodeUnik;

        mhs.count += 1;
    }

    cout << "--- INPUT DATA SELESAI ---" << endl;
    cout << "IPK terbesar didapatkan oleh: " << getHighestIpk(mhs).nama << endl;
    cout << "IPK rata-rata: " << setprecision(3) << averageIpk(mhs) << endl;

    for (int i = 0; i < 3; i++) {
        cout << "Program Studi " << prodi[i] << ": " << countProdi[i] << endl;
    }

    return 0;
}
