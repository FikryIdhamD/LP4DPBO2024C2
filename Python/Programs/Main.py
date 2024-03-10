#Saya Fikry Idham Dwiyana NIM 2101294 mengerjakan Latihan 4
#dalam mata kuliah Desain dan Pemrograman Berorientasi Objek
#untuk keberkahanNya maka saya tidak melakukan kecurangan
#seperti yang telah dispesifikasikan. Aamiin.

#import library
from Vehicle import Vehicle
from Car import Car
from Motorcycle import Motorcycle
from Garage import Garage
from ParkLot import ParkLot


# Membuat objek Vehicle
vehicle1 = Vehicle("D1111ABC", "BMW", "06-2022", "Coklat")

# Membuat objek Car
car1 = Car("D1111ABC", "BMW", "06-2022", "Coklat", 4, 2)
car2 = Car("D2222ABC", "Honda", "07-2023", "Biru", 4, 4)
car3 = Car("D3333ABC", "Mitsubishi", "08-2024", "Kuning", 7, 3)
car4 = Car("D4444ABC", "Volkswagen", "09-2025", "Hijau", 6, 4)
car5 = Car("D5555ABC", "Lamborghini", "10-2026", "Merah", 2, 2)

# Membuat objek Motorcycle
motor1 = Motorcycle("B1111ACD", "BMW", "08-2022", "Merah", "Sport", "20L")
motor2 = Motorcycle("B2222ACD", "Ducati", "11-2023", "Merah", "Sport", "18L")
motor3 = Motorcycle("B3333ACD", "Kawasaki", "12-2019", "Hijau", "Sport", "21L")
motor4 = Motorcycle("B4444ACD", "Honda", "11-2022", "Biru", "Matic", "8L")
motor5 = Motorcycle("B5555ACD", "Yamaha", "01-2024", "Hitam", "Matic", "10L")

# Membuat objek Garage
garage1 = Garage("Rumah Paman", 100, [car1, car2, car3])
garage1.add_kendaraan(motor4)
garage1.add_kendaraan(motor5)

# Mencetak informasi garasi1
print("Garasi", garage1.get_nama())
print("Luas Garasi:", garage1.get_luas(), "m^2")

# Mencetak informasi kendaraan di dalam garasi1
print("\nKendaraan di dalam Garasi:")
for i, kendaraan in enumerate(garage1.get_daftar_kendaraan(), start=1):
    print(f"{i}. Plat Nomor: {kendaraan.plat}")
    print(f"   Merk: {kendaraan.merk}")
    print(f"   Tahun: {kendaraan.tahun}")
    print(f"   Warna: {kendaraan.warna}")
    if isinstance(kendaraan, Car):
        print(f"   Jumlah Kursi: {kendaraan.jumlah_kursi}")
        print(f"   Jumlah Pintu: {kendaraan.jumlah_pintu}")
    elif isinstance(kendaraan, Motorcycle):
        print(f"   Jenis: {kendaraan.jenis}")
        print(f"   Tangki: {kendaraan.tangki}")

# Membuat objek ParkLot
park_lot1 = ParkLot("1000 Kendaraan", 2, [car4, car5])
park_lot1.set_jmlh_kendaraan(3)
park_lot1.add_kendaraan(motor1)
park_lot1.set_jmlh_kendaraan(4)
park_lot1.add_kendaraan(motor2)
park_lot1.set_jmlh_kendaraan(5)
park_lot1.add_kendaraan(motor3)

# Mencetak informasi park_lot1
print('\nPARKING LOT')
print("Kapasitas:", park_lot1.get_kapasitas())
print("Jumlah Kendaraan:", park_lot1.get_jmlh_kendaraan())

# Mencetak informasi kendaraan di dalam park_lot1
print('\nKendaraan di dalam Parking Lot:')
for i, kendaraan in enumerate(park_lot1.get_by_kendaraan(), start=1):
    print(f"{i}. Plat Nomor: {kendaraan.plat}")
    print(f"   Merk: {kendaraan.merk}")
    print(f"   Tahun: {kendaraan.tahun}")
    print(f"   Warna: {kendaraan.warna}")
    if isinstance(kendaraan, Car):
        print(f"   Jumlah Kursi: {kendaraan.jumlah_kursi}")
        print(f"   Jumlah Pintu: {kendaraan.jumlah_pintu}")
    elif isinstance(kendaraan, Motorcycle):
        print(f"   Jenis: {kendaraan.jenis}")
        print(f"   Tangki: {kendaraan.tangki}")