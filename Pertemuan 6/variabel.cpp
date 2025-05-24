#include <iostream> // Header untuk c++
using namespace std;

string namaGlobal = "Ilmu"; // Variabel Global

void namaVariabel() { // Fungsi Nama Variabel
    string namaLokal = "Komputer"; // Variabel Lokal utnuk fungsi 'namaVariabel'

    // coba akses
    cout << namaLokal << endl;

    // coba akses 
    cout << namaGlobal << endl;
}

int main() {
    namaVariabel(); // Memanggil fungsi 'namaVariabel'

    // coba akses 
    cout << namaGlobal << endl;

    // coba akses 
    // cout << namaLokal << endl; // Tidak bs
}
