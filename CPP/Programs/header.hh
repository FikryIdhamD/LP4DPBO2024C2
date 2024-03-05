/*Saya Fikry Idham Dwiyana NIM 2101294 mengerjakan Latihan 4
dalam mata kuliah Desain dan Pemrograman Berorientasi Objek
untuk keberkahanNya maka saya tidak melakukan kecurangan
seperti yang telah dispesifikasikan. Aamiin.*/

// include library
#include <bits/stdc++.h>

using namespace std;


template<typename Base, typename T>
inline bool instanceof(const T *ptr) {
   return dynamic_cast<const Base*>(ptr) != nullptr;
}


// deklarasi class Vehicle sebagai child class dari class Human
class Vehicle
{
private:
    string plat;
    string merk;
    string tahun;
    string warna;

public:
    // constructor
    Vehicle();
    Vehicle(string plat, string merk, string tahun, string warna);

    // method setter dan getter
    void setPlat(string plat);
    string getPlat();
    void setMerk(string merk);
    string getMerk();
    void setTahun(string tahun);
    string getTahun();
    void setWarna(string warna);
    string getWarna();
    // destructor
    virtual ~Vehicle();
    // ~Vehicle();
};

// deklarasi class Car sebagai child class dari class Vehicle
class Car : public Vehicle
{
private:
    int JmlhKursi;
    int JmlhPintu;

public:
    // constructor
    Car();
    Car(string plat, string merk, string tahun, string warna, int JmlhKursi, int JmlhPintu);

    // method setter dan getter
    void setJmlhKursi(int JmlhKursi);
    int getJmlhKursi();
    void setJmlhPintu(int JmlhPintu);
    int getJmlhPintu();
    // destructor
    ~Car();
};

// Declaration of Motorcycle class as a child class of Vehicle
class Motorcycle : public Vehicle
{
private:
    string jenis;
    string tangki;

public:
    // Constructors
    Motorcycle();
    Motorcycle(string plat, string merk, string tahun, string warna, string jenis, string tangki);

    // Setter and getter methods
    void setJenis(string jenis);
    string getJenis();
    void setTangki(string tangki);
    string getTangki();

    // Destructor
    ~Motorcycle();
};

// deklarasi class Garage
class Garage
{
    // atribut
private:
    string Nama;
    int Luas;               
    list<Vehicle> kendaraan; 

public:
    // constructor
    Garage();
    Garage(string Nama, int Luas, Vehicle kendaraan);

    // method setter dan getter
    void setNama(string Nama);
    string getNama();
    void setLuas(int Luas);
    int getLuas();
    void addKendaraan(Vehicle kendaraan);
    list<Vehicle> getDaftarKendaraan();
    // destructor
    ~Garage();
};


class ParkLot
{
private:
    string Kapasitas;
    int JmlhKendaraan;
    list<Vehicle> kendaraan;

public:
    // Constructor
    ParkLot();
    ParkLot(string Kapasitas, int JmlhKendaraan, Vehicle kendaraan);

    // Method setter dan getter
    void setKapasitas(string Kapasitas);
    string getKapasitas();
    void setJmlhKendaraan(int JmlhKendaraan);
    int getJmlhKendaraan();
    void addKendaraan(Vehicle kendaraan); // Menambahkan kendaraan ke dalam BykKendaraan
    list<Vehicle> getBykKendaraan(); // Mengganti return type menjadi list

    // Destructor
    ~ParkLot();
};