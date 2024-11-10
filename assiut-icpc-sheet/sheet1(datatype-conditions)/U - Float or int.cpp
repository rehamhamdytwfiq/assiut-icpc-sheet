#include <iostream>
#include <cmath>
using namespace std ;
int main() {
    float n ;
    cin >> n;
    if (ceil(n) > n) 
        cout << "float " << floor(n) << " " << n - floor(n);
    else 
        cout << "int " << floor (n) ;
    return 0;
}