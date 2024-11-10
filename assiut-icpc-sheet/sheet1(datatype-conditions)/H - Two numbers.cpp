#include <iostream>
#include <cmath>
using namespace std ;
int main()
{
    float x ;
    float y ;
    cin >> x >> y ;
    double result = x / y ;
    cout << "floor " << x << " / " << y << " = " << floor(result) <<endl ;
    cout << "ceil "  << x << " / " << y << " = " << ceil(result)  <<endl ;
    cout << "round " << x << " / " << y << " = " << round(result) <<endl ;
    return 0 ;
}