#include <iostream>
using namespace std;

void hitungGaji();
void hitungParkir();

int main() {
    int pilihan;
    cout << "Pilih Program:\n1. Hitung Gaji\n2. Hitung Parkir\nPilihan: ";
    cin >> pilihan;

    if (pilihan == 1) {
        hitungGaji();
    }
    else if (pilihan == 2) {
        hitungParkir();
    }
    else {
        cout << "Pilihan tidak valid!" << endl;
    }

    return 0;
}

// Definisi fungsi hitungGaji
void hitungGaji() {
    int gajiPokok, tunjangan, pajak, totalGaji;

    cout << "Masukkan gaji pokok: ";
    cin >> gajiPokok;
    cout << "Masukkan tunjangan: ";
    cin >> tunjangan;
    cout << "Masukkan pajak: ";
    cin >> pajak;

    totalGaji = gajiPokok + tunjangan - pajak;
    cout << "Total gaji setelah pajak: " << totalGaji << endl;
}

// Definisi fungsi hitungParkir
void hitungParkir() {
    int jamParkir;
    int tarifPerJam = 2000;

    cout << "Masukkan jumlah jam parkir: ";
    cin >> jamParkir;

    int totalBiaya = jamParkir * tarifPerJam;
    cout << "Total biaya parkir: " << totalBiaya << endl;
}
