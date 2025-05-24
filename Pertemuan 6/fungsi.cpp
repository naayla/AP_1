#include <iostream> // Header untuk c++
using namespace std;

// fungsi tanpa nilai balikan
void tampilkanPesan(){
    cout << "==== SELAMAT DATANG DI AP 1 ====" << endl;
}

// fungsi dengan nilai balikan
int tambah(int a, int b) {
    return a + b; // Mengembalikan hasil penjumlahan a dan b
}

// fungsi overload
int kali(int a, int b) { // Untuk perkalian bilangan bulat
    return a * b;
}

double kali(double a, double b){
    return a * b; // Perkalian bilangan desimal
}

// fungsi rekursif : menghitung nilai faktorial
int faktorial(int n){
    if (n==0 || n==1){
        return 1; // Kondisi awal
    } else {
        return n * faktorial(n-1); // Memanghil dirinya sendiri dengan n-1
    }
}

int main() {
    system("CLS");

    // menggunakan fungsi tanpa nilai balikan
    tampilkanPesan();

    int x = 5, y = 3;

    // menggunakan fungsi dengan nilai balikan 
    int hasilTambah = tambah(x,y); n// Memanggil hasil penjumlahan
    cout << "hasil penjumlahan : " << hasilTambah << endl;

    //  menggunakan fungsi overload
    int hasilKaliInt = kali(x,y); // Memanggil kali untuk int
    double hasilKaliDouble = kali(5.5 , 2.0); // Memanggil kali untuk desimal
    cout << "hasil perkalian (int) : " << hasilKaliInt << endl;
    cout << "hasil perkalian (double) : " << hasilKaliDouble << endl;

    // menggunakan fungsi rekursif 
    int angka = 5;
    cout << "faktorial dari " << angka << " adalah " << faktorial(angka) << endl;
}
