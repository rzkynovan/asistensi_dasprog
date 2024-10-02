#include <iostream>
using namespace std;
int main()
{
    int angka;
    string keterangan;
    cout << "Masukkan angka : ";
    cin >> angka;
    if (angka % 2 == 0)
    {
        keterangan = "angka genap";
    }
    else
    {
        keterangan = "angka ganjil";
    }
    cout << keterangan;

    return 0;
}