#include <iostream>
using namespace std;
int main()
{
    char name[255];
    cout << "Masukkan nama lengkap : ";
    // cin >> name; tidak bisa menangkap value space
    // solusi
    cin.get(name, 255);
    cout << "Nama saya : " << name << endl;
    return 0;
}