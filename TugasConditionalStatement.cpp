#include <iostream>
using namespace std;

void inputData(float &bb, float &tb){
    cout << "--- Selamat Datang Mahasiswa Kelas A 2025 ---" << endl;

    cout << "Masukkan berat badan (kg): ";
    cin >> bb;

    cout << "Masukkan tinggi badan (meter): ";
    cin >> tb;
}

float hitungBMI(float bb, float tb){
    return bb / (tb * tb);
}