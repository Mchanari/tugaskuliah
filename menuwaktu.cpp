#include <iostream>
#include <ctime>
#include <thread>
#include <chrono>

using namespace std;

int main()
{
    int pilihan = 0;
    do {
        system("cls");
        cout << "    MENU BELAJAR    " << endl;
        cout << "=======================" << endl;
        cout << "1. Golongan Tipe Data" << endl;
        cout << "2. Keluar" << endl;
        cout << "=======================" << endl;
        cout << "Pilih (1-2): ";
        cin >> pilihan;

        if (pilihan == 1) {
            int jenis;
            system("cls");
            cout << "          Golongan Tipe Data     " << endl;
            cout << "================================" << endl;
            cout << "1. Waktu" << endl;
            cout << "2. Kembali ke menu utama" << endl;
            cout << "Pilihan: ";
            cin >> jenis;

            if (jenis == 1) {
                char keluar;
                do {
                    time_t now = time(nullptr);
                    tm* ltm = localtime(&now);

                    system("cls");
                    cout << "       GOL WAKTU          " << endl;
                    cout << "==========================" << endl;
                    cout << "Waktu sekarang: "
                         << ltm->tm_hour << ":"
                         << ltm->tm_min << ":"
                         << ltm->tm_sec << endl;
                    cout << "Tekan 'b' lalu enter untuk kembali: ";

                    this_thread::sleep_for(chrono::seconds(1));

                    if (cin.peek() != ' ') {
                        cin >> keluar;
                    } else {
                        keluar = ' ';
                    }

                } while (keluar != 'b');
            }
        }

    } while (pilihan != 2);

    cout << "Program selesai!" << endl;
    return 0;
}
