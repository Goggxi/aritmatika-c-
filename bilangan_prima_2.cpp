#include<iostream>

using namespace std;

int main () {
  int n;
  bool prima;

  cout << "Masukkan n : ";
  cin >> n;

 
  prima = true;
  
  for (int i = 2; i <= n ; i++)
  {
    if (i == 2) {
     prima = true;
    }

    int j = 2;
    while (j < i / 2  && prima == true)
    {
      if (i % j == 0) {
        prima = false;
        j++;
      }
    }

    if (prima == true) {
      cout << "Bilangan Prima : " << i << "\n";
    }
  }

  return 0;
}