``` p
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
    cout << "==============================================================" << endl>>;
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

/* kodingan ini dibuat untuk mengetahui nilai akhir mahasiswaa
    Saat progam dirun, c++ akan mengeksekusi fungsi int main()dulu
    setelah itu pengguna diminta memasukan beberapa mahasiswa yang akan diinput pada baris progam ke 7 sampai 11
    misalkan pengguna menginput 3, maka progam akan menyiapkan untuk menyimpan input 3 mahasiswa tersebut

    Lalu progam akan membuat array dari struktur mahasiswa berdasarkan jumlahnya jika (n =3) maka akan ada 3 mahasiswa
    setiap mahasiswa masing masing akan menyimpan nilai uts, uas, akhir dan nilai huruf
    dengan progam perulangan for sebanyak n pada baris kode 35 sampai 48, akan diminta
    dan didalam perulangan tersebut, pengguna diminta memasukan nilai uts dan uas dari masing masing mahasiswa
    setelah kedua nya di input berupa angka, maka nilai akhir akan muncul keluar berdasarkan rumus dari perhitungan pada baris ke 13 sampai 14
    dan juga mencetak nilai huruf tergantung dari nilai hasil : Jika nilai akhir mahasiswa >= 80 maka akan mendapatkan nilai A
    sesuai dengan progam pada baris ke 17 sampai 28 untuk menentukan nilai huruf berdasarkan hasil dari nilai akhir yang diperoleh
    
    Setelah menghitung nilai nilai mahasiswa langsung disimpan di dalam array mhs[i] dimana i adalah jumlah mahasiswa
    jadi setiap mahasiswa masing masing sudah mempunyai data berupa : Nama, nilai uts, nilai uas, nilai akhir, dan nilai huruf

    Proses itu dicetak melalui progam pada baris ke 50 sampai 58
    dan nantinya akan menampilkan sebuah data berupa nilai dari masing masing mahasiswa
    Lalu perulangan akan menampilkan semua data seperti pada baris kode blok ke 60 sampai 67 dari sebuah array mhs

    return0; menandakan progam selesai tanpa eror atau kesalahan
    */
    ```

