#include <iostream>
using namespace std;
int main()
{
    char mark ;
    int a , b ;
    cin >> a >> mark >> b ;
    if (mark == '+')
        cout << (a + b) ;
    else if(mark == '-')
        cout << (a - b) ;
    else if(mark == '*')
        cout << (a * b) ;
    else if(mark == '/')
        cout << (a / b) ;
    return 0 ;
}