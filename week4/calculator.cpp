#include <iostream>
using namespace std;
int main()
{
    char opr;
    float bil1, bil2, result;
    cout << "Masukkan operasi : ";
    cin >> bil1 >> opr >> bil2;
    switch (opr)
    {
    case '+':
        result = bil1 + bil2;
        break;

    case '-':
        result = bil1 - bil2;
        break;
    case '*':
        result = bil1 * bil2;
        break;
    case '/':
        result = bil1 / bil2;
        break;

    default:
        cout << "Operator tidak valid";
        return 0;
        break;
    }

    cout << "Result : " << result;

    return 0;
}