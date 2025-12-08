#include <iostream>               // Digunakan untuk mendeklarasi operasi input dan output
#include <iomanip>
#include <string>                 // agar bisa menyimpan tipe data string untuk nama mahasiswa
using namespace std;

struct Mahasiswa {                              // Fungsinya untuk membuat dan menyimpan struktur data mahasiswa
    string nama;                                // atau menyimpan banyak data mahasiswa dalam satu array
    float uts, uas, akhir;
    char huruf;
};

float hitungNilaiAkhir(float uts, float uas) {    // fungsinya untuk menghitung nilai uts dan uas
 return (uas * 0.4) + (uts * 0.6);               // rumusnya menggunakan seperti ini dan fungsi return agar hasilnya bisa disimpan
}

char tentukanNilaiHuruf(float nilaiAkhir) {         // fungsi ini agar bisa mengubah nilai angka(float) menjadi nilai huruf
    if (nilaiAkhir >= 80)                           // jika dinilai akhir mendapatkan angka lebih dari 80 maka akan mencetak huruf A
        return 'A';             
    else if (nilaiAkhir >= 70)                      // jika nilai akhir mendapatkan angka lebih dari 70 akan mendapatkan nilai B
        return 'B';
    else if (nilaiAkhir >= 56)                      // jika nilai akhir mendapatkan angka lebih dari 56 akan mendapatkan nilai C
        return 'C';
    else if (nilaiAkhir >= 47)                      // jika nilai akhir mendapatkan angka lebih dari 47 aka mendapatkan nilai D
        return 'D';
    else                                            // Jika nilai akhir kurang dari 47 akan mendapatkan nilai E
        return 'E';                                
}

int main() {
    int n;                                         // fungsi n digunakan untuk menyimpan jumlah mahasiswa yang akan di masukan
    cout << "Masukkan banyak data mahasiswa: ";
    cin >> n;

    Mahasiswa mhs[n];
    for (int i = 0; i < n; i++) {               // perulangan for dilakukan sebanyak n mahasiswa
        cout << "\nData ke-" << i + 1 << endl;
        cout << "Nama Mahasiswa : ";
        cin.ignore();                           // fungsinya untuk membersihkan sisa karakter agar bisa membaca string dengan benar
        getline(cin, mhs[i].nama);
        cout << "Nilai UTS      : ";
        cin >> mhs[i].uts;                      // fungsinya agar bisa membaca nilai uts dari angka yg dimasukan    
        cout << "Nilai UAS      : ";
        cin >> mhs[i].uas;                     // fungsinya agar bisa membaca nilai uas dari angka yang dimasukkan

        mhs[i].akhir = hitungNilaiAkhir(mhs[i].uts, mhs[i].uas);        // untuk menngisi nilai akhir berdasarkan pada baris ke 13 sampai 15
        mhs[i].huruf = tentukanNilaiHuruf(mhs[i].akhir);                // digunakan untuk mengisi huruf berdasarkan nilai dari fungsi tsb
    }

    cout << "\n=============================================================" << endl;
    cout << "                Daftar nilai mata kuliah c++                 " << endl;     //menampilkan tabel nilai data mahasiswa
    cout << "==============================================================" << endl;
    cout << left << setw(5) << "No"                                                  //Fungsi setw menentukan lebar kolom dan left (rata kiri)
         << setw(25) << "Nama mahasiswa"
         << setw(10) << "UTS"
         << setw(10) << "UAS"
         << setw(12) << "Nilai akhir"
         << "Nilai Huruf" << endl;

    for (int i = 0; i < n; i++) {               //menampilkan nilai dan data mahasiswa satu per satu sesuai urutan yang diinput
        cout << left << setw(5) << i + 1
             << setw(25) << mhs[i].nama
             << setw(10) << mhs[i].uts
             << setw(10) << mhs[i].uas
             << setw(12) << fixed << setprecision(2) << mhs[i].akhir    //setprecision(2) menampilkan angka 2 digit dibelakang koma
             << mhs[i].huruf << endl;                                   //fixed untuk memastikan nilai desimal tetap 2 digit
    }
    return 0;                   // menandakan progam sudah selesai tanpa eror
}
