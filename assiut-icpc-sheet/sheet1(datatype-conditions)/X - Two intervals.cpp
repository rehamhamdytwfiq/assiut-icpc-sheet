#include <iostream>
using namespace std ;
 
int main()
{
    long long a , b , c , d;
    cin >> a >> b >> c >> d;
    if ( a == c ) {
        if ( a == c && b == d )
            cout << a << " " << b ;
        else if ( a == c && b < d ) 
            cout << a << " " << b ;
        else if( a == c && b > d ) 
            cout << a << " " << d ;
    }
    else if ( a == d && c < a )
        cout << a << " " << d ;
    else if( c < a && d > a && d < b )
        cout << a << " " << d ;
    else if( c < a && b == d )
        cout << a << " " << b ;
    else if ( c < a && a < d && b < d )
        cout << a << " " << b ;
    else if ( a < c && c < b && d < b && d > a ) 
        cout << c << " " << d ;
    else if ( a < c && c < b && d == b )
        cout << c << " " << d ;
    else if ( a < c && c < b && d > b  && d > c )
        cout << c << " " << b ;
    else if ( b == c && c == d  && a < b )
        cout << b << " " << c ;
    else if ( a == c && c == d   && a < b )
        cout << a << " " << c ;
    else if ( a == b && b == c && c == d )
        cout << a << " " << c ;
    else if ( b == c && a < b && d > b )
        cout << b << " " << c ;
    else
        cout << -1 ;
    
    return 0;
}