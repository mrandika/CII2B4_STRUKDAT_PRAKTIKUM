//
// Created by Andika on 30/09/21.
//

#ifndef W2_HEADER_H
#define W2_HEADER_H
#define NMAX 10

#include <iostream>
using namespace std;

/*
 * Nama: Muhammad Rizki Andika
 * NIM: 1301204058
  */

// -- START OF SOAL BESAR -- //

struct mahasiswa {
    string nama;
    string nim;
    float ipk;
    int semester;
    int kodeUnik;
};

struct dataMahasiswa {
    int count;
    mahasiswa data[NMAX];
};

int getMhsProdiCode(string nim);
string getMhsProdiName(int code);
bool isMhsCumlaude(float ipk, int semester);
bool isMhsPrestasi(int kodeUnik);
mahasiswa getHighestIpk(dataMahasiswa &dataMhs);
double averageIpk(dataMahasiswa dataMhs);

// -- END OF SOAL BESAR -- //

#endif //W2_HEADER_H
