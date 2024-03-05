/*Saya Fikry Idham Dwiyana NIM 2101294 mengerjakan Latihan 4
dalam mata kuliah Desain dan Pemrograman Berorientasi Objek 
untuk keberkahanNya maka saya tidak melakukan kecurangan 
seperti yang telah dispesifikasikan. Aamiin.*/

//include file header
#include "header.hh"

//inisialisasi constructor
Car::Car() : Vehicle()
{
    JmlhKursi = 0;
    JmlhPintu = 0;
}

//inisialisasi constructor dengan parameter (menggunakan super dengan class Vehicle)
Car::Car( string plat, string merk, string tahun, string warna, int JmlhKursi, int JmlhPintu) : Vehicle(plat, merk, tahun, warna)
{
    this->JmlhKursi = JmlhKursi;
    this->JmlhPintu = JmlhPintu;
}

//inisialisasi method setter dan getter
void Car::setJmlhKursi(int JmlhKursi)
{
    this->JmlhKursi = JmlhKursi;
}

int Car::getJmlhKursi()
{
    return this->JmlhKursi;
}

void Car::setJmlhPintu(int JmlhPintu)
{
    this->JmlhPintu = JmlhPintu;
}

int Car::getJmlhPintu()
{
    return this->JmlhPintu;
}

//inisialisasi destructor
Car::~Car()
{
}
