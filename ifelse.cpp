#include <iostream>
using namespace std;
int main()
{
    unsigned int nilai;
    string keterangan;
    cout << "Masukkan Nilai : ";
    cin >> nilai;

    if (nilai > 100)
    {
        cout << "Nilai tidak valid";
        return 0;
    }

    if (nilai >= 86)
    {
        keterangan = "Nilai A / Istimewa";
    }
    else if (nilai >= 76)
    {
        keterangan = "Nilai AB / Baik Sendiri";
    }
    else if (nilai >= 66)
    {
        keterangan = "Nilai B / Baik";
    }
    else if (nilai >= 61)
    {
        keterangan = "Nilai BC / Cukup Baik";
    }
    else if (nilai >= 56)
    {
        keterangan = "Nilai C / Cukup";
    }
    else if (nilai >= 41)
    {
        keterangan = "Nilai D / Kurang";
    }
    else
    {
        keterangan = "Nilai E / Kurang Sekali";
    }
    cout << keterangan;

    return 0;
}