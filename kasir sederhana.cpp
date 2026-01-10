#include <iostream>
#include <iomanip> // untuk format tabel
using namespace std;

struct Barang {
    string Barang;
    int harga;
    int jumlah;
    int total;
};

int main() {
    int n;
    cout << "===== PROGRAM KASIR SEDERHANA =====\n";
    cout << "Masukkan jumlah barang yang dibeli: ";
    cin >> n;

    Barang daftar[n];
    int totalBayar = 0;

    // Input data barang
    for (int i = 0; i < n; i++) {
        cout << "\nBarang ke-" << i + 1 << endl;
        cout << "Nama Barang : ";
        cin >> ws; // membersihkan buffer
        getline(cin, daftar[i].Barang);
        cout << "Harga       : ";
        cin >> daftar[i].harga;
        cout << "Jumlah      : ";
        cin >> daftar[i].jumlah;
        daftar[i].total = daftar[i].harga * daftar[i].jumlah;
        totalBayar += daftar[i].total;
    }

    // Tampilkan struk
    cout << "\n\n============== STRUK PEMBELIAN ==============" << endl;
    cout << left << setw(20) << "Nama Barang"
         << setw(10) << "Harga"
         << setw(10) << "Jumlah"
         << setw(10) << "Total" << endl;

    cout << "---------------------------------------------" << endl;

    for (int i = 0; i < n; i++) {
        cout << left << setw(20) << daftar[i].Barang
             << setw(10) << daftar[i].harga
             << setw(10) << daftar[i].jumlah
             << setw(10) << daftar[i].total << endl;
    }

    cout << "---------------------------------------------" << endl;
    cout << "Total Bayar: Rp " << totalBayar << endl;

    // Tambahan: Hitung uang bayar & kembalian
    int bayar;
    cout << "Uang dibayar: Rp ";
    cin >> bayar;

    int kembalian = bayar - totalBayar;
    if (kembalian < 0) {
        cout << "Uang tidak cukup!" << endl;
    } else {
        cout << "Kembalian   : Rp " << kembalian << endl;
    }

    cout << "\n===== TERIMA KASIH TELAH BERBELANJA =====" << endl;


    return 0;
}
