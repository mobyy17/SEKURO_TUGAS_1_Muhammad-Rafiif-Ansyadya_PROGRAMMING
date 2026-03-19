#include "core_mcu.hpp"
#include <iostream>
using namespace std;

//constructor
Core_MCU::Core_MCU(float cpu_speed, int memory, string os, string nama, int volt) {
    this-> cpu_speed = cpu_speed;
    this-> memory = memory;
    this-> os = os;
    this-> nama = nama;
    this-> volt = volt;

    cout << "[CORE MCU] : MCU utama yang bernama "<< nama << " telah dibuat\n";

    this->showSpek();

}
//destructor
Core_MCU::~Core_MCU() {
    cout << "[CORE MCU] : MCU utama yang bernama "<< nama << " telah dihapus\n";
}

//menampilkan spesifikasi
void Core_MCU::showSpek(){
    cout << "[SPEK DEVICE] : [NAMA DEVICE]: " << nama << " | [CPU CLOCK] : " << cpu_speed << " | [MEMORY] : " << memory << " | [OS] : "<< os << "\n";
}

//menambah voltase
void Core_MCU::nambah_volt(int penambahan_voltase){
    volt += penambahan_voltase;
    cout << "[CORE MCU] : MCU utama yang bernama " << nama << " Telah ditambah voltasenya menjadi = " << volt << "\n";
}

//mengganti os
void Core_MCU::ganti_os(string new_os){
    os = new_os;
    cout << "[Core_MCU] : MCU utama yang bernama " << nama << " Telah diganti OS nya menjadi = " << os << "\n";
}


//mengambil nama OS
string Core_MCU::get_os(){
    return os;
}
