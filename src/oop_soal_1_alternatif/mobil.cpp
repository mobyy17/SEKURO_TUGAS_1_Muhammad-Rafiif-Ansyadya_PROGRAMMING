#include "mobil.hpp"
#include <iostream>

using namespace std;

// === Implementasi Class mobil ===

mobil::mobil(int kapasitas_mesin, string name, string merk, int top_speed, string bahan_bakar) {
    this->kapasitas_mesin = kapasitas_mesin;
    this->name = name;
    this->merk = merk;
    this->top_speed = top_speed;
    this->bahan_bakar = bahan_bakar;

    cout << name << " keluar dari pabrik " << merk << " nih gaspol ah\n" ;

}

void mobil::jalan(int jarak) {
    cout << "Mobil " << name << " sedang jalan sejauh " << jarak << " kilometer\n";
}

void mobil::pamer_mesin() {
    if (kapasitas_mesin < 2000) {
        cout << "Yah " << name << " kagak bisa ngeraung CC mesinnya kurang\n";
    }
    else {
        cout << "WRAAAUR "<< name << " meraung dengan kerennya\n";
    }
}

// Implementasi Penuh (Base Class) sebagai referensi
void mobil::cek_spesifikasi() {
    cout << "=== Spesifikasi Standar " << name << " ===" << endl;
    cout << "Merk: " << merk << " | Mesin: " << kapasitas_mesin << " CC" << endl;
    cout << "Top Speed: " << top_speed << " km/jam | BBM: " << bahan_bakar << endl;
}

mobil::~mobil() {
    cout << "BOOM " << name << " Dihancurin\n";
}

// === Implementasi Class mobil_sport (Inheritance) ===

mobil_sport::mobil_sport(int kapasitas_mesin, string name, string merk, int top_speed, string bahan_bakar)
    : mobil(kapasitas_mesin, name, merk, top_speed, bahan_bakar) {
    turbo_aktif = false ;
}

void mobil_sport::jalan(int jarak) {
    cout <<"Wuzzz! Sportscar "<< name << " melesat sejauh "<< jarak<< " km!\n";
}

void mobil_sport::cek_spesifikasi() {
    cout << "=== Spesifikasi High-Performance " << name << " ===" << endl;
    cout << "Merk: " << merk << " | Mesin: " << kapasitas_mesin << " CC" << endl;
    cout << "Kecepatan Maksimum: " << top_speed << " km/jam | BBM: " << bahan_bakar << endl;
    cout << "Status Turbo: " << (turbo_aktif ? "Aktif" : "Non-aktif") << endl;
}

void mobil_sport::aktifkan_turbo() {
    turbo_aktif = true;
    cout << "Turbo diaktifkan! Power " << name << " meningkat drastis!" << endl;
}