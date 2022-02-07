//
// Created by Andika on 30/09/21.
//

#include "header.h"

int getMhsProdiCode(string nim) {
    /*
     * Nama: Muhammad Rizki Andika
     * NIM: 1301204058
     */

    const char *p = nim.substr(1,1).c_str();
    int major_code = atoi(p);

    return major_code;
}

string getMhsProdiName(int code) {
    /*
     * Nama: Muhammad Rizki Andika
     * NIM: 1301204058
     */

    switch (code) {
        case 1:
            return "Art of Coffee";
        case 2:
            return "Creative Content";
        case 3:
            return "Mental Health";
        default:
            return "Tidak Diketahui";
    }
}

bool isMhsCumlaude(float ipk, int semester) {
    /*
     * Nama: Muhammad Rizki Andika
     * NIM: 1301204058
     */

    return ipk > 3.5 && semester <= 8;
}

bool isMhsPrestasi(int kodeUnik) {
    /*
     * Nama: Muhammad Rizki Andika
     * NIM: 1301204058
     */

    bool isAPrimeNumber = true;

    if (kodeUnik != 0 || kodeUnik != 1) {
        for (int i = 2; i <= kodeUnik/2; i++) {
            if (kodeUnik % i == 0) {
                isAPrimeNumber = false;
                break;
            }
        }
    }

    return isAPrimeNumber;
}

mahasiswa getHighestIpk(dataMahasiswa &dataMhs) {
    /*
     * Nama: Muhammad Rizki Andika
     * NIM: 1301204058
     */

    mahasiswa mhs;

    for (int i = 0; i < dataMhs.count; i++) {
        mhs = dataMhs.data[i];
        int j = i - 1;

        while (j >= 0 && mhs.ipk > dataMhs.data[j].ipk) {
            dataMhs.data[j + 1] = dataMhs.data[j];
            j -= 1;
        }

        dataMhs.data[j + 1] = mhs;
    }

    return dataMhs.data[0];
}

double averageIpk(dataMahasiswa dataMhs) {
    /*
     * Nama: Muhammad Rizki Andika
     * NIM: 1301204058
     */

    double sum = 0;

    for (int i = 0; i < dataMhs.count; i++) {
        sum += dataMhs.data[i].ipk;
    }

    return (double)sum/(double)dataMhs.count;
}

