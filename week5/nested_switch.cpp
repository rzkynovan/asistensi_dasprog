#include <iostream>
using namespace std;
int main()
{
    int x, y;
    cout << "Masukkan nilai x : ";
    cin >> x;

    switch (x)
    {
    case 1:
        cout << "Masukkan nilai y : ";
        cin >> y;

        switch (y)
        {
        case 1:
            cout << "X : " << x << "Y : " << y;
            break;
        case 2:
            cout << "X : " << x << "Y : " << y;
            break;
        default:
            cout << "Y out of range";
            break;
        }
        break;

    case 2:
        cout << "Masukkan nilai y : ";
        cin >> y;

        switch (y)
        {
        case 1:
            cout << "X : " << x << "Y : " << y;
            break;
        case 2:
            cout << "X : " << x << "Y : " << y;
            break;
        default:
            cout << "Y out of range";
            break;
        }
        break;

    default:
        cout << "X out of range";
        break;
    }
    return 0;
}