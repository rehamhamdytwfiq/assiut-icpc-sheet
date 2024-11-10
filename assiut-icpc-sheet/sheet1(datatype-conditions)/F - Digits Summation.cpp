#include <iostream>
using namespace std;
int main()
{
    long long x ;
    long long y ;
    cin >> x >> y ;
    int num1 = x % 10 ;
    int num2 = y % 10 ;
    cout << num1 + num2 <<endl;
    return 0;
}