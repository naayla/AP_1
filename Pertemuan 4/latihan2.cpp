#include <iostream> // Header untuk c++
using namespace std;

int main() {
    string kalimat; // Variabel string untuk menyimpan kalimat
    int i; // Deklarasi variabel integer untuk digunakan dalam perulangan

    cout << "Masukkan kalimat : "; // Inputan Pengguna
    getline(cin, kalimat); // Membaca Inputan dan Menyimpnnya di variabel 'kalimat'

    // alya
    for(i = 0; i < kalimat.length(); i++){ // Perulangan untuk mengakses setiap karakter dalam string 'kalimat'
        // Mengecek apakah karakter ke-i adalah huruf vokal kecil: a, i, u, e, o
        if (kalimat[i] == 'a' || kalimat[i] == 'i' || kalimat[i] == 'u' || kalimat[i] == 'u' || kalimat[i] == 'e' || kalimat[i] == 'o'){
            kalimat[i] = toupper(kalimat[i]); // Jika iya, ubah karakter tersebut menjadi huruf kapital
            }
    }
    cout << "Kalimat dalam huruf kapital : " << kalimat << endl;
    // Menampilkan hasil akhir kalimat setelah huruf vokal kecil diubah menjadi kapital

    return 0;
}
