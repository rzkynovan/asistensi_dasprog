#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float r, luas, volume;
    const float phi = 3.14;

    cout << "Masukkan jari-jari : ";
    cin >> r;

    luas = 4 * phi * pow(r, 2);
    volume = 4 / 3 * phi * pow(r, 3);

    cout << "Luas : " << luas << "\nVolume : " << volume;
    return 0;
}