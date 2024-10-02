#include <iostream>
using namespace std;
int main()
{
    int a, r, n;
    cout << "==== Deret Geometri ====" << endl;
    cout << "Masukkan suku pertama (a): ";
    cin >> a;
    cout << "Masukkan rasio (r): ";
    cin >> r;
    cout << "Masukkan jumlah suku (n): ";
    cin >> n;

    cout << "Baris Geometri : ";
    for (int i = 0; i < n; i++)
    {
        // a = 3, r = 2
        cout << a << " ";
        a = a * r;
    }

    return 0;
}