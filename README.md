# LP4DPBO2024C2
Saya Fikry Idham Dwiyana NIM 2101294 mengerjakan Latihan 4 dalam mata kuliah Desain dan Pemrograman Berorientasi Objek untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.

## Deskripsi Tugas
Buatlah program berbasis OOP menggunakan bahasa pemrograman C++ dan Python  yang mengimplementasikan konsep inheritance, composition, dan array of object pada kelas-kelas berikut :
* Vehicle : plat nomor, merk, tahun produksi, warna
* Car : jumlah kursi, jumlah pintu
* Motorcycle : jenis motor, kapasitas tangki
* Garage : nama garasi, luas garasi, daftar kendaraan
* ParkingLot : kapasitas, jumlah kendaraan saat ini

## Desain Program
![desaign drawio](https://github.com/FikryIdhamD/LP4DPBO2024C2/assets/147605722/b69a989e-273b-4de9-b729-4d0bb2ccfd34)

Program didesain menjadi Lima class
* **Vehicle**
* **Car**
* **Motorcycle**
* **Garage**
* **ParkingLot**

Penjelasan relasi:
Class `Vehicle` memiliki Child `Car` dan `Motorcycle` karena memiliki objek yang sama yaitu kendaraan. dan ini termasuk kedalam multiple inheritance. Untuk Composite atau relasi "has-a", class `Garage` dan `ParkLot` meng-composite class `Vehicle`, Karena `Garage` dan `ParkLot` memiliki/ berisi kendaraan. 

Pada class `Vehicle` terdapat tiga atribut:
* **plat**    -> berisi Plat Nomor Kendaraan, `string`
* **merk**   -> berisi Merk Kendaraan, `string`
* **tahun** -> berisi Bulan dan Tahun Produksi Kendaraan, `string`
* **warna** -> berisi warna Kendaraan, `string`

tiap atribut memiliki setter dan getternya masing-masing.

Pada class `Car` yang merupakan child dari class `Vehicle` maka mewarisi atribut dan method dari parentnya juga dengan tambahan atribut sebagai berikut:
* **jmlhKursi** -> berisi banyaknya kursi diMobil, `integer`
* **jmlhPintu** ->berisi banyaknya pintu diMobil, `integer`

Pada class `Motorcycle` yang merupakan child dari class `Vehicle` dan cucu dari class `Human` maka mewarisi atribut dan method dari keduanya dengan tambahan atribut sebagai berikut:
* **jenis** -> berisi Jenis Motor, `string`
* **tangki** -> berisi Kapasitas tangki, `string`

Pada class `Garage` terdapat tiga atribut:
* **nama** -> berisi nama Garasinya, `string`
* **luas** -> berisi luasnya Garasi, `integer`
* **kendaraan** -> berisi kumpulan data kendaraan yang berada pada garas tersebut, `list object dari class Vehicle`

Pada class `ParkingLot ` terdapat tiga atribut:
* **kapasitas** -> berisi nama matkul, `string`
* **JmlhKendaraan** -> berisi banyaknya kendaraan, `integer`
* **kendaraan** -> berisi kumpulan data kendaraan yang berada pada garas tersebut, `list object dari class Vehicle`

## Alur Program
inputan dilakukan secara manual / hardcode, input berupa instansiasi object dari class yang disebutkan di atas, lalu mengisi datanya pada parameter secara manual. Output berupa print data class `Garage` dan `ParkLot` yang mana di dalamnya juga terdapat data class `Car` dan `Motorcycle` yang dimana merupakan Child dari `Vehicle`, Outputnya mengeluarkan isi dan atribut dari `Vehicle` yang dikeluarkan di `Garage` dan `ParkLot`.

## Dokumentasi
Pada program python
![Screenshot-Python](https://github.com/FikryIdhamD/LP4DPBO2024C2/assets/147605722/41f79598-d039-4592-8be4-e1d9f5ae4d30)
![Screenshot-Python2](https://github.com/FikryIdhamD/LP4DPBO2024C2/assets/147605722/7e59ffa6-7f19-498d-89d9-66a77b58b3b2)

