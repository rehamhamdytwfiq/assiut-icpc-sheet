#include <iostream>
using namespace std;
int main()
{
    char input;
    cin >> input;
    if ( input >= 48 && input <= 57 ) 
        cout << "IS DIGIT";
    else if (input >= 65 && input <= 90 ) 
        cout << "ALPHA"<<endl<<"IS CAPITAL";
    else if (input >= 97 && input <= 122 )
        cout << "ALPHA"<<endl<<"IS SMALL";
    return 0;
}