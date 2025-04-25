#include <iostream>
#include <string>
#include <array>
using namespace std;

int main(){

    // Array Declaration & Initialitation
    /* 2 Cara Membuat Array */

    // Cara 1 : array kosong
    // string nama[5];

    // nama[0] = "Alya";
    // nama[1] = "Parul";
    // nama[2] = "Syukron";
    // nama[3] = "Dzakwan";
    // nama[4] = "Aurick";

    // cara 2 : array yang Langsung diisi
    // string nama[5] = {"Alya", "Parul", "Syukron", "Dzakwan", "Aurick" };
    // string nama[] = {"Alya", "Parul", "Syukron", "Dzakwan", "Aurick" };

    // Ascending Element in Array
    // cout << nama[0] << endl;
    // cout << nama[1] << endl;
    // cout << nama[2] << endl;
    // cout << nama[3] << endl;
    // cout << nama[4] << endl;

    // Menggunakn Looping
    // for (int i = 0; i < 5; i++){
    //     cout  << nama[i] << endl;
    // }

    // Descending Element in Array
    // for (int i  = 4; i >= 0; i--){
    //     cout  << nama[i] << endl;
    // }

    // Multidemensional Array
    // 1 3 5
    // 2 4 6

    // int matrix[2][3] = {{1,3,5},{2,4,6}};
    // for(int i = 0; i < 2; i++){
    //     for(int j = 0; j < 3; j++){
    //         cout << matrix[i][j] << " ";
    //     }
    //     cout << endl; 
    // }

    // int matrix[4][6] = {
    // {1,2,3,4,5,6}, 
    // {1,2,3,4,5,6}, 
    // {1,2,3,4,5,6},
    // {1,2,3,4,5,6}
    // };

    // for(int i = 0; i < 4; i++){
    // for(int j = 0; j < 6; j++){
        // cout << matrix[i][j] << "\t";
    // }
        // cout << endl;
    // }

    // String (array of characters)
    // string nama = "Naufal"
    // cout << nama[0] << endl;
    // cout << nama[0] << endl;

    // for(int i = 0; i < nama.length(); i++){
    //     cout << nama[i] << endl;
    // }


    // string s1 = "Hello";
    // string s2 = "World";


    /* 1. s1 = s2*/
    // s1 = s2;
    // cout << "s1 = " << s1 << endl;

    /* 2. s1 = s1 + s2*/
    // s1 = "Hello";
    // cout << "Hasil : " << s1 + s2 << endl;

    /* 3. s1.length() */
    // cout << s1.length() << endl;
    // cout << (s1 + s2).length() << endl;

    /* 4. 21/substr(n,m) */
    // cout << s1.substr(2,4) << endl;
    // cout << (s1 + s2).substr(5,3) << endl;


    // Operator sizeof() 
    // int angka = 10;
    // cout << sizeof(angka);

    // int nilai[] = {10, 20, 30, 40, 50};
    // cout << sizeof(nilai);

    // string s = "Nayla";
    // cout << sizeof(s);
    // cout << s.length();


    // string nama_karyawan[] = {"Alya", "Parul", "Syukron", "Dzakwan", "Aurick"};
    // int n = sizeof(nama_karyawan) / sizeof(string);
    // cout << n << endl;


    // Array Library
//     array <float,5> nilai = {87,2, 90, 100, 95,7, 78,5};
//         cout << "nilai : ";
//     for (int i = 0; i < nilai.size(); i++) {
//         cout << nilai[i] << " ";

//     }
 
//     for (float n : nilai) {
//         cout << n << " ";
//     }

// } 