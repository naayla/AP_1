#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Vector Declaration & Initialization

    vector<string> nama_karyawan = {"Alya", "Parul", "Syukron", "Aurick", "Dzakwan"};

    // for (string karyawan : nama_karyawan) {
    //     cout << karyawan << endl;
    // }

    // Add data to vector 
    nama_karyawan.push_back("Dhafa");

    // for (int i = 0; i < nama_karyawan.size(); i++){
    //     cout << nama_karyawan[i] << endl;

    // }

    // Delete data from Vector
    nama_karyawan.pop_back();

    nama_karyawan.erase(nama_karyawan.begin() + 3);

    for (int i = 0; i < nama_karyawan.size(); i++){
        cout << nama_karyawan[i] << endl;

    }
}
