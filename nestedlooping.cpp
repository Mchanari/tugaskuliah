#include <iostream>
using namespace std;

int main() {

    int a = 0; // loop luar mulai dari 0

    do {
        cout << "Loop a = " << a << endl; // bagian loop A (loop luar)

        int b = 1; // RESET b setiap kali loop a berjalan

        do {
            cout << "   Loop b = " << b << endl;
            b++;
        } while (b <= 5); // kondisi loop dalam

        a++;  
    } while (a <= 3); // kondisi loop luar

    return 0;
}

/* nested loop merupakan struktur kontrol di mana satu loop berada di dalam loop lainnya.
analoginya seperti lingkaran di dalam lingkaran.
Loop luar (outer loop) akan mengontrol berapa kali loop dalam (inner loop) akan dijalankan.

cara kerja programa yang saya buat adalah sebagai berikut:
1. Awal a mulai dari 0 (a = 0)
2. Masuk ke loop luar (do-while) yang  a (yang di luar)
a = 0 karena ada a++, jadi nilai a = 0+1 = 1  
Cetak nilai a = 1
3. Masuk ke loop dalam (do-while) yang b (yang di dalam)
b = 1 karena ada b++, jadi nilai b = 1+1 = 2  
Cetak nilai b = 2
4. lalu riset b kembali ke 1
5. Ulangi langkah samapai a <= 3 dan b <= 5

hasil dari program ini adalah:
Loop a = 0
   Loop b = 1
   Loop b = 2
   Loop b = 3
   Loop b = 4
   Loop b = 5
Loop a = 1
   Loop b = 1
   Loop b = 2
   Loop b = 3
   Loop b = 4
   Loop b = 5
Loop a = 2
   Loop b = 1
   Loop b = 2
   Loop b = 3
   Loop b = 4
   Loop b = 5
Loop a = 3
   Loop b = 1
   Loop b = 2
   Loop b = 3
   Loop b = 4
   Loop b = 5
*/