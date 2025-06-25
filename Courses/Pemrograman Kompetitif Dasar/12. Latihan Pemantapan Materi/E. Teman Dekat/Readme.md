### E. Teman Dekat

#### Deskripsi

Pak Dengklek memiliki $N$ murid. Ia ingin melihat "tingkat kedekatan" setiap
muridnya terhadap murid-murid yang lain. Setiap murid memiliki dua faktor yang
dijadikan acuan; sebut saja $X$ dan $Y$. Murid ke-$i$ memiliki nilai $X_i$ dan
$Y_i$.

Tingkat kedekatan antara suatu pasang murid ke-$i$ dan murid ke-$j$, dinyatakan
sebagai $T_i,_j$, didefinisikan sebagai berikut:
$T_i,_j=|X_j-X_i|^D+|X_j-Y_i|^D$ dengan $D$ adalah suatu konstanta yang Pak
Dengklek tentukan.

Notasi $|x|$ merupakan notasi mutlak/absolut, yakni jika $x$ negatif, maka
hasilnya menjadi positif. Sebagai contoh, $|-5|=5$.

Bantulah Pak Dengklek menghitung tingkat kedekatan terkecil dan terbesar dari
seluruh kemungkinan pasang muridnya.

#### Batasan

- $2 \leq N \leq 1000$
- $1 \leq D \leq 3$
- $0 \leq X_i,Y_i \leq 100$

#### Masukan

Masukan diberikan dalam format berikut:

```
N D
X₁ Y₁
X₂ Y₂
:
Xₙ Yₙ
```

#### Keluaran

Keluarkan sebuah baris berisi dua buah bilangan bulat: tingklat kedekatan
terkecil dan terbesar.

#### Contoh Masukan

```
3 1
0 1
1 1
10 10
```

#### Contoh Keluaran

```
1 19
```

#### Penjelasan Contoh

Berikut adalah nilai-nilai tingkat kedekatan antara seluruh pasang murid:

- $T_1,_2=1$
- $T_1,_3=19$
- $T_2,_3=18$
