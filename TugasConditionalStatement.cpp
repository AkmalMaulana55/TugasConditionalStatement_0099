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

string statusBMI(float bmi){
    if (bmi < 18.5)
        return "Berat Badan Kurang";
    else if (bmi < 25)
        return "Berat Badan Normal";
    else if (bmi < 30)
        return "Berat Badan Kelebihan";
    else
        return "Obesitas";
}

int main(){
    float berat, tinggi, bmi;

    inputData(berat, tinggi);
    bmi = hitungBMI(berat, tinggi);

    cout << endl;

    cout << "--- Hasil ---" << endl;
}