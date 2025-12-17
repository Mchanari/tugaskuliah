    #include <iostream>
    #include <ctime>
    #include <string>
    using namespace std;

    int main()
    {
        int pilihan;

        do
        {
            cout << "===========================================" << endl;
            cout << "          MENU BELAJAR                     " << endl;
            cout << "===========================================" << endl;
            cout << "1. Golongan Tipe Data" <<endl;
            cout << "2. Percabangan" << endl;
            cout << "3. Perulangan" << endl;
            cout << "4. Array" << endl;
            cout << "5. Keluar" << endl;
            cout << "============================================" << endl;
            cout << "Pilih (1-5): ";
            cin >> pilihan;

            if (pilihan == 1)
            {
                cout << "=========================================" << endl;
                cout << "          Golongan Tipe Data         " << endl;
                cout << "=========================================" << endl;

                int jenis;
                cout << "1. Golongan angka" << endl;
                cout << "2. Karakter" << endl;
                cout << "3. Waktu" << endl;
                cout << "4. Boolean" << endl;
                cout << "5. Kembali kemenu utama" << endl;
                cout << "Pilihan: " << endl;
                cin >> jenis;
                
                if (jenis == 1)
                    {
                            // GOlongan Angka
                            int pilhan;
                            system("cls");
                            cout << "===========================================" << endl;
                            cout << "       Golongan Angka                      " << endl;
                            cout << "===========================================" << endl;
                            cout << "1. Bilangan Bulat" << endl;
                            cout << "2. Bilangan Pecahan" << endl;
                            cout << "3. Kembali ke menu utama" << endl;
                            cout << pilhan;
                            cin >> pilhan;

                            // Bilangan Bulat
                                if (pilhan == 1)
                                {
                                    int A, B;
                                    char op;
                                    cout << "Masukan Nilai A: ";
                                    cin >> A;
                                    cout << "Masukan Nilai B: ";
                                    cin >> B;
                                    cout << "Masukan Operator (+, -, *, /): ";
                                    cin >> op;

                                    if (op == '+')
                                        cout << "Hasil: " << A + B << endl;
                                    else if (op == '-')
                                        cout << "Hasil: " << A - B << endl;
                                    else if (op == '*')
                                        cout << "Hasil: " << A * B << endl;
                                    else if (op == '/')
                                        {
                                            if (B == 0)
                                                cout << "Error: Tidak bisa dibagi dengan 0!" << endl;
                                            else
                                                cout << "Hasil: " << A / B << endl;
                                        }
                                }
                                else if (pilhan == 2)
                                {
                                    float A, B;
                                    char op;
                                    cout << "Masukan Nilai A: ";
                                    cin >> A;
                                    cout << "Masukan Nilai B: ";
                                    cin >> B;
                                    cout << "Masukan Operator (+, -, *, /)";
                                    cin >> op;

                                    if (op == '+')
                                        cout << "Hasil: " << A + B << endl;
                                    else if (op == '-')
                                        cout << "Hasil: " << A - B << endl;
                                    else if (op == '*')
                                        cout << "Hasil: " << A * B << endl;
                                    else if (op == '/')
                                        {
                                            if (B == 0)
                                                cout << "Error! Tidak bisa dibagi dengan 0" << endl;
                                            else
                                                cout << "Hasil: " << A / B << endl;
                                        }
                                }
                                else if (pilhan == 3)
                                {
                                    continue;
                                }
                            }
                else if (jenis == 2)
                {
                    // Karakter atau String
                int pilihK;
                system("cls");
                    cout << "1. Masukan Char" << endl;
                    cout << "2. Masukan String" << endl;
                    cout << "3. Kembali ke Menu Utama" << endl;
                    cin>>pilihK;

                    if(pilihK == 1) {
                        char c;
                        cout << "Masukan karakter: ";
                        cin >> c;
                        cout << "Karakter = " << c << endl;
                    }
                else if(pilihK == 2) {
                    char s[5];
                        cout << "Masukan String: ";
                        cin >> s;
                        cout << "String = " << s << endl;
                    }
                    else if(pilihK == 3)
                    {
                        continue;
                    }
                }
                else if (jenis == 3)
                {
                    // Menu Golongan Waktu
                    // system("cls");
                    cout << "========================================" << endl;
                    cout << "              GOLONGAN WAKTU            " << endl;
                    cout << "========================================" << endl;

                    int jw;
                    cout << "1. Date (Tampilkan tanggal)" << endl;
                    cout << "2. Time (Tampilkan waktu)" << endl;
                    cout << "3. DateTime (Tampilkan tanggal & waktu)" << endl;
                    cout << "4. Kembali ke menu sebelumnya" << endl;
                    cout << "Pilih: ";
                    cin >> jw;

                    time_t now = time(0);
                    tm *ltm = localtime(&now);

                    if (jw == 1)                              
                    {
                        cout << "\nTanggal hari ini: ";
                        cout << ltm->tm_mday << "-"                     // Tanggal
                            << 1 + ltm->tm_mon << "-"                  // Bulan (ditambah 1)
                            << 1900  + ltm->tm_year << endl;            // Tahun (ditambah 1900)
                    }   
                    else if (jw == 2)
                    {
                        cout << "\nWaktu saat ini: ";
                        cout << ltm->tm_hour << ":"
                            << ltm->tm_min << ":"
                            << ltm->tm_sec << endl;
                    }
                    else if (jw == 3)
                    {
                        cout << "\nDateTime: ";
                        cout << ltm->tm_mday << "-" << 1 + ltm->tm_mon << "-" << 1900 + ltm->tm_year;
                        cout << "  ";
                        cout << ltm->tm_hour << ":" << ltm->tm_min << ":" << ltm->tm_sec << endl;
                    }
                    else if (jw == 4)
                    {
                        continue;
                    }
                    else
                    {
                        cout << "Pilihan tidak valid!\n";
                    }
                    system("pause");
                }
                else if (jenis  == 4)
                {
                    int x;
                    cout << "Masukan 1 atau 0: ";
                    cin >> x;
                    if (x == 1)
                        cout << "TRUE" << endl;
                    else if (x == 0)
                        cout << "FALSE" << endl;
                    else cout << "Bukan Boolean!" << endl;
                }
                else if (jenis == 5)
                {
                    continue;
                }
            cout << "==================================================" << endl;
            system("pause");    
            }
            
        else if (pilihan == 2)
        {
            // Percabangan
            system("cls");
            cout << "====================================================" << endl;
            cout << "                   Percabangan                      " << endl;
            cout << "====================================================" << endl;

            int jenis;
            cout << "1. If" << endl;
            cout << "2. If Else" << endl;
            cout << "3. If Else If Else" << endl;
            cout << "4. Swtich-Case" << endl;
            cout << "5. Ternary" << endl;
            cout << "6. Kembali ke Menu Utama." << endl;
            cout << "Masukan pilihan: ";
            cin >> jenis;

            if (jenis == 1)
            {
                int x;
                cout << "Masukan nilai x: ";
                cin >> x;

                cout << (x > 0 ? "Bilangan positif" : "Bukan bilangan positif") << endl;
            }
            else if (jenis == 2)
            {
                int x;
                cout << "Masukan angka: ";
                cin >> x;
                if (x % 2 == 0)
                    cout << "Angka tersebut adalah Genap" << endl;
                else
                    cout << "Bilangan tersebut adalah Ganjil" << endl;
            }
            else if (jenis == 3)
            {
                int umur;
                cout << "Masukan umur anda: ";
                cin >> umur;

                if (umur <= 10)
                    cout << "Kamu masih anak anak" << endl;
                else if (umur <= 20)
                    cout << "Kamu sudah menjadi remaja" << endl;
                else if (umur <= 35)
                    cout << "Kamu semakin dewasa" << endl;
                else
                    cout << "Kamu sudah tua" << endl;
            }
            else if (jenis == 4)
            {
                int bulan;
                cout << "Masukan angka 1-12: ";
                cin >> bulan;
                switch (bulan)
                {
                case 1:
                    cout << "Januari";
                    break;
                case 2:
                    cout << "Februari";
                    break;
                case 3:
                    cout << "Maret";
                    break;
                case 4:
                    cout << "April";
                    break;
                case 5:
                    cout << "Mei";
                    break;
                case 6:
                    cout << "Juni";
                    break;
                case 7:
                    cout << "Juli";
                    break;
                case 8:
                    cout << "Agustus";
                    break;
                case 9:
                    cout << "September";
                    break;
                case 10:
                    cout << "Oktober";
                    break;
                case 11:
                    cout << "November";
                    break;
                case 12:
                    cout << "Desember";
                    break;
                default:
                    cout << "Bulan tidak ditemukan";
                }
            }
            else if (jenis == 5)
            {
                int nilai;
                cout << "Masukan nilai anda: ";
                cin >> nilai;

                string status = (nilai >= 75) ? "LULUS" : "TIDAK LULUS";
                cout << "Status anda adalah: " << status << endl;
            }
            else if (jenis == 6)
            {
                continue;
            }

            cout <<  endl;
            system("pause");
        }

        else if (pilihan == 3)
        {
            // Perulangan
            system("cls");
            cout << "============================================" << endl;
            cout << "               Perulangan                   " << endl;
            cout << "============================================" << endl;

            int jenis, n;
            cout << "1. FOR" << endl;
            cout << "2. WHILE" << endl;
            cout << "3. DO WHILE" << endl;
            cout << "4. Kembali ke Menu Utama" << endl;
            cin >> jenis;

            if (jenis == 4)
            {
                continue;
            }
            
            cout << "Cetak angka 1 sampai: ";
            cin >> n;
            
            if (jenis == 1)
            {
                for (int i = 1; i <= n; i++)
                cout << i << " ";
            }
            else if (jenis == 2)
            {
                int i = 1;
                while (i <= n)
                cout << i++ << " ";
            }
            else if (jenis == 3)
            {
                int i = 1;
                do
                {
                    cout << i++ << " ";
                } while (i <= n);
            }
            
            cout << endl;
            system("pause");
        }
        else if (pilihan == 4)
        {
            // Array
            system("cls");
            cout << "=============================================" << endl;
            cout << "               Array                         " << endl;
            cout << "=============================================" << endl;

            int jenis;
            cout << "1. Array 1D" << endl;
            cout << "2. Array 2D" << endl;
            cout << "3. Kembali ke Menu Utama" << endl;
            cin >> jenis;

            if (jenis == 1)
            {
                int n;
                cout << "Jumlah elemen: ";
                cin >> n;
                int arr[n];

                for (int i = 0; i < n; i++)
                {
                    cout << "Elemen" << i << ": ";
                    cin >> arr[i];
                }

                cout << "Isi array: ";
                for (int i = 0; i < n; i++)
                    cout << arr[i] << " ";
                cout << endl;
            }
            else if (jenis == 2)
            {
                int baris, kolom;
                cout << "Jumlah baris: ";
                cin >> baris;
                cout << "Jumlah kolom: ";
                cin >> kolom;
                int arr[baris][kolom];

                for (int i = 0; i < baris; i++)
                {
                    for (int j = 0; j < kolom; j++)
                    {
                        cout << "Elemen [" << i << "][" << j << "]: ";
                        cin >> arr[i][j];
                    }
                }   
                cout << "Isi matriks:\n";
                for (int i = 0; i < baris; i++)
                {
                    for (int j = 0; j < kolom; j++)
                        cout << arr[i][j] << " ";
                    cout << endl;
                }
            }
            else if (jenis == 3)
            {
                continue;
            }

            cout << "===============================================" << endl;
            system("pause");
        }   
    }
    while (pilihan != 5);

    cout << "Progam selesai!" << endl;
    return 0;
    }
