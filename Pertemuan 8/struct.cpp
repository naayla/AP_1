#include <iostream> // Header untuk c++
#include <string> // Tipe data String
#include <vector>
using namespace std;

struct Alamat { // Definisi struct Alamat untuk menyimpan informasi alamat
    string jalan;
    string kota;
    int kodePos;
};

struct Mahasiswa { // Definisi struct Mahasiswa
    string nama; // Menyimpan Nama
    int umur; // Menyimpan Umur
    float ipk; // Menyimpan IPK
    Alamat alamat; // nested struct
};

int main() {
    system("CLS");
    Mahasiswa mhs1; // Objek mhs1

    // mhs1.alamat.jalan = "Jalan Jamin Ginting";
    // mhs1.alamat.kota = "Medan";
    // mhs1.alamat.kodePos = 20155;

    // cout << "Alamat : " << mhs1.alamat.jalan << " " << mhs1.alamat.kota << " " << mhs1.alamat.kodePos << " " << endl;

        // Menggunakan vector untuk menyimpan banyak objek Mahasiswa
    vector <Mahasiswa> mahasiswa; // Deklarasi vector yang akan menyimpan objek Mahasiswa
    int n;
    cout << "Masukkan banyak mahasiswa : "; // Dekarasi Vector
    cin >> n; // Membaca jumlah mahasiswa dari user

        // Loop untuk menginput data setiap mahasiswa
    for(int i = 0; i < n; i++) {
        cout << "Mahasiswa " << i + 1 << endl;

        cin.get(); // Membaca (dan membuang) satu karakter dari buffer input
        cout << "Masukkan nama : ";
        getline(cin, mhs1.nama);

        cout << "Masukkan umur : ";
        cin >> mhs1.umur;

        cout << "Masukkan IPK : ";
        cin >> mhs1.ipk;

        mahasiswa.push_back(mhs1); // Menambahkan objek mahasiswa yang sudah diisi ke dalam vector
    }

    for(int i = 0; i < n; i++){ // Loop untuk menampilkan data setiap mahasiswa yang sudah diinput
        cout << "Mahasiswa " << i + 1 << endl;
        cout << "Nama : " << mahasiswa[i].nama << endl;
        cout << "Umur : " <<  mahasiswa[i].umur << endl;
        cout << "IPK : " << mahasiswa[i].ipk << endl;
    }
}
