/*Saya Fikry Idham Dwiyana NIM 2101294 mengerjakan Latihan 4
dalam mata kuliah Desain dan Pemrograman Berorientasi Objek 
untuk keberkahanNya maka saya tidak melakukan kecurangan 
seperti yang telah dispesifikasikan. Aamiin.*/

//include file header
#include "header.hh"

// Implementasi constructor dan method
ParkLot::ParkLot()
{
    Kapasitas = "";
    JmlhKendaraan = 0;
}

ParkLot::ParkLot(string Kapasitas, int JmlhKendaraan,  Vehicle kendaraan)
{
    this->Kapasitas = Kapasitas;
    this->JmlhKendaraan = JmlhKendaraan;
    this->kendaraan.push_back(kendaraan);
}

//inisialisasi method setter dan getter
void ParkLot::setKapasitas(string Kapasitas)
{
    this->Kapasitas = Kapasitas;
}

string ParkLot::getKapasitas()
{
    return this->Kapasitas;
}

void ParkLot::setJmlhKendaraan(int JmlhKendaraan)
{
    this->JmlhKendaraan = JmlhKendaraan;
}

int ParkLot::getJmlhKendaraan()
{
    return this->JmlhKendaraan;
}

void ParkLot::addKendaraan(Vehicle kendaraan)
{
    this->kendaraan.push_back(kendaraan);
}

list<Vehicle> ParkLot::getBykKendaraan()
{
    return this->kendaraan;
}

ParkLot::~ParkLot()
{
}