#Saya Fikry Idham Dwiyana NIM 2101294 mengerjakan Latihan 4
#dalam mata kuliah Desain dan Pemrograman Berorientasi Objek
#untuk keberkahanNya maka saya tidak melakukan kecurangan
#seperti yang telah dispesifikasikan. Aamiin.

class Vehicle:
    def __init__(self, plat="", merk="", tahun="", warna=""):
        self.plat = plat
        self.merk = merk
        self.tahun = tahun
        self.warna = warna

    def set_plat(self, plat):
        self.plat = plat

    def get_plat(self):
        return self.plat

    def set_merk(self, merk):
        self.merk = merk

    def get_merk(self):
        return self.merk

    def set_tahun(self, tahun):
        self.tahun = tahun

    def get_tahun(self):
        return self.tahun

    def set_warna(self, warna):
        self.warna = warna

    def get_warna(self):
        return self.warna
