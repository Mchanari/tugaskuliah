#include <iostream>
#include <iomanip>      //membuat sebuah tabel
using namespace std;

class Pegawai {       //membuat sebuah class
public:            //semua variabel&fungsi bisa diakses dari luar
    string nama;    //yg akan menyimpan nama pegawai bertipe string
    int jamKerja;   //variabel class
    int honor;      //variabel class
    int honorLembur;    //variabel class
    int totalHonor;     //variabel class

    void hitungHonor(){      //tidak mengembalikan nilai awal
        honor = 25000;      //set gaji honor
        if (jamKerja > 8)   //mengecek apakah bekerja > 8 jam
        {honorLembur = (jamKerja - 8) * 1500;}
        else { honorLembur = 0;}    //tidak dihitung tidak lembur
        totalHonor = honor + honorLembur; }     //menghitung total honor yang didapat pegawai beserta lembur
};

int main() {        //fungsi utama progam
    int jumlahPegawai;  //mendeklarasikan variabel bertipe integer
    string tanggal;     //bertipe str agar tanggal bisa menggunakan spasi

    cout << "PT. Meriang Gembira" << endl;
    cout << "Jumlah           : ";      //meminta jumlah pegawai
    cin >> jumlahPegawai;               //dimasukan kedalam variabel
    cin.ignore();                       //membersihkan ouput sebellumnya
    cout << "Tanggal Input    : ";      //meminta input tanggal dari user
    getline(cin, tanggal);              //menerima teks, angka dengan spasi

    Pegawai p[jumlahPegawai];       //membuat array

   for (int i = 0; i < jumlahPegawai; i++) {    //loop sesuai pegawai (i=0 sesuai indeks)
        cout << "Data Ke-" << i + 1 << endl;    //setiap masuk perulangan i bertambah 1
        cout << "Nama Pegawai     : ";          //mencetak setiap nama pegawai sesuai jumlah pegawai
        getline(cin, p[i].nama);    //menyimpan nama pegawai ke object bisa menggunakan spasi

        cout << "Jumlah Jam Kerja : ";      //mencetak berapa lama pegawai bekerja
        cin >> p[i].jamKerja;           //membaca jam kerja berupa angka
        cout << endl;                   //mencetak garis baru untuk memisahkan laporan tabel
        cin.ignore();                   //membersihkan output sebelumnya

        p[i].hitungHonor();}            //memanggil fungsi didalam class&menghitung honor

    cout << "PT. Meriang Gembira" << endl; //Laporan
    cout << "Tanggal : " << tanggal << endl;
    cout << "=====================================================================" << endl;
    cout << left << setw(5) << "No"
         << setw(15) << "Nama"
         << setw(10) << "Honor"
         << setw(15) << "Jam Kerja"
         << setw(15) << "Honor Lembur"
         << setw(15) << "Total Honor" << endl;
    cout << "=====================================================================" << endl;

    int totalKeseluruhan = 0;

    for (int i = 0; i < jumlahPegawai; i++){    //perulangan menampilkan data
        cout << left << setw(5) << i + 1        //tabel rata kiri dengan lebar kolom 5 karakter
             << setw(15) << p[i].nama           //tabel rata kiri dengan lebar kolom 15 karakter
             << setw(10) << p[i].honor          //tabel rata kiri dengan lebar kolom 10 karakter
             << setw(15) << p[i].jamKerja       //tabel rata kiri dengan lebar kolom 15 karakter
             << setw(15) << p[i].honorLembur    //tabel rata kiri dengan lebar kolom 15 karakter
             << setw(15) << p[i].totalHonor << endl;    //tabel rata kiri dengan lebar kolom 15 karakter

        totalKeseluruhan += p[i].totalHonor; }      //menambahkkan total honor pegawai untuk laporan akhir

    cout << "=====================================================================" << endl;
    cout << "Total Honor Pegawai Sebesar : Rp. " << totalKeseluruhan << endl;       //mencetak total gaji semua

    return 0;       //menandakan progam telah selesai tanpa ada kesalahan didalamnya
}
