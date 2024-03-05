/*Saya Fikry Idham Dwiyana NIM 2101294 mengerjakan Latihan 4
dalam mata kuliah Desain dan Pemrograman Berorientasi Objek 
untuk keberkahanNya maka saya tidak melakukan kecurangan 
seperti yang telah dispesifikasikan. Aamiin.*/

//include file header
#include "header.hh"

//inisialisasi constructor
Motorcycle::Motorcycle() : Vehicle()
{
    jenis = "";
    tangki = "";
}

//inisialisasi constructor dengan parameter (menggunakan super dengan class Vehicle)
Motorcycle::Motorcycle(string plat, string merk, string tahun, string warna, string jenis, string tangki) : Vehicle(plat, merk, tahun, warna)
{
    this->jenis = jenis;
    this->tangki = tangki;
}

//inisialisasi method setter dan getter
void Motorcycle::setJenis(string jenis)
{
    this->jenis = jenis;
}

string Motorcycle::getJenis()
{
    return this->jenis;
}

void Motorcycle::setTangki(string tangki)
{
    this->tangki = tangki;
}

string Motorcycle::getTangki()
{
    return this->tangki;
}

//inisialisasi destructor
Motorcycle::~Motorcycle()
{
}
