#include <iostream>
using namespace std;
int main()
{
    char input;
    cin >> input;
    const char capital = input + 32;
    const char small = input - 32;
    if (input >= 65 && input <= 90 )
        cout << capital;
    else if (input >= 97 && input <= 122 )
        cout << small;
    return 0;
}