
#include <iostream>
using namespace std ;
int main()
{
    int a , b , c ;
    cin >> a >> b >> c ;
    if ( a <= b && b <= c )
        cout << a << endl << b << endl << c << endl;
    else if ( b <= c && c <= a )
        cout << b << endl << c << endl << a << endl;
    else if ( b <= a && a <= c )
        cout << b << endl << a << endl << c << endl;
    else if ( c <= a && a <= b ) 
        cout << c << endl << a << endl << b << endl;
    else if ( c <= b && b <= a )
        cout << c << endl << b << endl << a << endl;
    else if ( a <= c && c <= b )
        cout << a << endl << c << endl << b << endl;

    
    cout << endl << a << endl << b << endl << c ;
    return 0;
}