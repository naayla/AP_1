#include <iostream> // Header untuk c++
#include <vector>
using namespace std;

int main() {
    // Vector Declaration & Initialization

    vector<string> nama_karyawan = {"Alya", "Parul", "Syukron", "Aurick", "Dzakwan"};

    // for (string karyawan : nama_karyawan) {
    //     cout << karyawan << endl;
    // }

    // Add data to vector 
     // Menambahkan elemen baru ke akhir vector
    nama_karyawan.push_back("Dhafa");

    // for (int i = 0; i < nama_karyawan.size(); i++){ // Menampilkan semua elemen menggunakan loop indeks
    //     cout << nama_karyawan[i] << endl;

    // }

    // Delete data from Vector
    nama_karyawan.pop_back(); // Menghapus elemen terakhir dalam vector

    nama_karyawan.erase(nama_karyawan.begin() + 3);  // Menghapus elemen ke-4

    for (int i = 0; i < nama_karyawan.size(); i++){ // Menampilkan semua nama karyawan setelah penghapusan
        cout << nama_karyawan[i] << endl;

    }
}
