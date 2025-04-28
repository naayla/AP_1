#include <iostream>
using namespace std;

void sapa(string nama) {
    cout << "Halo " << nama << "! Selamat belajar C++" << endl;
}

int main() {
    string namaPengguna = "Nayla";

    sapa(namaPengguna);

    return 0;
}