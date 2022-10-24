#include<iostream>

using namespace std;

int main () {
    int alas, tinggi;
    float luas;

    cout << "Masukkan alas segitiga: ";
    cin >> alas;
    cout << "Masukkan tinggi segitiga: ";
    cin >> tinggi;

    luas = 0.5 * alas * tinggi;
    cout << "Luas segitiga adalah: " << luas << endl;

    return 0;
}