#Saya Fikry Idham Dwiyana NIM 2101294 mengerjakan Latihan 4
#dalam mata kuliah Desain dan Pemrograman Berorientasi Objek
#untuk keberkahanNya maka saya tidak melakukan kecurangan
#seperti yang telah dispesifikasikan. Aamiin.

# Definisi kelas Garage
class Garage:
    def __init__(self, Nama="", Luas=0, kendaraan=None):
        self.Nama = Nama
        self.Luas = Luas
        self.kendaraan = kendaraan

    def set_nama(self, Nama):
        self.Nama = Nama

    def get_nama(self):
        return self.Nama

    def set_luas(self, Luas):
        self.Luas = Luas

    def get_luas(self):
        return self.Luas

    def add_kendaraan(self, kendaraan):
        self.kendaraan.append(kendaraan)

    def get_daftar_kendaraan(self):
        return self.kendaraan
