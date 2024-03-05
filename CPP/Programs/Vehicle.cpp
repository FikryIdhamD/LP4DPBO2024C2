/*Saya Fikry Idham Dwiyana NIM 2101294 mengerjakan Latihan 4
dalam mata kuliah Desain dan Pemrograman Berorientasi Objek 
untuk keberkahanNya maka saya tidak melakukan kecurangan 
seperti yang telah dispesifikasikan. Aamiin.*/

//include file header
#include "header.hh"

//inisialisasi constructor
Vehicle::Vehicle()
{
    plat = "";
    merk = "";
    tahun = "";
    warna = "";
}

//inisialisasi constructor dengan parameter 
Vehicle::Vehicle(string plat, string merk, string tahun, string warna)
{
    this->plat = plat;
    this->merk = merk;
    this->tahun = tahun;
    this->warna = warna;
}

//inisialisasi method setter dan getter
void Vehicle::setPlat(string plat)
{
    this->plat = plat;
}

string Vehicle::getPlat()
{
    return this->plat;
}

void Vehicle::setMerk(string merk)
{
    this->merk = merk;
}

string Vehicle::getMerk()
{
    return this->merk;
}

void Vehicle::setTahun(string tahun)
{
    this->tahun = tahun;
}

string Vehicle::getTahun()
{
    return this->tahun;
}

void Vehicle::setWarna(string warna)
{
    this->warna = warna;
}

string Vehicle::getWarna()
{
    return this->warna;
}

//inisialisasi destructor
Vehicle::~Vehicle()
{
}
