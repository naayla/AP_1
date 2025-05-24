#include <iostream> // Header untuk c++
#include <string> // Untuk tipe data string
using namespace std;

struct Mahasiswa {
    string nama; n// String nama mahasiswa
    int umur; // Umur Mahasiswa
    float ipk; // Ipk Mahasiswa
};

int main() {
    Mahasiswa mhs1; // Membuat objek struct Mahasiswa bernama mhs1
    // Data mahasiswa operator (.) karna variabel langsung
    mhs1.nama = "Nayla";
    mhs1.umur = 18;
    mhs1.ipk = 4.00;

    // cout << "Akses dengan . : " << endl;
    // cout << "Nama : " << mhs1.nama << endl;
    // cout << "Umur : " << mhs1.umur << endl;
    // cout << "IPK : " << mhs1.ipk << endl;

    Mahasiswa *ptrMhs = &mhs1;  // Membuat pointer ke struct Mahasiswa dan menunjuk ke alamat mhs1
    cout << "Akses dengan -> : " << endl; // Akses data mhs1 LEWAT POINTER pakai operator panah (->)
    cout << "Nama : " << ptrMhs->nama << endl;
    cout << "Umur : " << ptrMhs->umur << endl;
    cout << "IPK : " << ptrMhs->ipk << endl;

}
