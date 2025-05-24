#include <iostream> // Header untuk c++
#include <string> // Header untuk tipe data String
#include <array> // Header  untuk penggunaan Array
using namespace std;

int main(){

    // Array Declaration & Initialitation
    /* 2 Cara Membuat Array */

    // Cara 1 : array kosong
    // string nama[5]; // Deklarasi nama array dengan 5 elemen string

    // nama[0] = "Alya"; // Elemen pertama (indeks 0)
    // nama[1] = "Parul"; // Elemen kedua (indeks 1)
    // nama[2] = "Syukron"; // Elemen ketiga (indeks 2)
    // nama[3] = "Dzakwan"; // Elemen keempat (indeks 3)
    // nama[4] = "Aurick"; // Elemen kelima (indeks 4)

    // cara 2 : array yang Langsung diisi
    // string nama[5] = {"Alya", "Parul", "Syukron", "Dzakwan", "Aurick" }; // Array dengan ukuran ditentukan
    // string nama[] = {"Alya", "Parul", "Syukron", "Dzakwan", "Aurick" }; // Array dengan ukuran otomatis sesuai jumlah elemen

    // Ascending Element in Array
    // cout << nama[0] << endl; // Mencetak elemen pertama
    // cout << nama[1] << endl; // Mencetak elemen kedua
    // cout << nama[2] << endl; // Mencetak elemen ketiga
    // cout << nama[3] << endl; // Mencetak elemen keempat
    // cout << nama[4] << endl; // Mencetak elemen kelima

    // Menggunakan Looping
    // for (int i = 0; i < 5; i++){ // Loop dari Indeks 0 sampai 4
    //     cout  << nama[i] << endl; // Mencetak elemen Indeks i
    // }

    // Descending Element in Array
    // for (int i  = 4; i >= 0; i--){ // Loop dari Indeks 4 mundur sampai 0
    //     cout  << nama[i] << endl; // Mencetak elemen pada Indeks i
    // }

    // Multidemensional Array
    // 1 3 5
    // 2 4 6

    // int matrix[2][3] = {{1,3,5},{2,4,6}}; // Dekalarasi dan Inisialisasi Array 2x3
    // for(int i = 0; i < 2; i++){ // Loop untuk baris
    //     for(int j = 0; j < 3; j++){ // Loop untuk kolom
    //         cout << matrix[i][j] << " "; // Mencetk elemen pada barsi i dan kolom j
    //     }
    //     cout << endl; 
    // }

    // int matrix[4][6] = { // Array 4x6
    // {1,2,3,4,5,6}, 
    // {1,2,3,4,5,6}, 
    // {1,2,3,4,5,6},
    // {1,2,3,4,5,6}
    // };

    // for(int i = 0; i < 4; i++){ // Untuk 4 baris
    // for(int j = 0; j < 6; j++){ // Untuk 6 kolom
        // cout << matrix[i][j] << "\t"; // Menggunakan /t untuk tabel
    // }
        // cout << endl;
    // }

    // String (array of characters)
    // string nama = "Naufal" // Deklarasi dan Inisialisasi String
    // cout << nama[0] << endl; // Mengakses karakter pertama
    // cout << nama[0] << endl; 

    // for(int i = 0; i < nama.length(); i++){ // Loop sepanjang string
    //     cout << nama[i] << endl;
    // }


    // string s1 = "Hello";
    // string s2 = "World";


    /* 1. s1 = s2*/
    // s1 = s2; // Mengganti s1 dengan s2
    // cout << "s1 = " << s1 << endl; // Penggabungan String

    /* 2. s1 = s1 + s2*/
    // s1 = "Hello"; // Reset nilai di s1
    // cout << "Hasil : " << s1 + s2 << endl; // Menggabungkan String

    /* 3. s1.length() */
    // cout << s1.length() << endl;
    // cout << (s1 + s2).length() << endl;

    /* 4. 21/substr(n,m) */ // Mengambil substring dari Indeks 2 
    // cout << s1.substr(2,4) << endl; // Mengambil substring dari string gabungan
    // cout << (s1 + s2).substr(5,3) << endl;


    // Operator sizeof() 
    // int angka = 10;
    // cout << sizeof(angka); // Menghitung dan mencetak ukuran (dalam byte) dari variabel bertipe `int`

    // int nilai[] = {10, 20, 30, 40, 50};
    // cout << sizeof(nilai); // Menghitung dan mencetak ukuran total array `nilai`

    // string s = "Nayla";
    // cout << sizeof(s); // Mencetak ukuran objek `string` di memori
    // cout << s.length(); Mencetak panjang aktual string: jumlah karakter


    // string nama_karyawan[] = {"Alya", "Parul", "Syukron", "Dzakwan", "Aurick"};
    // int n = sizeof(nama_karyawan) / sizeof(string);  // Menghitung jumlah elemen array `nama_karyawan`
    // cout << n << endl;


    // Array Library
//     array <float,5> nilai = {87,2, 90, 100, 95,7, 78,5}; //  Mendeklarasikan array `nilai` dari library `array` dengan tipe `float`
//         cout << "nilai : ";
//     for (int i = 0; i < nilai.size(); i++) { // Loop untuk mencetak semua elemen dalam array `nilai` satu per satu
//         cout << nilai[i] << " ";

//     }
 
//     for (float n : nilai) {
//         cout << n << " ";
//     }

// } 
