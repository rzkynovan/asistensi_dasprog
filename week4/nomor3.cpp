#include <iostream>
using namespace std;
int main()
{
    float t_prisma, t, s, luas, volume;

    cout << "Masukkan Data Segitiga (sisi, tinggi) : ";
    cin >> s >> t;

    cout << "Masukkan data prisma (t) : ";
    cin >> t_prisma;

    luas = 2 * ((0.5 * s * t) + (s + s + s)) * t_prisma;
    volume = (0.5 * s * t) * t_prisma;

    cout << "Luas : " << luas << "\nVolume : " << volume;
    return 0;
}