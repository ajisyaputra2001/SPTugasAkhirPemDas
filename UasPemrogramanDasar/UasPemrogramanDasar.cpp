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
    if (jamKerja > 48) {
        int uangLembur = (jamKerja - 48) * 10000;
        totalGaji = (upahPerJam * jamKerja) + uangLembur;
    }
    else {
        totalGaji = upahPerJam * jamKerja;
    }
    cout << "Total Gaji " << nama << " per minggu: " << totalGaji << endl;
}
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
int main() {
    hitungGaji();
    cout << "\n";
    hitungBiayaParkir();
    return 0;
}
