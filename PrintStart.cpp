#include<iostream>

using namespace std;

int main () {
    int pilihan;
    int jari;
    int alas, tinggi;
    int panjang, lebar;
    float luas;

    cout << "Program Menghitung Luas Bangun Datar" << endl;
    cout << "1. Luas Lingkaran" << endl;
    cout << "2. Luas Segitiga" << endl;
    cout << "3. Luas Persegi Panjang" << endl;
    cout << "Pilihan: ";
    cin >> pilihan;

    if (pilihan == 1) {
        cout << "Masukkan jari-jari lingkaran: ";
        cin >> jari;

        luas = 3.14 * jari * jari;
        cout << "Luas lingkaran adalah: " << luas << endl;
    } else if (pilihan == 2) {
        cout << "Masukkan alas segitiga: ";
        cin >> alas;
        cout << "Masukkan tinggi segitiga: ";
        cin >> tinggi;

        luas = 0.5 * alas * tinggi;
        cout << "Luas segitiga adalah: " << luas << endl;
    } else if (pilihan == 3) {
        cout << "Masukkan panjang persegi panjang: ";
        cin >> panjang;
        cout << "Masukkan lebar persegi panjang: ";
        cin >> lebar;

        luas = panjang * lebar;
        cout << "Luas persegi panjang adalah: " << luas << endl;
    } else {
        cout << "Pilihan tidak tersedia" << endl;
    }

    return 0;
}