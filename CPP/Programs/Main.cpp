/*Saya Fikry Idham Dwiyana NIM 2101294 mengerjakan Latihan 4
dalam mata kuliah Desain dan Pemrograman Berorientasi Objek
untuk keberkahanNya maka saya tidak melakukan kecurangan
seperti yang telah dispesifikasikan. Aamiin.*/

// include file header
#include "header.hh"

int main()
{
	// instance object dari class Mahasiswa
	Car mobil1 = Car("D1111ABC", "BMW", "06-2022", "Coklat", 4, 2);
	Car mobil2 = Car("D2222ABC", "Honda", "07-2023", "Biru", 4, 4);
	Car mobil3 = Car("D3333ABC", "Mitsubishi", "08-2024", "Kuning", 7, 3);
	Car mobil4 = Car("D4444ABC", "Volkswagen", "09-2025", "Hijau", 6, 4);
	Car mobil5 = Car("D5555ABC", "Lamborghini", "10-2026", "Merah", 2, 2);

	Motorcycle motor1 = Motorcycle("B1111ACD", "BMW", "08-2022", "Merah", "Sport", "20L");
	Motorcycle motor2 = Motorcycle("B2222ACD", "Ducati", "11-2023", "Merah", "Sport", "18L");
	Motorcycle motor3 = Motorcycle("B3333ACD", "Kawasaki", "12-2019", "Hijau", "Sport", "21L");
	Motorcycle motor4 = Motorcycle("B4444ACD", "Honda", "11-2022", "Biru", "Matic", "8L");
	Motorcycle motor5 = Motorcycle("B5555ACD", "Yamaha", "01-2024", "Hitam", "Matic", "10L");

	Garage garage1 = Garage("Rumah Paman", 100, mobil1);
	garage1.addKendaraan(mobil2);
	garage1.addKendaraan(mobil3);
	garage1.addKendaraan(motor4);
	garage1.addKendaraan(motor5);

	// Mencetak informasi garasi1
	cout << "Garasi " << garage1.getNama() << '\n';
	cout << "Luas Garasi: " << garage1.getLuas() << " m^2" << '\n';

	// Mencetak informasi kendaraan di dalam garasi1
	cout << '\n' << "Kendaraan di dalam Garasi:" << '\n';

	int i = 0;

	list<Vehicle> llist = garage1.getDaftarKendaraan();
	// int i = 0;
	for (list<Vehicle>::iterator it = (llist).begin(); it != (llist).end(); it++)
	{
		cout << (i + 1) << ". "<< "Plat Nomor: " << it->getPlat() << '\n';
		cout << "   Merk: " << it->getMerk() << '\n';
		cout << "   Tahun: " << it->getTahun() << '\n';
		cout << "   Warna: " << it->getWarna() << '\n';

		i++;
	}

	ParkLot park = ParkLot("1000 Kendaraan", 1, motor1);
	park.addKendaraan(motor2);
	park.setJmlhKendaraan(2);
	park.addKendaraan(motor3);
	park.setJmlhKendaraan(3);
	park.addKendaraan(mobil4);
	park.setJmlhKendaraan(4);
	park.addKendaraan(mobil5);
	park.setJmlhKendaraan(5);

	// Mencetak informasi garasi1
	cout << '\n' << "PARKING LOT" << '\n';
	cout << "Kapasitas: " << park.getKapasitas() << '\n';
	cout << "Jumlah Kendaraan: " << park.getJmlhKendaraan() << '\n';

	// Mencetak informasi kendaraan di dalam garasi1
	cout << '\n' << "Kendaraan di dalam Parking Lot:" << '\n';

	i = 0;

	list<Vehicle> lllist = park.getBykKendaraan();
	// int i = 0;
	for (list<Vehicle>::iterator it = (lllist).begin(); it != (lllist).end(); it++)
	{
		cout << (i + 1) << ". "<< "Plat Nomor: " << it->getPlat() << '\n';
		cout << "   Merk: " << it->getMerk() << '\n';
		cout << "   Tahun: " << it->getTahun() << '\n';
		cout << "   Warna: " << it->getWarna() << '\n';
		i++;
	}
	
	return 0;
}