#include <iostream> // Header c++
using namespace std;

int main(){
    int nilai; // Variabel Integer Nilai

    system("CLS");

    cout << "Masukkan niai : "; // Input Nilai
    cin >> nilai; // Membaca inputan dan menyimpannya

    // if statement
    // if (nilai <= 65) { // Memeriksa apakah kurang dari atau sama dengan 65
    //     cout << "Anda tidak lulus" << endl; // Tampilan Jika benar kurang dari atau sama dengan 65
    // }

    // if-else statement
    // if (nilai <= 65) { // Memeriksa apakah kurang dari atau sama dengan 65
    //     cout << "Anda tidak lulus" << endl; // Tampilan
    // } else { // Jika kondisi salah
    //     cout << "Anda lulus"; // Tampilan
    // }

    // if else if statement
    // if (nilai == 100) { // Memeriksa apakah nilai sama dengan 100
    //     cout << "Anda keceh!" << endl; // Tampilan
    // } else if (nilai <= 65) {  // Jika kondisi pertama salah, periksa apakah nilai kurang dari atau sama dengan 65
    //     cout << "Anda tidak lulus" << endl; // Tampilan
    // } else { // Jika kedua kondisi di atas salah
    //     cout << "Anda lulus" << endl; // Tampilan
    // }

    // Nested if
    // if (nilai <= 65){ // Memeriksa apakah nilai kurang dari atau sama dengan 65
    //     cout << "Anda tidak lulus" << endl;
    // } else { // Jika kondisi pertama salah
    //     if (nilai == 100) {  // Memeriksa apakah nilai sama dengan 100
    //         cout << "Anda lulus dan anda keceh" << endl;
    //     } else { // Jika kondisi nested if salah
    //         cout << "Anda lulus" << endl;
    //     }
    // }

    // Switch case 
    // switch (nilai) { // Memeriksa nilai dari variabel 'nilai
    //     case 1: 
    //         cout << "Senin" << endl;
    //         break; // Keluar dari switch statement
    //     case 2: 
    //         cout << "Selasa" << endl;
    //         break;
    //     case 3: 
    //         cout << "Rabu" << endl;
    //         break;
    //     case 4: 
    //         cout << "Kamis" << endl;
    //         break;
    //     case 5: 
    //         cout << "Jumat" << endl;
    //         break;
    //     case 6: 
    //         cout << "Sabtu" << endl;
    //         break;
    //     case 7: 
    //         cout << "Minggu" << endl;
    //         break;
    //     default: // Selain dari data diatas
    //         cout << "Inputan tidak valid" << endl;
    //         break; 
    // }

    //  switch range
    // switch (nilai) {
    //     case 85 ... 100 : cout << "A" << endl; break; // jika nilai berada dalam rentang 85 hingga 100
    //     case 80 ... 84 : cout << "B+" << endl; break; // jika nilai berada dalam rentang 80 hingga 84
    //     case 75 ... 79 : cout << "B" << endl; break;  // jika nilai berada dalam rentang 75 hingga 79
    //     case 70 ... 74 : cout << "C+" << endl; break; // jika nilai berada dalam rentang 70 hingga 74
    //     case 65 ... 69 : cout << "C" << endl; break; // jika nilai berada dalam rentang 65 hingga 69
    //     case 60 ... 64 : cout << "D" << endl; break; // jika nilai berada dalam rentang 60 hingga 64
    //     default : cout << "E" << endl; break; // Kurang
    // }

    // Ternary Operator
    // if (nilai % 2 == 0) { //memeriksa apakah habis dibagi 2
    //     cout << "Genap nih" << endl;
    // } else { // memeriksa apakah tidak habis dibagi 2
    //     cout <<""Ganjil sih" << endl;
    
    // }
    string checkNum = (nilai % 2 == 0) ? "Genap" : "Ganjil"; // Menggunakan ternary operator untuk menentukan apakah bilangan genap atau ganjil
    cout << nilai << " tuh bilangan " << checkNum << " sih " << endl; // Menampilkan hasil menggunakan ternary operator
}
