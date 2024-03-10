#Saya Fikry Idham Dwiyana NIM 2101294 mengerjakan Latihan 4
#dalam mata kuliah Desain dan Pemrograman Berorientasi Objek
#untuk keberkahanNya maka saya tidak melakukan kecurangan
#seperti yang telah dispesifikasikan. Aamiin.

from Vehicle import Vehicle

class Car(Vehicle):
    def __init__(self, plat="", merk="", tahun="", warna="", jumlah_kursi=0, jumlah_pintu=0):
        # Memanggil konstruktor kelas induk (Vehicle)
        super().__init__(plat, merk, tahun, warna)
        self.jumlah_kursi = jumlah_kursi
        self.jumlah_pintu = jumlah_pintu

    def set_jumlah_kursi(self, jumlah_kursi):
        self.jumlah_kursi = jumlah_kursi

    def get_jumlah_kursi(self):
        return self.jumlah_kursi

    def set_jumlah_pintu(self, jumlah_pintu):
        self.jumlah_pintu = jumlah_pintu

    def get_jumlah_pintu(self):
        return self.jumlah_pintu