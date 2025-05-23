#include <iostream> // Header c++
using namespace std;

int main() {
    system("cls"); // Membersihkan layar (opsional, hanya untuk Windows)
    
    int nilai;
    
    // Meminta input dari pengguna
    cout << "Masukkan nilai: "; // Input nilai
    cin >> nilai; // Membaca inputan dari user

    // Mengecek apakah nilai kelipatan 10 atau 5
    if (nilai % 10 == 0) { // Jika angka kelipatan 10
        cout << "Nilai anda kelipatan 10" << endl;
    } 
    else if (nilai % 5 == 0) { // Jika angka kelipatan 5
        cout << "Nilai anda kelipatan 5" << endl;
    } 
    else { // Jika bukan kelipatan 5 atau 10
        cout << "Nilai anda bukan kelipatan 5 atau 10" << endl;
    }

    return 0;
}
