#Saya Fikry Idham Dwiyana NIM 2101294 mengerjakan Latihan 4
#dalam mata kuliah Desain dan Pemrograman Berorientasi Objek
#untuk keberkahanNya maka saya tidak melakukan kecurangan
#seperti yang telah dispesifikasikan. Aamiin.


# Definisi kelas ParkLot
class ParkLot:
    def __init__(self, Kapasitas="", JmlhKendaraan=0, kendaraan=None):
        if kendaraan is None:
            kendaraan = []
        self.Kapasitas = Kapasitas
        self.JmlhKendaraan = JmlhKendaraan
        self.kendaraan = kendaraan

    def set_kapasitas(self, Kapasitas):
        self.Kapasitas = Kapasitas

    def get_kapasitas(self):
        return self.Kapasitas

    def set_jmlh_kendaraan(self, JmlhKendaraan):
        self.JmlhKendaraan = JmlhKendaraan

    def get_jmlh_kendaraan(self):
        return self.JmlhKendaraan

    def add_kendaraan(self, kendaraan):
        self.kendaraan.append(kendaraan)

    def get_by_kendaraan(self):
        return self.kendaraan
