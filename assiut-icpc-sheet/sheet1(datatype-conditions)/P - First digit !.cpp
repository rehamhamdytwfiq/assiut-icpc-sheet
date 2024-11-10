#include <iostream>
using namespace std ;
int main()
{
    int x ;
    cin >> x ; 
    if ( x >= 100 && x <= 999 ){
        int num1 = x / 100 ;
        if (num1 % 2 == 0)
            cout << "EVEN" ;
        else if (num1 % 2 > 0)
            cout << "ODD" ;
    }
    else if ( x >= 1000 && x <= 9999 ){
        int num2 = x / 1000 ;
        if (num2 % 2 == 0)
            cout << "EVEN" ;
        else if (num2 % 2 > 0)
            cout << "ODD" ;
    }
    return 0;
}