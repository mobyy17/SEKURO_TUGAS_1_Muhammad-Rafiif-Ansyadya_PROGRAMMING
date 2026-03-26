#pragma once
#include "bits/stdc++.h"
using namespace std;

class MCU {
protected:
    float cpu_speed;
    int memory;
    string os;
    string name;
    int volt;

public:
    MCU(float cpu_speed, int memory, string os, string name, int volt);
    virtual void showSpek();
    virtual void nambah_volt(int penambahan_voltase);
    virtual void ganti_os(string new_os);
    virtual ~MCU(); 
};