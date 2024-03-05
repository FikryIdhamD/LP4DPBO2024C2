/*Saya Fikry Idham Dwiyana NIM 2101294 mengerjakan Latihan 4
dalam mata kuliah Desain dan Pemrograman Berorientasi Objek 
untuk keberkahanNya maka saya tidak melakukan kecurangan 
seperti yang telah dispesifikasikan. Aamiin.*/

//include file header
#include "header.hh"

//inisialisasi constructor
Garage::Garage()
{
    Nama = "";
    Luas = 0;
}

//inisialisasi constructor dengan parameter
Garage::Garage(string Nama, int Luas, Vehicle kendaraan)
{
    this->Nama = Nama;
    this->Luas = Luas;
	this->kendaraan.push_back(kendaraan);
}

//inisialisasi method setter dan getter
void Garage::setNama(string Nama)
{
    this->Nama = Nama;
}

string Garage::getNama()
{
    return this->Nama;
}

void Garage::setLuas(int Luas)
{
    this->Luas = Luas;
}

int Garage::getLuas()
{
    return this->Luas;
}

void Garage::addKendaraan(Vehicle kendaraan)
{
    this->kendaraan.push_back(kendaraan);
}

list<Vehicle> Garage::getDaftarKendaraan()
{
    return this->kendaraan;
}

//inisialisasi destructor
Garage::~Garage()
{
}
