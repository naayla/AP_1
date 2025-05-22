#include <iostream> // header untuk c++
#include <conio.h> // header untuk getche() dan getch()
using namespace std;

int main (){

    string nama;
    char kom, jenisKelamin;
    int nim;
    float ip;

    /*ini untuk komentar
    beberapa baris*/

    cout << "Hello World!" << endl; // Menampilkan teks "Hello World" ke layar

    cout << "Masukkan nama:" ; // Input nama dari pengguna
    // cin >> nama;
    getline (cin, nama); //agar karakter spasi bisa terbaca

    cout << "Masukkan Kom:"; // Input Kom
     cin >> kom;

     cout << "Masukkan NIM::"; // Input NIM
     cin >> nim;
     
     cout << "Masukkan IP:"; // Input IP
     cin >> ip;
     
     cout << "Masukkan jenis kelamin (L/P) :";
     jenisKelamin = getche(); //agar karakter langsung tampil, jadi ga perlu tekan enter

    /*untuk output*/
    cout << "\n" << nama << endl; // Menampilkan nama yang diinput pengguna
    cout << kom << endl; // Menampilkan kom yang diinput pengguna
    cout << nim << endl; // Menampilkan nim yang diinput pengguna
    cout << ip << endl; // Menampilkan ip yang diinput pengguna
    putchar(jenisKelamin); // untuk menampilkan karakter jenis kelamin

    getch(); // karakter yang diketik gak ditampilkan di layar

}
