#include <stdio.h> // header untuk C
#include <conio.h> // header untuk fungsi getch()

int main() {
    char nama[50]; // Deklarasi Array karakter untuk nama
    int nim; // Deklarasi Variabel integer untuk menyimpan nim
    char kom[2]; // Deklarasi Array untuk menyimpan kom
    float ip; // Deklarasi Variabrl float untuk menyimpan ip

    printf("Hello World\n"); // fungsi keluaran pada C

    printf("Masukkan nama : ");
    gets(nama); // get string

    printf("Masukkan nim : ");
    scanf("%d", &nim); // fungsi masukan pada C

    getchar(); // Membersihkan newline sisa dari scanf

    printf("Masukkan kom : "); // Input kom
    gets(kom); 

    printf("Masukkan ip : "); // Input ip
    scanf("%f", &ip); 

    /* Untuk Output */
    printf("Nama : ");
    puts(nama); // put string, digunakan untuk string dalam bentuk array char

    printf("NIM : %d\n", nim); // Menampilkan nim

    printf("KOM : ");
    puts(kom); // Menampilkan kom
    printf("IP : %f\n", ip); // Menampilkan IP

    printf("press any button to continue...");
    getch(); // Menunggu Input karakter sebelum console
}
