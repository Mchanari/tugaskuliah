# Progam array 2D berukuran mxn dari input pengguna
# Input ukuran pada format matriks
m = int(input("Masukan jumlah baris (m): "))
n = int(input("Masukan jumlah kolom (n): "))

# Membuat array 2D dari input pengguna
print("\nMasukan elemen elemen matriks:")
array_2d = []
for x in range (m):
    baris = []
    for y in range (n):
        nilai = int(input(f"elemen [{x+1}][{y+1}]: "))
        baris.append(nilai)
        array_2d.append(baris)

# Menampilkan array dalam format matriks m x n
print("\nMatriks yang dimasukan: ")
for baris in array_2d:
    for nilai in baris:
        print(f"{nilai:5}", end=" ")
    print ()

# Menghitung jumlah, nilai maksimun dan minimun, serta rata rata
semua_elemen = [nilai for baris in array_2d for nilai in baris]
jumlah = sum(semua_elemen)
maksimun = max(semua_elemen)
minimun = min(semua_elemen)
rata_rata = jumlah / len(semua_elemen)

# Menampilkan hasilnya
print(f"Jumlah semua elemen : {jumlah}")
print(f"Nilai maksimun      : {maksimun}")
print(f"Nilai minimun       : {minimun}")
print(f"Nilai rata rata     : {rata_rata:.2f}")