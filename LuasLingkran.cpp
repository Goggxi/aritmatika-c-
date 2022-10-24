#include<iostream>

using namespace std;

int main () {
    int jari;
    float luas;

    cout << "Masukkan jari-jari lingkaran: ";
    cin >> jari;

    luas = 3.14 * jari * jari;
    cout << "Luas lingkaran adalah: " << luas << endl;

    return 0;
}