#include <iostream>
using namespace std;
int main() {
    long a , b , c , d ;
    long result ;
    cin >> a >> b >> c >> d ;
    result = (((a % 100) * (b % 100)) % 100 * ((c % 100) * (d % 100)) % 100) % 100 ;
    if (result < 10) 
        cout << 0;
    cout << result << endl;
    return 0;
}