#include <iostream>
using namespace std;

int main(){                                                                             // Fungsi utama memulai progam
    int batasAkhir = 1;                 // variabel batasAkhir bertipe data integer, nilainya 1. While-loop hanya akan berjalan sampai i = 1.
    int i = 0;                              // variabel penghitung, mulai dari 0
    string array1[] = {"aaa", "bbb", "ccc", "ddd", "eee", "fff", "ggg", "hhhh"};
    i = 0;
    while (i <= batasAkhir)
    {
        cout << "Perulangan / Iterasi untuk array " << array1[i] << endl;    // menampilkan elemen array sesuai indeks i
        i++;                                                                 // i bertambah 1 di setiap iterasi
    }
    return 0;
}


// Iterasi 1 : i = 0 -> 0 <= 1 (TRUE)
// Menampilkan elemen ke-0 : "aaa"
// i++ -> i menjadi 1

// Iterasi 2 : i = 1 -> 1 <= 1 (TRUE)
// Menampilkan elemen ke-1 : "bbb"
// i++ -> i menjadi 2

// Iterasi 3 : i = 2 -> 2 <= 1 (FALSE) -> Perulangan berhenti

//Indeks → nomor posisi elemen dalam array (mulai dari 0).
//Iterasi → satu kali putaran/perulangan dalam loop.
//Inisialisasi → memberi nilai awal pada variabel (contoh: int i = 0;).
//Deklarasi → membuat variabel dan menentukan tipe datanya.
