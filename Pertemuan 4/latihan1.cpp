#include <iostream> // Header untuk c++
using namespace std;

int main() { 
    string kalimat; // Deklarasi variabel string untuk menyimpan kalimat yang dimasukkan pengguna
    int i;  // Deklarasi variabel integer

    cout << "Masukkan kalimat : "; // Inputan Pengguna
    getline(cin, kalimat); // Membaca Inputan dan Menyimpannya di variabel 'kalimat'

    // nayla
    for(i = 0; i < kalimat.length(); i++){ // Perulangan dari indeks 0 hingga panjang kalimat - 1
        kalimat[i] = toupper(kalimat[i]); // Mengubah karakter dalam string menjadi kapital
    }
    cout << "Kalimat dalam huruf kapital : " << kalimat << endl;  // Menampilkan hasil kalimat yang telah diubah ke huruf kapital

    return 0;
}
