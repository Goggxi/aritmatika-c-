#include<iostream>

using namespace std;

int main () {
    int bilangan, i, jml;
    bool prima;

    cout << "Masukkan bilangan: ";
    cin >> bilangan;

    prima = true;
    jml = 0;
    for (i = 2; i <= bilangan; i++) {
        prima = true;
        for (int j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                prima = false;
                break;
            }
        }
        if (prima) {
            jml++;
        }
    }
    cout << "Jumlah bilangan prima: " << jml << endl;

    return 0;
}