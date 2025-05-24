#include <iostream> // Header untuk c++
using namespace std;

void penjumlahan(int a, int b) { // Fungsi yang menerima nilai biasa
    cout << a + b << endl;
}

void penjumlahanPointer (int *a, int *b) { // Fungsi untuk pointer
    *a += *b;
    cout << *a << endl;
}

void doubleValue(int *a) {
    *a *= 2;
    cout << *a << endl;
}

int main() {
    system("cls");

    // Deklarasi Pointer
    int number = 35; // Variabel integer
    int *pointer_number = &number; // Deklarasi pointer 'pointer_number' yang menunjuk ke alamat 'number'

    // cout << "Isi variabel number = " << number << endl;
    // cout << "Alamat memori variabel number = " << &number << endl; // Alamat 'number'
    // cout << "Isi variabel pointer number = " << pointer_number << endl; // Alamat yang disimpan pointer
    // cout << "Isi variabel yang ditunjuk oleh pointer_number = " << *pointer_number << endl; // Nilai di alamat yang ditunjuk
    // cout << "Alamat memori variabel pointer_number = " << &pointer_number << endl; // Alamat pointer itu sendiri
    // cout << endl;


    // Pointer Operation
    // *pointer_number = 25;
    // cout << "Isi variabel number = " << number << endl;
    // cout << "Alamat memori variabel number = " << &number << endl;
    // cout << "Isi variabel pointer number = " << pointer_number << endl;
    // cout << "Isi variabel yang ditunjuk oleh pointer_number = " << *pointer_number << endl;
    // cout << "Alamat memori variabel pointer_number = " << &pointer_number << endl;
    // cout << endl;


    // Pointer in Array
    int num[] = {1, 2, 3, 4, 5}; // Deklarasi array
    int *pointer_num = num; // Pointer menunjuk ke elemen pertama array (num[0])
    // cout << "Isi variabel number = " << num[0] << endl;
    // cout << "Alamat memori variabel num = " << &num[3] << endl; // Alamat elemen ke-4 (indeks 3)
    // cout << "Isi variabel pointer_num = " << pointer_num << endl; // Alamat num[0]
    // cout << "Isi variabel yang ditunjuk oleh pointer_num = " << *pointer_num << endl; // Nilai num[0]
    // cout << "Alamat memori variabel pointer_num = " << &pointer_num << endl; // Alamat pointer itu sendiri
    // cout << endl;

    // *pointer_num += 5; // 6
    // cout << "Isi variabel number = " << num[0] << endl;
    // cout << "Alamat memori variabel num = " << &num[0] << endl;
    // cout << "Isi variabel pointer_num = " << pointer_num << endl;
    // cout << "Isi variabel yang ditunjuk oleh pointer_num = " << *pointer_num << endl;
    // cout << "Alamat memori variabel pointer_num = " << &pointer_num << endl;
    // cout << endl;


    // Pointer in Parameter
    // int num1 = 5;
    // int num2 = 7;
    // penjumlahan(num1, num2);
    // cout << num1 << endl; // Output: 5
    // cout << num2 << endl; // Output: 7
    // penjumlahanPointer(&num1, &num2);
    // cout << num1 << endl; // Output: 12 (karena num1 += num2 di fungsi)
    // cout << num2 << endl; // Output: 7

    // Pointer in Pointer
    // int score = 4;
    // int *pointer_score = &score;  // Pointer menunjuk ke 'score'
    // int **ptr_pointer_score = &pointer_score; // Pointer in pointer

    // cout << "Isi variabel score " << score << " dan alamat memorinya " << &score << endl;
    // cout << "Isi variabel pointer_score " << pointer_score << " dan isi variabel yang ditunjuk oleh pointer score " << *pointer_score << " alamat memori pointer_score " << &pointer_score << endl;
    // cout << "Isi variabel ptr_pointer_score " << pointer_score << " dan isi variabel yang ditunjuk oleh ptr_pointer_score " << **ptr_pointer_score << " alamat memori ptr_score " << &ptr_pointer_score << endl;


    // Dynamic Pointer
    // int *ptr = new int; // Mengalokasikan memori baru untuk satu integer di heap, 'ptr' menunjuk ke sana
    // *ptr = 30; // Menetapkan nilai 30 ke lokasi memori yang ditunjuk oleh 'ptr'
    // cout << "Isi variabel ptr = " << *ptr << " alamat variabel ptr = " << &ptr << endl; // Output nilai dan alamat pointer itu sendiri

    // delete ptr; // deallocation
    // cout << "Isi variabel ptr = " << *ptr << " alamat variabel ptr = " << &ptr << endl; 


    // Contoh 
    // int n;
    // cout << "Masukkan sebuah angka = ";
    // cin >> n;

    // doubleValue(&n);
    // cout << "Nilai angka setelah di kali 2 = " << n << endl;

}
