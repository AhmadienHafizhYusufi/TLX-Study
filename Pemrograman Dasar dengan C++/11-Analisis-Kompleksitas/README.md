## A & B
#### Solution
1. Buat perulangan untuk menginput element dimana nilai element akan ditambahkan ke nilai total.
2. Buat perulangan lainnya untuk mengeluarkan nilai total dikurangi elemen dari indeks pemprosesan.

#### Analisis Kompleksitas
1. Kompleksitas Waktu (Time Complexity):
	- Membaca input N: O(1)
	- Membaca elemen-elemen array A dan menghitung total sum:
		- Loop pertama: O(N)
	- Mengeluarkan hasil untuk setiap elemen:
		- Loop kedua: O(N)
	- Total kompleksitas waktu: O(N) + O(N) = O(2N) = O(N)
2. Kompleksitas Ruang (Space Complexity):
	- Variabel N dan totalSum: O(1)
	- Vektor A dengan N elemen: O(N)
	- Total kompleksitas ruang: O(N)
Kesimpulan:
	- Kompleksitas Waktu: O(N)
	- Kompleksitas Ruang: O(N)

