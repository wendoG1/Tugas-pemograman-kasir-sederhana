#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    // Deklarasi variabel
    int jumlahBarang;
    double hargaBarang, totalHarga, uangBayar, kembalian;

    // Input jumlah dan harga barang
    cout << "Masukkan jumlah barang: ";
    cin >> jumlahBarang;

    cout << "Masukkan harga barang per item: ";
    cin >> hargaBarang;

    // Menghitung total harga
    totalHarga = jumlahBarang * hargaBarang;

    // Menampilkan total harga
    cout << "Total harga: " << totalHarga << endl;

    // Input uang bayar
    cout << "Masukkan jumlah uang yang dibayarkan: ";
    cin >> uangBayar;

    // Menghitung kembalian
    kembalian = uangBayar - totalHarga;

    // Menampilkan struk pembayaran
    cout << "\n===== Struk Pembayaran =====" << endl;
    cout << "Jumlah barang   : " << jumlahBarang << endl;
    cout << "Harga per item  : " << hargaBarang << endl;
    cout << "Total harga     : " << totalHarga << endl;
    cout << "Uang bayar      : " << uangBayar << endl;
    cout << "Kembalian       : " << kembalian << endl;
    cout << "============================" << endl;

    return 0;
}