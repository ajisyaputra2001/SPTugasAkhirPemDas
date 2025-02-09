#include <iostream>
using namespace std;
void hitungGaji() {
    string nama;
    int golongan, jamKerja;
    int upahPerJam, totalGaji;

    cout << "Masukkan nama anda: ";
    cin >> nama;
    cout << "Masukkan golongan: ";
    cin >> golongan;
    cout << "Masukkan jam kerja per minggu: ";
    cin >> jamKerja;

    // Menentukan upah per jam berdasarkan golongan
    if (golongan == 1) {
        upahPerJam = 25000;
    }
    else if (golongan == 2) {
        upahPerJam = 35000;
    }
    else if (golongan == 3) {
        upahPerJam = 50000;
    }
    else {
        cout << "Golongan tidak valid!" << endl;
        return;
    }

    // Menghitung total gaji
    if (jamKerja > 48) {
        int uangLembur = (jamKerja - 48) * 10000;
        totalGaji = (upahPerJam * jamKerja) + uangLembur;
    }
    else {
        totalGaji = upahPerJam * jamKerja;
    }

    cout << "Total Gaji " << nama << " per minggu: " << totalGaji << endl;
}