#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std ;
int main()
{
    cout << fixed << setprecision(9);
    const  float pi = 3.141592653 ;
    float num ;
    cin >> num ;
    cout << pi * pow (num , 2) ;
    return 0 ;
}