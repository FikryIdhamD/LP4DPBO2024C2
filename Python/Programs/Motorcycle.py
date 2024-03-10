#Saya Fikry Idham Dwiyana NIM 2101294 mengerjakan Latihan 4
#dalam mata kuliah Desain dan Pemrograman Berorientasi Objek
#untuk keberkahanNya maka saya tidak melakukan kecurangan
#seperti yang telah dispesifikasikan. Aamiin.

from Vehicle import Vehicle

# Definisi kelas Motorcycle yang merupakan turunan dari Vehicle
class Motorcycle(Vehicle):
    def __init__(self, plat="", merk="", tahun="", warna="", jenis="", tangki=""):
        # Memanggil konstruktor kelas induk (Vehicle)
        super().__init__(plat, merk, tahun, warna)
        self.jenis = jenis
        self.tangki = tangki

    def set_jenis(self, jenis):
        self.jenis = jenis

    def get_jenis(self):
        return self.jenis

    def set_tangki(self, tangki):
        self.tangki = tangki

    def get_tangki(self):
        return self.tangki
