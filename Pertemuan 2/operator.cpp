#include <iostream> // Header untuk c++
using namespace std;

int main(){
    int a, b; // Dua variabel integer

    system("CLS"); // Membersihkan layar

    // Assignment operator (*)
    a =3; // Nilai 3
    b= 5; // Nilai 5

    // Arithmatical Operator (+, -, /, *, %); // Operator untuk operasi matematika
    // int tambah = a + b; // Operasi Penjumlahan
    // int kurang = a - b; // Operasi Pengurangan
    // int kali = a * b; // Operasi Perkalian
    // float bagi = (float)a / (float)b; // type casting = mengubah tipe data dari sebuah variabel
    // int modulo = a % b; // Menghitung sdisa bagi a dengan b

    // cout << "Hasil penjumlahan : " << tambah << endl;
    // cout << "Hasil pengurangan : " << kurang << endl;
    // cout << "Hasil perkalian : " << kali << endl;
    // cout << "Hasil pembagian : " << bagi << endl;
    // cout << "Hasil sisa bagi : " << modulo << endl;

    // Relational Operator
    // cout << (a==b) << endl; // Memeriksa apakah a sama dengan b (nilai boolean)
    // cout << (a>b) << endl; // Memeriksa apakah a lebih dari b (nilai boolean)
    // cout << (a>=b) << endl; // Memeriksa apakah a kurang dari atau sama dengan b (nilai boolean)
    // cout << (a<b) << endl; // Memeriksa apakah a kurang dari b (nilai boolean)
    // cout << (a<=b) << endl; // Memeriksa apakah a kurang dari atau sama dengan b (nilai boolean)
    // cout << (a!=b) << endl; // Memeriksa apakah a tidak sama dengan b (nilai boolean)

    // Logical Operator (&&, //, !)
    // cout << (true && true) << endl; // AND: True jika kedua operand true
    // cout << (true && false) << endl; // AND: False jika salah satu operand false
    // cout << (false && true) << endl; // AND: False jika salah satu operand false
    // cout << (false && false) << endl; // AND: False jika kedua operand false

    // cout << (true || true) << endl; // OR: True jika salah satu operand true
    // cout << (true || false) << endl; // OR: True jika salah satu operand true
    // cout << (false || true) << endl; // OR: True jika salah satu operand true
    // cout << (false || false) << endl; // OR: False jika kedua operand false

    // cout << !true << endl; // NOT: Negasi dari True (false)
    // cout << !false << endl; // NOT: Negasi dari False (true)

    // Bitwise Operator (&, /, ~, ^, <<, >>) --> operasi biner 
    // cout << (5 & 7) << endl; // Bitwise AND antara 5 (0101) dan 7 (0111) -> 0101 (5)
    // cout << (5 / 7) << endl; // Bitwise OR antara 5 (0101) dan 7 (0111) -> 0111 (7)
    // cout << (5 ^ 7) << endl; // Bitwise XOR antara 5 (0101) dan 7 (0111) -> 0010 (2)
    // cout << (~7) << endl; // Bitwise NOT dari 7 (0111) -> ...1000 (-8 pada representasi two's complement)
    // cout << (7 << 2) << endl; // Left shift 7 (0111) sebanyak 2 bit -> 11100 (28)
    // cout << (7 >> 2) << endl; // Right shift 7 (0111) sebanyak 2 bit -> 0001 (1)

    // Shorthand 
    // a += 7; // a = a + 7
    // cout << a << endl;

    // a -= 7; // a = a - 7
    // cout << a << endl;

    // a *= 7; // a = a * 7
    // cout << a << endl;

    // a /= 7; // a = a / 7
    // cout << a << endl;

    // Increment & Decrement 
    // Pre Increment 
    // cout << a << endl;
    // cout << ++a << endl; // a menjadi 4, lalu di outputkan

    // cout << b << endl;
    // cout << ++b << endl; // b menjadi 6, lalu di outputkan

    // Post Increment
    // cout << a << endl;
    // cout << a++ << endl; // 4 di outputkan, lalu a menjadi 5
    // cout << a << endl; // Output 5

    // cout << b << endl;
    // cout << b++ << endl; // 6 di outputkan, lalu b menjadi 7
    // cout << b << endl; // Output 7

    // Pre Decrement
    // cout << a << endl; 
    // cout << --a << endl;  // a menjadi 4, lalu di outputkan

    // cout << b << endl;
    // cout << --b << endl; // b menjadi 6, lalu di outputkan

    // Post Decrement
    // cout << a << endl;
    // cout << a-- << endl;  // 4 di outputkan, lalu a menjadi 3
    // cout << a << endl; // Output 3

    // cout << b << endl;
    // cout << b-- << endl; // 6 di outputkan, lalu b menjadi 5
    // cout << b << endl; // Output 5
}
    
