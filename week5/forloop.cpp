#include <iostream>
using namespace std;
int main()
{
    // Initial dari 0
    for (int i = 0; i < 5; i++)
    {
        cout << "Nilai i : " << i << endl;
    }

    // Initial dari 1
    for (int j = 1; j <= 5; j++)
    {
        // j = j + 1;
        // j += 1
        // j ++
        cout << "Nilai j : " << j << endl;
    }

    // Decrementing
    for (int k = 5; k >= 1; k -= 2)
    {
        cout << "Nilai k : " << k << endl;
    }

    return 0;
}