#include <iostream>
using namespace std;
int main()
{
    int mark = 42;

    if (mark >= 50)
    {
        cout << "Anda lulus ";
        if (mark == 100) // mark >= 50 & mark = 100
        {
            cout << "Nilai Sempurna";
        }
    }
    else
    {
        cout << "Anda Tidak Lulus";
    }

    return 0;
}