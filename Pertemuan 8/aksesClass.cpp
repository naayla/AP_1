#include <iostream> // Header untuk c++
using namespace std;

class ContohAkses {
    private: 
        int privateVar; // Hanya bisa diakses dari dalam class 

    protected:
        int protectedVar; // Bisa diakses dari dalam class dan dari subclass (kelas turunan)

    public:
        int publicVar; // Bisa diakses dari mana saja

    // Constructor
    ContohAkses() { // Menginisialisasi nilai semua variabel anggota
        privateVar = 1;
        protectedVar = 2;
        publicVar = 3;
    }

    void tampilkanSemua() { // Fungsi anggota untuk menampilkan semua nilai dari dalam class
        cout << "Akses dari dalam class : " << endl;
        cout << privateVar << endl; // Boleh karena masih di dalam class
        cout << protectedVar << endl; // Boleh
        cout << publicVar << endl; // Boleh
    }
};

// kelas turunan dari ContohAkses 
class Turunan : public ContohAkses {
    public:
    // Fungsi untuk mengakses variabel dari kelas induk
    void aksesProtected() {
        cout << protectedVar << endl; // Boleh karena 'protected' bisa diakses oleh turunan
        cout << publicVar << endl; // Boleh karena 'public' bisa diakses dari mana saja
        // cout << privateVar << endl; // Error : Tidak bisa akses private dari turunan
    }
};

int main() {
    ContohAkses obj; // Buat objek dari ContohAkses
    obj.tampilkanSemua(); // Tampilkan semua variabel dari dalam objek

    cout << "\nAkses dari luar class : " << endl;
    // cout << obj.privateVar << endl; // error : tidak bisa akses private dari luar
    // cout << obj.protectedVar << endl; // error : tidak bisa akses protected dari luar
    cout << obj.publicVar << endl;

    cout << "\nAkses dari kelas Turunan " << endl;
    Turunan tur; // Buat objek dari Turunan
    tur.aksesProtected(); // Tampilkan variabel yang bisa diakses turunan
}
