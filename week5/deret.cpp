#include <iostream>
using namespace std;
int main()
{
    int a, b, n;
    cout << "===== Baris Aritmatika =====" << endl;
    cout << "Masukkan suku pertama : ";
    cin >> a;
    cout << "Masukkan suku beda : ";
    cin >> b;
    cout << "Masukkan jumlah suku : ";
    cin >> n;

    cout << "Baris Aritmatika : ";
    for (int i = 1; i <= n; i++)
    {
        cout << a + (i - 1) * b << " ";
    }

    return 0;
}