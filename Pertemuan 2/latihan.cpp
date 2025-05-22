#include <iostream> // Header untuk c++
using namespace std;

int main()
    {
        // Program untuk menentukan volume dan luas sebuah bola
        float luas, volume, jari; // Deklarasi Variabel luas, volume, jari-jari
        const float phi = 3.14; // konstanta 

        cout << "Input jari-jari : ";
        cin >> jari; // Meminta pengguna menginput nilai jari-jari dan menyimpan di variabel

        volume = ((float)4/3) * (phi) * (jari*jari*jari); // Rumus hitung volume bola
        luas = 4 * phi * jari * jari; // Rumus hitung permukaan bola

        cout << "Volume : " << volume << endl; // Menampilkan hasil hitung volume
        cout << "luas : " << luas << endl; // Menampilkan hasil hitung luas
    }
