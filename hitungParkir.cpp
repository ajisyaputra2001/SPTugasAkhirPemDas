#include <iostream>
using namespace std;
void hitungBiayaParkir() {
    int jumlahMotor, jumlahMobil, jamMasuk, jamKeluar;
    int biayaMobil = 5000, biayaMotor = 2000;

    cout << "Masukkan jumlah motor: ";
    cin >> jumlahMotor;
    cout << "Masukkan jumlah mobil: ";
    cin >> jumlahMobil;
    cout << "Input jam masuk (format 24 jam): ";
    cin >> jamMasuk;
    cout << "Input jam keluar (format 24 jam): ";
    cin >> jamKeluar;

    int durasiParkir = (jamKeluar >= jamMasuk) ? (jamKeluar - jamMasuk) : (24 - jamMasuk + jamKeluar);
    int totalBiaya = (jumlahMobil * biayaMobil + jumlahMotor * biayaMotor) * durasiParkir;

    cout << "Total biaya parkir: Rp " << totalBiaya << " (" << durasiParkir << " jam)" << endl;
}

