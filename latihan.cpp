#include <iostream>
using namespace std;

int main() {
    system("cls"); // Membersihkan layar (opsional, hanya untuk Windows)
    
    int nilai;
    
    // Meminta input dari pengguna
    cout << "Masukkan nilai: ";
    cin >> nilai;

    // Mengecek apakah nilai kelipatan 10 atau 5
    if (nilai % 10 == 0) {
        cout << "Nilai anda kelipatan 10" << endl;
    } 
    else if (nilai % 5 == 0) {
        cout << "Nilai anda kelipatan 5" << endl;
    } 
    else {
        cout << "Nilai anda bukan kelipatan 5 atau 10" << endl;
    }

    return 0;
}