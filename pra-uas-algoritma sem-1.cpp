#include <iostream>
using namespace std;

int main() {
menu_utama:
    int pilihan, pilihMenu, jumlah, metode, member;
    int harga = 0, total = 0;
    int uang, kembalian;
    float diskon = 0;

    cout << "==============================" << endl;
    cout << "       MENU PENJUALAN         " << endl;
    cout << "==============================" << endl;
    cout << "1. Makanan" << endl;
    cout << "2. Minuman" << endl;
    cout << "Pilih (1/2): ";
    cin >> pilihan;

    if (pilihan == 1) {
        cout << "MENU MAKANAN" << endl;
        cout << "1. Nasi Uduk" << endl;
        cout << "2. Nasi Liwet" << endl;
        cout << "3. Nasi Goreng" << endl;
        cout << "Pilih makanan (1-3): ";
        cin >> pilihMenu;

        if (pilihMenu == 1) harga = 12000;
        else if (pilihMenu == 2) harga = 15000;
        else if (pilihMenu == 3) harga = 20000;
        else {
            cout << "Pilihan tidak tidak ada!";
            goto menu_utama;
        }
    }
    else if (pilihan == 2) {
        cout << "MENU MINUMAN" << endl;
        cout << "1. Es Teh" << endl;
        cout << "2. Es Jeruk" << endl;
        cout << "3. Es Lemon" << endl;
        cout << "Pilih minuman (1-3): ";
        cin >> pilihMenu;

        if (pilihMenu == 1) harga = 5000;
        else if (pilihMenu == 2) harga = 7000;
        else if (pilihMenu == 3) harga = 10000;
        else {
            cout << "Pilihan tidak ada!";
            goto menu_utama;
        }
    }
    else {
        cout << "Pilihan tidak tidak ada!";
        goto menu_utama;
    }

    cout << "Harga satuan: Rp" << harga << endl;
    cout << "Jumlah beli: ";
    cin >> jumlah;

    total = harga * jumlah;

    cout << "Pilih metode konsumsi:" << endl;
    cout << "1. Makan di tempat (Gratis)" << endl;
    cout << "2. Delivery (+Rp2000)" << endl;
    cout << "Pilih (1/2): ";
    cin >> metode;

    if (metode == 2) {
        total += 2000;
    }

    cout << "Apakah member?" << endl;
    cout << "1. Ya" << endl;
    cout << "2. Tidak" << endl;
    cout << "Pilih (1/2): ";
    cin >> member;

    if (member == 1) {
        diskon = total * 0.05;
        total -= diskon;
    }

    cout << "Total harga: Rp" << total << endl;
    bayar:
    cout << "Masukkan uang yang akan dibayarkan: Rp";
    cin >> uang;
    
    if (uang < total){
        cout << "Maaf uang tidak cukup untuk membayarnya" << endl;
        goto bayar;
    }

    kembalian = uang - total;
    cout << "Kembalian: Rp" << kembalian << endl;

    int ulang;
    cout << "1. Kembali ke menu utama" << endl;
    cout << "2. Keluar" << endl;
    cout << "Pilih (1/2): ";
    cin >> ulang;

    if (ulang == 1) {
        goto menu_utama;
    }

    cout << "Terimakasih telah membuat pesanan  !" << endl;
    return 0;
}

