#include <iostream>
using namespace std ;
int main() {
    int x ;
    cin >> x;
    const int y = x % 365 ;
    const int y1 = x / 365 ;
    const int m = y % 30 ;
    const int m1 = y / 30 ;
    int d = m ;
    if ( x >= 0 ) {
        cout<< y1 << " years" <<endl ;
        cout<< m1 << " months" <<endl ;
        cout<< d << " days" << endl ;
    }
    return 0 ;
}