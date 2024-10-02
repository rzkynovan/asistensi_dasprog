#include <iostream>
using namespace std;
int main()
{

    int s = 255;
    char my_str[s];
    cout << "Enter a string : ";
    cin.get(my_str, s, '#');
    cout << "Your entered : " << my_str;
    return 0;
}