#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float s, luas, volume;
    cout << "masukkan nilai s : ";
    cin >> s;

    luas = 6 * pow(s, 2);
    volume = pow(s, 3);
    cout << "Luas Permukaan : " << luas << "\nVolume : " << volume;

    return 0;
}