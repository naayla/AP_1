#include <iostream> // Header untuk c++
using namespace std;

int main() {
    string password, sandi, expected = ""; // Deklarasi Variabel String

    cout << "Masukkan kata sandi : "; // Inputan Pengguna
    cin >> password; // Membaca input dan menyimpannya dalam variabel 'passwrord'

    cout << "Masukkan kata : "; // Inputan Pengguna
    cin >> sandi; // Membaca Iputan dan menyimpannya dalam variabel 'sandi'

    // Membuat string "expected" berdasarkan pola tertentu
    for (int i = 0; i < password.length(); i++) {  // Melakukan perulangan dari indeks 0 hingga panjang password - 1
        expected += password.substr(0, i + 1); // Menambahkan substring dari password mulai indeks 0 hingga i (inklusif) ke variabel 'expected'
    }

    // Mengecek apakah input kedua sesuai dengan pola yang diharapkan
    if (expected == sandi) {
        cout << "Tulisan agen benar" << endl; // Output jika pola benar
    } else {
        cout << "Tulisan agen salah" << endl; // Output jika pola salah
    }

    return 0;
}
