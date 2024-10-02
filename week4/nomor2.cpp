#include <iostream>
using namespace std;
int main()
{
    float p, l, t, luas, volume;
    cout << "Masukkan p l t : ";
    cin >> p >> l >> t;

    luas = 2 * ((p * l) + (p * t) + (l * t));
    volume = p * l * t;

    cout << "Luas : " << luas << "\nVolume : " << volume;
    return 0;
}